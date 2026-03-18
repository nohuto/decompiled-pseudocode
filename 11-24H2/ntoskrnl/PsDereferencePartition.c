/*
 * XREFs of PsDereferencePartition @ 0x140275E60
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     PfpPartitionDereferenceParent @ 0x140274CCC (PfpPartitionDereferenceParent.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfLogFileDataAccess @ 0x140275080 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiRevertProcessorMove @ 0x14030AAFC (MiRevertProcessorMove.c)
 *     PfHardFaultLog @ 0x140398B98 (PfHardFaultLog.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiRebuildLargePages @ 0x1403D2300 (MiRebuildLargePages.c)
 *     MiRebalanceZeroFreeLists @ 0x1403D2A70 (MiRebalanceZeroFreeLists.c)
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     MmQueryMemoryListInformation @ 0x1403D447C (MmQueryMemoryListInformation.c)
 *     PfpLogApplicationEvent @ 0x1403D4840 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1403D4A6C (PfLogForegroundProcess.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmFreeNonChargedSecurePages @ 0x14041098C (MmFreeNonChargedSecurePages.c)
 *     MmAllocateContiguousMemoryEx @ 0x140411210 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140411FD0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A8CB0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     EtwpClearPartitionContext @ 0x1404B9100 (EtwpClearPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404D1A7C (MmGetNodeFastLargePageCounts.c)
 *     CcGetPartitionWithCreate @ 0x1404DEB40 (CcGetPartitionWithCreate.c)
 *     PsQuitNextPartition @ 0x1405E6934 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x14065093C (EtwpSetPartitionContext.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     MiContractWsSwapPageFileWorker @ 0x140684FE0 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140715044 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     PsCreatePartition @ 0x14077AA80 (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     PspClosePartitionHandle @ 0x14077AE90 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14077B050 (PspTeardownPartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14079786C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797A10 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140797C64 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x140797FD8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x1407EB130 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407EB410 (MmQueryMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EBB48 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FE2A8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FECA8 (MiSpecialPurposeMemoryRemoved.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FEE24 (MiSpecialPurposeMemoryTypeDereference.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FEF40 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     MmAllocateUserStack @ 0x1408DE514 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408DE710 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408DE9F0 (MiAllocateVirtualMemoryCommon.c)
 *     NtManagePartition @ 0x140933FF0 (NtManagePartition.c)
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140940F58 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1409413D0 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MmBuildLargePages @ 0x1409F7FAC (MmBuildLargePages.c)
 *     SmProcessCompressionInfoRequest @ 0x140A18F64 (SmProcessCompressionInfoRequest.c)
 *     MmGetPageFileInformation @ 0x140A5CA68 (MmGetPageFileInformation.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A5FC18 (SmProcessSystemStoreTrimRequest.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AAB930 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmPerformMemoryListCommand @ 0x140B6DB74 (MmPerformMemoryListCommand.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
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
