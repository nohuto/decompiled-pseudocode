/*
 * XREFs of MiAddPageToHeatList @ 0x140435B9C
 * Callers:
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiCoalesceFreeLargePages @ 0x140312724 (MiCoalesceFreeLargePages.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiChangePageHeatImmediate @ 0x140435AC8 (MiChangePageHeatImmediate.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiZeroPageMakeHot @ 0x1406914C8 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x140435BC4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges(a1, a2, a3);
  if ( (_DWORD)result )
    return MiIssuePageHeatList(a1);
  return result;
}
