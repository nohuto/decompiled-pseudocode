/*
 * XREFs of memchr_0 @ 0x180022885
 * Callers:
 *     _Stoulx @ 0x180004C98 (_Stoulx.c)
 *     _Stoullx @ 0x1800057F8 (_Stoullx.c)
 *     _Stoxflt @ 0x18000C0E0 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
