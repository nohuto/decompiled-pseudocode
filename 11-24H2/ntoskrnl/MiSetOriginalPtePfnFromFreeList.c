/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1402F6568
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x1402F55E0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403A1C18 (MiReInitializeFreeSlabPfn.c)
 *     MiSwapStackPageNoDpc @ 0x1404307F4 (MiSwapStackPageNoDpc.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiPreInitializeSystemImagePage @ 0x1404CBDEC (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14066E794 (MiPreparePfnDatabasePageForFree.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
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
  v2 = qword_140E2DB80;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & 0x80) != 0 )
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
