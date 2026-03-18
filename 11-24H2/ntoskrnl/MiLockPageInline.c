/*
 * XREFs of MiLockPageInline @ 0x140291550
 * Callers:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiRelockProtoPoolPage @ 0x14023BCDC (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x14023BD94 (MiDoubleLockMdlPage.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiValidatePagefilePageHash @ 0x1402E57B0 (MiValidatePagefilePageHash.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiGetSystemPage @ 0x140311984 (MiGetSystemPage.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiBuildMappedCluster @ 0x14036ABB8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 *     MiReadyLargePageToFree @ 0x1403A36B8 (MiReadyLargePageToFree.c)
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiAssignInitialPageAttribute @ 0x1403A6FA4 (MiAssignInitialPageAttribute.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x1403CC4F0 (MiFreeLargePages.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MiDeleteEnclavePage @ 0x1403D1B2C (MiDeleteEnclavePage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D4F80 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x1403D5A54 (MiFreeLargePageChain.c)
 *     MiUnlockPagedAddress @ 0x1403F85B4 (MiUnlockPagedAddress.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiFreeSecureKernelPage @ 0x140410B08 (MiFreeSecureKernelPage.c)
 *     MiLargeFreePageToMdl @ 0x14041F370 (MiLargeFreePageToMdl.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     MiDoubleUnlockMdlPage @ 0x140447B0C (MiDoubleUnlockMdlPage.c)
 *     MiSetPfnOwnedAndActive @ 0x14045B630 (MiSetPfnOwnedAndActive.c)
 *     MiStoreModifiedWriteComplete @ 0x14045C418 (MiStoreModifiedWriteComplete.c)
 *     MiLockAndInsertPageInFreeList @ 0x1404653B4 (MiLockAndInsertPageInFreeList.c)
 *     MiInitializeEnclavePfn @ 0x1404740A8 (MiInitializeEnclavePfn.c)
 *     MiSetPageTablePfnBuddy @ 0x140498190 (MiSetPageTablePfnBuddy.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiMarkPfnTradable @ 0x1404B3C14 (MiMarkPfnTradable.c)
 *     MiPreInitializeSystemImagePage @ 0x1404CBDEC (MiPreInitializeSystemImagePage.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiReturnEnclavePage @ 0x1404D4E64 (MiReturnEnclavePage.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiEnableNewPfns @ 0x14066CABC (MiEnableNewPfns.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiLogMdlRangeEvent @ 0x140671DA8 (MiLogMdlRangeEvent.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiReturnPfnList @ 0x140679AA0 (MiReturnPfnList.c)
 *     MiChangePagingFileMaximum @ 0x140679DB0 (MiChangePagingFileMaximum.c)
 *     MiDecrementProtoShareCounts @ 0x14067A6F4 (MiDecrementProtoShareCounts.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14067FD28 (MmDbgMarkPfnModifiedWorker.c)
 *     MiChangeAwePageAttributes @ 0x140681768 (MiChangeAwePageAttributes.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiReadyLargeAwePageForFree @ 0x140682A08 (MiReadyLargeAwePageForFree.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x140683208 (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068CC74 (MiCoalesceActivePagesIntoFree.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140692CE0 (MiPrepareLargePageSubPageForFree.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MiFreeBootPageTable @ 0x140C4F170 (MiFreeBootPageTable.c)
 *     MiInitializeDummyPages @ 0x140C4F7E0 (MiInitializeDummyPages.c)
 *     MiInitializePfnsForValidMappings @ 0x140C518FC (MiInitializePfnsForValidMappings.c)
 *     MxInsertFreePages @ 0x140C52D50 (MxInsertFreePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiTradeBootImagePage @ 0x140C5BB90 (MiTradeBootImagePage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockPageInline(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
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
