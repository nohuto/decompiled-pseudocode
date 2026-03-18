/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14022BEE0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C60D4 (MiReInitializeFreeSlabPfn.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 *     MiPreInitializeSystemImagePage @ 0x1404CBE94 (MiPreInitializeSystemImagePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14065F290 (MiFreeLargeInitializationCodePages.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiPreparePfnDatabasePageForFree @ 0x140662C54 (MiPreparePfnDatabasePageForFree.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14068651C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetOriginalPtePfnFromFreeList(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = 128LL;
  if ( *a1 )
  {
    v2 = *a1 & 0xFFFFFFFFFFFFFC9FuLL;
    goto LABEL_7;
  }
  v2 = qword_140E2D940;
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & 0x80) != 0 )
    {
      result = 144LL;
      goto LABEL_5;
    }
LABEL_7:
    result = v2 | 0x80;
  }
LABEL_5:
  *a1 = result;
  return result;
}
