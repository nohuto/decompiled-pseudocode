/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x14033E678
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiReInitializeFreeSlabPfn @ 0x140218778 (MiReInitializeFreeSlabPfn.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14033D370 (MiGetPerfectFreeOrZeroPage.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiPreInitializeSystemImagePage @ 0x1404C5268 (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066BFA0 (MiFreeLargeInitializationCodePages.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14066F968 (MiPreparePfnDatabasePageForFree.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
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
  v2 = qword_140E2DCC0;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & 0x80) != 0 )
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
