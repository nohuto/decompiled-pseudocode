/*
 * XREFs of MiLockPageInline @ 0x14032B8A0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiValidatePagefilePageHash @ 0x140226530 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140226C80 (MiWritePageFileHash.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiRelockProtoPoolPage @ 0x14033DFA0 (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x14033E058 (MiDoubleLockMdlPage.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x14038C69C (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiReadyLargePageToFree @ 0x14038D6BC (MiReadyLargePageToFree.c)
 *     MiFinishLargePageFree @ 0x14038D7E8 (MiFinishLargePageFree.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 *     MiAssignInitialPageAttribute @ 0x14038FFF4 (MiAssignInitialPageAttribute.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140392A30 (MiGetLargePageDemoteAsNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiDeleteEnclavePage @ 0x1403FC8BC (MiDeleteEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1403FD254 (MiInitializeEnclavePfn.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiBuildMappedCluster @ 0x14040DB84 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiFreeSecureKernelPage @ 0x140413C84 (MiFreeSecureKernelPage.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     MiDoubleUnlockMdlPage @ 0x14044A2E8 (MiDoubleUnlockMdlPage.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiGetSystemPage @ 0x140454030 (MiGetSystemPage.c)
 *     MiUnlockPagedAddress @ 0x140459E94 (MiUnlockPagedAddress.c)
 *     MiSetPfnOwnedAndActive @ 0x14045C318 (MiSetPfnOwnedAndActive.c)
 *     MiStoreModifiedWriteComplete @ 0x140463814 (MiStoreModifiedWriteComplete.c)
 *     MiSetPageTablePfnBuddy @ 0x14049D0B8 (MiSetPageTablePfnBuddy.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MiLargeFreePageToMdl @ 0x14049FBFC (MiLargeFreePageToMdl.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiFreeLargePageChain @ 0x1404AE044 (MiFreeLargePageChain.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiMarkPfnTradable @ 0x1404B4A4C (MiMarkPfnTradable.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiPreInitializeSystemImagePage @ 0x1404CBE94 (MiPreInitializeSystemImagePage.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiReturnEnclavePage @ 0x1404D558C (MiReturnEnclavePage.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14065F290 (MiFreeLargeInitializationCodePages.c)
 *     MiEnableNewPfns @ 0x140660F7C (MiEnableNewPfns.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiLogMdlRangeEvent @ 0x140666300 (MiLogMdlRangeEvent.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiReturnPfnList @ 0x14066E1F4 (MiReturnPfnList.c)
 *     MiChangePagingFileMaximum @ 0x14066E504 (MiChangePagingFileMaximum.c)
 *     MiDecrementProtoShareCounts @ 0x14066EF34 (MiDecrementProtoShareCounts.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140674508 (MmDbgMarkPfnModifiedWorker.c)
 *     MiChangeAwePageAttributes @ 0x140675F48 (MiChangeAwePageAttributes.c)
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiReadyLargeAwePageForFree @ 0x1406771E8 (MiReadyLargeAwePageForFree.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x1406779E8 (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1406813E4 (MiCoalesceActivePagesIntoFree.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140687880 (MiPrepareLargePageSubPageForFree.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MiFreeBootPageTable @ 0x140C3DF40 (MiFreeBootPageTable.c)
 *     MiInitializeDummyPages @ 0x140C3E5B0 (MiInitializeDummyPages.c)
 *     MiInitializePfnsForValidMappings @ 0x140C406CC (MiInitializePfnsForValidMappings.c)
 *     MxInsertFreePages @ 0x140C41B20 (MxInsertFreePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockPageInline(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  return CurrentIrql;
}
