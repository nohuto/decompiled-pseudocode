/*
 * XREFs of PsDereferencePartition @ 0x140302710
 * Callers:
 *     PfHardFaultLog @ 0x14020994C (PfHardFaultLog.c)
 *     MiRevertProcessorMove @ 0x14022559C (MiRevertProcessorMove.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     PfpPartitionDereferenceParent @ 0x140301524 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     PfLogFileDataAccess @ 0x140301920 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiRebuildLargePages @ 0x1403BBD60 (MiRebuildLargePages.c)
 *     MiRebalanceZeroFreeLists @ 0x1403BC4D0 (MiRebalanceZeroFreeLists.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MmQueryMemoryListInformation @ 0x1403BE2A8 (MmQueryMemoryListInformation.c)
 *     PfpLogApplicationEvent @ 0x1403BE670 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1403BE89C (PfLogForegroundProcess.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmFreeNonChargedSecurePages @ 0x140413B08 (MmFreeNonChargedSecurePages.c)
 *     MmAllocateContiguousMemoryEx @ 0x140414940 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140415540 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     EtwpClearPartitionContext @ 0x1404BA2A8 (EtwpClearPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404D1B5C (MmGetNodeFastLargePageCounts.c)
 *     CcGetPartitionWithCreate @ 0x1404DF450 (CcGetPartitionWithCreate.c)
 *     PsQuitNextPartition @ 0x1405DA7B4 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x14064492C (EtwpSetPartitionContext.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiEmptyAccessLogs @ 0x140677E70 (MiEmptyAccessLogs.c)
 *     MiContractWsSwapPageFileWorker @ 0x140679750 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140708F44 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 *     PsCreatePartition @ 0x14076AEE0 (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 *     PspClosePartitionHandle @ 0x14076B2F0 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14076B4B0 (PspTeardownPartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14078849C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140788640 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140788894 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x140788C08 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     MmRemovePhysicalMemory @ 0x1407DA710 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x1407DB290 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407DB570 (MmQueryMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407EE418 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407EE544 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407EEE18 (MiSpecialPurposeMemoryRemoved.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407EEF94 (MiSpecialPurposeMemoryTypeDereference.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407EF0B0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1408E915C (SmProcessSystemStoreTrimRequest.c)
 *     MmAllocateUserStack @ 0x1408FD254 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408FD450 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408FD730 (MiAllocateVirtualMemoryCommon.c)
 *     NtManagePartition @ 0x14093B600 (NtManagePartition.c)
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14093C698 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14093C8A0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14093CB10 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MmBuildLargePages @ 0x1409FE260 (MmBuildLargePages.c)
 *     SmProcessCompressionInfoRequest @ 0x140A124BC (SmProcessCompressionInfoRequest.c)
 *     MmGetPageFileInformation @ 0x140A5A858 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6370 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 80);
    v5->Parameter = (void *)a1;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    v5->List.Flink = 0LL;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
