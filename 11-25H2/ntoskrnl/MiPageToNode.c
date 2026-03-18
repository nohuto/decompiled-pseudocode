/*
 * XREFs of MiPageToNode @ 0x140346EA0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiMapBackgroundPagesToZero @ 0x140210430 (MiMapBackgroundPagesToZero.c)
 *     MiLockStandbyLookasidePage @ 0x140212E20 (MiLockStandbyLookasidePage.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MmSetPfnListInfo @ 0x140221CC4 (MmSetPfnListInfo.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiAddKernelStackToPrcbCache @ 0x140346930 (MiAddKernelStackToPrcbCache.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     MiUpdateLargePageCandidates @ 0x1403476B0 (MiUpdateLargePageCandidates.c)
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiRecordLargePageCandidate @ 0x14034FA14 (MiRecordLargePageCandidate.c)
 *     MiCoalesceFreeLargePages @ 0x14034FBA4 (MiCoalesceFreeLargePages.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiMapContiguousMemoryLarge @ 0x14038FD94 (MiMapContiguousMemoryLarge.c)
 *     MiGetPartitionNodeInformation @ 0x140392848 (MiGetPartitionNodeInformation.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiAllocateMdlPagesByLists @ 0x1404161A0 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeMdlBatchPages @ 0x140416570 (MiInitializeMdlBatchPages.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiDemoteSlabEntriesDpc @ 0x14044E510 (MiDemoteSlabEntriesDpc.c)
 *     MmGrowKernelStackEx @ 0x140477F70 (MmGrowKernelStackEx.c)
 *     MiKernelShadowStackIdealForCaching @ 0x14048AE28 (MiKernelShadowStackIdealForCaching.c)
 *     MiDemoteLargeFreePage @ 0x14048BA98 (MiDemoteLargeFreePage.c)
 *     MiGetEnclavePageList @ 0x1404A4998 (MiGetEnclavePageList.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A8AC8 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiHugeRangeFreeToZero @ 0x1404ED414 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 *     MiEnableNewPfns @ 0x140660F7C (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140663F58 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140665344 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406658CC (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140665AEC (MiMoveBadHugeRangeCrossPartition.c)
 *     MiUpdateHugePageCounts @ 0x14066624C (MiUpdateHugePageCounts.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140677DDC (MiMoveBadPageChargesCrossPartition.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 *     MiGroupZeroHugeRange @ 0x14067A224 (MiGroupZeroHugeRange.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140680074 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1406813E4 (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406872B4 (MiFreeLargeProcessPagesToCache.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x14068777C (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407D8A84 (MiAddPhysicalMemoryChunks.c)
 *     MiDescribePageRun @ 0x1407D953C (MiDescribePageRun.c)
 *     MiMapNewPfns @ 0x1407D97EC (MiMapNewPfns.c)
 *     MiZeroHotAddMemory @ 0x1407DA4D4 (MiZeroHotAddMemory.c)
 *     MiAddRuns @ 0x1407DAFEC (MiAddRuns.c)
 *     MiCreateFreePfns @ 0x140C3FFDC (MiCreateFreePfns.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C40534 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C4088C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140C40FC8 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140C419DC (MxInitializeFreeNodeDescriptors.c)
 *     MxInsertFreePages @ 0x140C41B20 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140C41D18 (MxMapPfnRange.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 *     MiCreateKernelHalSlabRange @ 0x140C47F30 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C480EC (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeType @ 0x140C483BC (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2)
{
  int v1; // eax
  char *v2; // rdx
  int i; // r8d
  int v4; // r9d

  v1 = dword_140E2D884;
  if ( dword_140E2D880 > (unsigned int)dword_140E2D884
    || (v2 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, BugCheckParameter2 < *(_QWORD *)v2)
    || dword_140E2D880 != dword_140E2D884 && BugCheckParameter2 >= *((_QWORD *)v2 + 2) )
  {
    for ( i = 0; ; i = v4 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v4 = (i + v1) >> 1;
        v2 = (char *)qword_140E2D8E0 + 16 * v4;
        if ( BugCheckParameter2 >= *(_QWORD *)v2 )
          break;
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D8E0, 0LL);
        v1 = v4 - 1;
      }
      if ( v4 == dword_140E2D884 || BugCheckParameter2 < *((_QWORD *)v2 + 2) )
        break;
    }
    dword_140E2D880 = (i + v1) >> 1;
  }
  return *((unsigned int *)v2 + 2);
}
