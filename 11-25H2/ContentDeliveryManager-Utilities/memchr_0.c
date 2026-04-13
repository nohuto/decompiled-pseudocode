/*
 * XREFs of memchr_0 @ 0x180022875
 * Callers:
 *     _Stoulx @ 0x180004C88 (_Stoulx.c)
 *     _Stoullx @ 0x1800057E8 (_Stoullx.c)
 *     _Stoxflt @ 0x18000C0D0 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
