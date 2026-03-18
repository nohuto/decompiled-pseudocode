/*
 * XREFs of MiAddPageToHeatList @ 0x14043F8DC
 * Callers:
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiCoalesceFreeLargePages @ 0x140308844 (MiCoalesceFreeLargePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiChangePageHeatImmediate @ 0x14043F808 (MiChangePageHeatImmediate.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiZeroPageMakeHot @ 0x1406903F8 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x14043F904 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges(a1, a2, a3);
  if ( (_DWORD)result )
    return MiIssuePageHeatList(a1);
  return result;
}
