/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x14046390C
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x14046393C (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
