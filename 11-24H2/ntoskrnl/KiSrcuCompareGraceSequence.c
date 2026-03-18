/*
 * XREFs of KiSrcuCompareGraceSequence @ 0x1404D3F60
 * Callers:
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSrcuCompareGraceSequence(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 - a2;
  if ( !v2 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( v2 > 0 )
    return 1LL;
  return result;
}
