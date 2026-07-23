/*
 * XREFs of PsDereferencePartition @ 0x14022B3F0
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfLogFileDataAccess @ 0x14022A610 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     PfpLogApplicationEvent @ 0x1402627C0 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1402629EC (PfLogForegroundProcess.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiRevertProcessorMove @ 0x1403149DC (MiRevertProcessorMove.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     PfHardFaultLog @ 0x1403512E8 (PfHardFaultLog.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403966A0 (MmAllocateContiguousMemoryEx.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebuildLargePages @ 0x1403F6DC0 (MiRebuildLargePages.c)
 *     MiRebalanceZeroFreeLists @ 0x1403F7590 (MiRebalanceZeroFreeLists.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     EtwpClearPartitionContext @ 0x1404B3FA0 (EtwpClearPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404CAABC (MmGetNodeFastLargePageCounts.c)
 *     CcGetPartitionWithCreate @ 0x1404D8560 (CcGetPartitionWithCreate.c)
 *     PsQuitNextPartition @ 0x1405E3F34 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x14064EF1C (EtwpSetPartitionContext.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MiContractWsSwapPageFileWorker @ 0x140686110 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140712BD4 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PsCreatePartition @ 0x14077A930 (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     PspClosePartitionHandle @ 0x14077AD40 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14077AF00 (PspTeardownPartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14079797C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797B20 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407EB9E0 (MmQueryMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407EFD80 (MiScanPagefileSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FEA18 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FEB44 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FF418 (MiSpecialPurposeMemoryRemoved.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FF594 (MiSpecialPurposeMemoryTypeDereference.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FF6B0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     MmAllocateUserStack @ 0x1409150D0 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1409152C0 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1409155A0 (MiAllocateVirtualMemoryCommon.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B630 (MiInitializeCreateSectionPacket.c)
 *     MmBuildLargePages @ 0x1409F091C (MmBuildLargePages.c)
 *     SmProcessCompressionInfoRequest @ 0x140A120D4 (SmProcessCompressionInfoRequest.c)
 *     MmGetPageFileInformation @ 0x140A54280 (MmGetPageFileInformation.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A58168 (SmProcessSystemStoreTrimRequest.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6B60 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
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
