/*
 * XREFs of CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x1407E10E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpCleanUpKCBCacheTable @ 0x14097BF7C (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpCleanUpHigherLayerKcbCachesPostCallback(__int64 a1)
{
  CmpCleanUpKCBCacheTable(*(_QWORD *)(a1 + 32));
  if ( *(_QWORD *)a1 == 1LL )
    *(_WORD *)(a1 + 8) |= 0x20u;
  return 0LL;
}
