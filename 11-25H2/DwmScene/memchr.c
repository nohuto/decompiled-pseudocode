/*
 * XREFs of memchr @ 0x1800D4E4C
 * Callers:
 *     sub_18001DC94 @ 0x18001DC94 (sub_18001DC94.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  return __imp_memchr(Buf, Val, MaxCount);
}
