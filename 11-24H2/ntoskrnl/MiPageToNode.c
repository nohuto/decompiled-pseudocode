/*
 * XREFs of MiPageToNode @ 0x14026C1E0
 * Callers:
 *     MiMapBackgroundPagesToZero @ 0x14020B740 (MiMapBackgroundPagesToZero.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     MiUpdateLargePageCandidates @ 0x14026A2B0 (MiUpdateLargePageCandidates.c)
 *     MmDeleteKernelStack @ 0x14026A4B0 (MmDeleteKernelStack.c)
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiAddKernelStackToPrcbCache @ 0x14026BC20 (MiAddKernelStackToPrcbCache.c)
 *     MiLockStandbyLookasidePage @ 0x14026C300 (MiLockStandbyLookasidePage.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiCoalesceFreeLargePages @ 0x140308844 (MiCoalesceFreeLargePages.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiRecordLargePageCandidate @ 0x1403096C4 (MiRecordLargePageCandidate.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiFreeLargePages @ 0x1403CC4F0 (MiFreeLargePages.c)
 *     MiGetPartitionNodeInformation @ 0x1403D4C28 (MiGetPartitionNodeInformation.c)
 *     MiAllocateMdlPagesByLists @ 0x140412C40 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeMdlBatchPages @ 0x140413004 (MiInitializeMdlBatchPages.c)
 *     MiDemoteLargeFreePage @ 0x14042F57C (MiDemoteLargeFreePage.c)
 *     MiLargePagePromote @ 0x1404316D4 (MiLargePagePromote.c)
 *     MiDemoteSlabEntriesDpc @ 0x140442780 (MiDemoteSlabEntriesDpc.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140477930 (MiKernelShadowStackIdealForCaching.c)
 *     MmGrowKernelStackEx @ 0x140477D50 (MmGrowKernelStackEx.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A2E44 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiGetEnclavePageList @ 0x1404A4EC8 (MiGetEnclavePageList.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiHugeRangeFreeToZero @ 0x1404F0BF0 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiEnableNewPfns @ 0x14066CABC (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x14066FA78 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140670DEC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140671594 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiUpdateHugePageCounts @ 0x140671CF4 (MiUpdateHugePageCounts.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x1406835E0 (MiMoveBadPageChargesCrossPartition.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406844A4 (MiTryUnlinkNodeLargePages.c)
 *     MiGroupZeroHugeRange @ 0x140685AB4 (MiGroupZeroHugeRange.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068B904 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068CC74 (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140692714 (MiFreeLargeProcessPagesToCache.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x140692BDC (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8944 (MiAddPhysicalMemoryChunks.c)
 *     MiDescribePageRun @ 0x1407E93FC (MiDescribePageRun.c)
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 *     MiZeroHotAddMemory @ 0x1407EA394 (MiZeroHotAddMemory.c)
 *     MiAddRuns @ 0x1407EAE8C (MiAddRuns.c)
 *     MiCreateFreePfns @ 0x140C5120C (MiCreateFreePfns.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C51764 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C51ABC (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140C521F8 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140C52C0C (MxInitializeFreeNodeDescriptors.c)
 *     MxInsertFreePages @ 0x140C52D50 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140C52F48 (MxMapPfnRange.c)
 *     MxInsertEnclaveBootPages @ 0x140C581C4 (MxInsertEnclaveBootPages.c)
 *     MiCreateKernelHalSlabRange @ 0x140C59210 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C59424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeType @ 0x140C596EC (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2)
{
  int v1; // eax
  char *v2; // rdx
  int i; // r9d
  int v4; // r8d

  v1 = dword_140E2DAC4;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v2 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, BugCheckParameter2 < *(_QWORD *)v2)
    || dword_140E2DAC0 != dword_140E2DAC4 && BugCheckParameter2 >= *((_QWORD *)v2 + 2) )
  {
    for ( i = 0; ; i = v4 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v4 = (i + v1) >> 1;
        v2 = (char *)qword_140E2DB20 + 16 * v4;
        if ( BugCheckParameter2 >= *(_QWORD *)v2 )
          break;
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2DB20, 0LL);
        v1 = v4 - 1;
      }
      if ( v4 == dword_140E2DAC4 || BugCheckParameter2 < *((_QWORD *)v2 + 2) )
        break;
    }
    dword_140E2DAC0 = (i + v1) >> 1;
  }
  return *((unsigned int *)v2 + 2);
}
