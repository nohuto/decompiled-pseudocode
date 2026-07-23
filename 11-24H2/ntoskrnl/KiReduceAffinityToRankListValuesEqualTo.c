/*
 * XREFs of KiReduceAffinityToRankListValuesEqualTo @ 0x140457418
 * Callers:
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReduceAffinityToRankListValuesEqualTo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r9
  __int64 v4; // r10

  v2 = 0LL;
  v3 = 0;
  v4 = 0LL;
  do
  {
    if ( _bittest64(&a1, v3) && *(_BYTE *)(v4 + a2) == 1 )
      v2 |= 1LL << v4;
    ++v3;
    ++v4;
  }
  while ( v3 < 0x40u );
  return v2;
}
