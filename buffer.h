#ifndef buffer_h
#define buffer_h

typedef struct buffer buffer;

struct buffer {
	char *	data;
	size_t	len;
	size_t	sz;
};

buffer *	buffer_new(size_t);
void		buffer_free(buffer *);
int		buffer_append(buffer *, const char *, size_t);
int		buffer_append_buf(buffer *, const buffer *);
int		buffer_append_str(buffer *, const char *);
void		buffer_clear(buffer *);

#endif /* buffer_h */
