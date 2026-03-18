/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x14046AE90
 * Callers:
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x14046AEC0 (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
