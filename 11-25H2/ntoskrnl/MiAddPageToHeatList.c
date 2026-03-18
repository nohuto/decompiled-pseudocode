/*
 * XREFs of MiAddPageToHeatList @ 0x14044047C
 * Callers:
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiCoalesceFreeLargePages @ 0x14034FBA4 (MiCoalesceFreeLargePages.c)
 *     MiGetLargePageChain @ 0x140378BB8 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiChangePageHeatImmediate @ 0x14044039C (MiChangePageHeatImmediate.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiZeroPageMakeHot @ 0x140684F98 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x1404404A4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges(a1, a2, a3);
  if ( (_DWORD)result )
    return MiIssuePageHeatList(a1);
  return result;
}
