/*
 * XREFs of memchr @ 0x1800D4FAC
 * Callers:
 *     sub_18001DDF4 @ 0x18001DDF4 (sub_18001DDF4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  return __imp_memchr(Buf, Val, MaxCount);
}
