/*
 * XREFs of MiPageToNode @ 0x140221770
 * Callers:
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageCandidates @ 0x14021F840 (MiUpdateLargePageCandidates.c)
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiAddKernelStackToPrcbCache @ 0x1402211B0 (MiAddKernelStackToPrcbCache.c)
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiGetPartitionNodeInformation @ 0x1402636C4 (MiGetPartitionNodeInformation.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiMapContiguousMemoryLarge @ 0x14026BE10 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteLargeFreePage @ 0x1402EFE44 (MiDemoteLargeFreePage.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiCoalesceFreeLargePages @ 0x140312724 (MiCoalesceFreeLargePages.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 *     MiMapBackgroundPagesToZero @ 0x140331C80 (MiMapBackgroundPagesToZero.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiInitializeMdlBatchPages @ 0x140393678 (MiInitializeMdlBatchPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140395080 (MiAllocateMdlPagesByLists.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140473F28 (MiKernelShadowStackIdealForCaching.c)
 *     MmGrowKernelStackEx @ 0x140474350 (MmGrowKernelStackEx.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiGetEnclavePageList @ 0x14049FC58 (MiGetEnclavePageList.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140670C48 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140671FBC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiUpdateHugePageCounts @ 0x140672EC4 (MiUpdateHugePageCounts.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14068478C (MiMoveBadPageChargesCrossPartition.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
 *     MiGroupZeroHugeRange @ 0x140686BE4 (MiGroupZeroHugeRange.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068CA34 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068DDA4 (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406937E4 (MiFreeLargeProcessPagesToCache.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x140693CAC (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8F14 (MiAddPhysicalMemoryChunks.c)
 *     MiDescribePageRun @ 0x1407E99CC (MiDescribePageRun.c)
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 *     MiZeroHotAddMemory @ 0x1407EA964 (MiZeroHotAddMemory.c)
 *     MiAddRuns @ 0x1407EB45C (MiAddRuns.c)
 *     MiCreateFreePfns @ 0x140C5339C (MiCreateFreePfns.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C538F4 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C53C4C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140C54388 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140C54D9C (MxInitializeFreeNodeDescriptors.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140C550D8 (MxMapPfnRange.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 *     MiCreateKernelHalSlabRange @ 0x140C5B3A0 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C5B5B4 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeType @ 0x140C5B87C (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2)
{
  int v1; // eax
  char *v2; // rdx
  int i; // r9d
  int v4; // r8d

  v1 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v2 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, BugCheckParameter2 < *(_QWORD *)v2)
    || dword_140E2DC00 != dword_140E2DC04 && BugCheckParameter2 >= *((_QWORD *)v2 + 2) )
  {
    for ( i = 0; ; i = v4 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v4 = (i + v1) >> 1;
        v2 = (char *)qword_140E2DC60 + 16 * v4;
        if ( BugCheckParameter2 >= *(_QWORD *)v2 )
          break;
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2DC60, 0LL);
        v1 = v4 - 1;
      }
      if ( v4 == dword_140E2DC04 || BugCheckParameter2 < *((_QWORD *)v2 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v1) >> 1;
  }
  return *((unsigned int *)v2 + 2);
}
