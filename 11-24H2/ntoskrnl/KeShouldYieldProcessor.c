/*
 * XREFs of KeShouldYieldProcessor @ 0x1402DA180
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402EB2D0 (MiFillPoolCommitPageTable.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1402EE2CC (MiConvertSmallPageRangeToLarge.c)
 *     MiUnlockMdlWritePages @ 0x1402F1FF0 (MiUnlockMdlWritePages.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiConvertLargeActivePageToChain @ 0x1403083C0 (MiConvertLargeActivePageToChain.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 *     MiDoGangAssignment @ 0x1403A8984 (MiDoGangAssignment.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiQueryAddressSpan @ 0x1403CE718 (MiQueryAddressSpan.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiGetPageChainYield @ 0x1403CF100 (MiGetPageChainYield.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbePacketContended @ 0x1403CFF40 (MiProbePacketContended.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEmptySubsections @ 0x1403F7FC0 (MiDeleteEmptySubsections.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140413004 (MiInitializeMdlBatchPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140414A8C (MiInitializeLargeMdlLeafPfns.c)
 *     MiConvertLargeFreePageToActive @ 0x14041F464 (MiConvertLargeFreePageToActive.c)
 *     MiConvertActiveLargePageToSmall @ 0x14041F5E8 (MiConvertActiveLargePageToSmall.c)
 *     MiDemoteSlabEntriesDpc @ 0x140442780 (MiDemoteSlabEntriesDpc.c)
 *     MiCommitEnclavePages @ 0x140473ACC (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     IopMcShouldYield @ 0x1404BCC78 (IopMcShouldYield.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiPurgeZeroListHead @ 0x1404C6774 (MiPurgeZeroListHead.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB498 (MiVadRangeIsIoSpace.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F4DE4 (MiFlushFileOnlyDeleteChain.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B7AE8 (KeAlertMultipleThreadByThreadId.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiHugePurgeZeroList @ 0x140670894 (MiHugePurgeZeroList.c)
 *     MiSetGraphicsPtes @ 0x140672698 (MiSetGraphicsPtes.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140676870 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140682854 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiSoloZeroHugeRange @ 0x140685E14 (MiSoloZeroHugeRange.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiZeroPageCalibrateDpc @ 0x140694280 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402DBE00 (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rax
  LOGICAL v1; // ebx
  int v2; // r8d
  __int64 v3; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rcx
  unsigned int v9; // edi
  struct _KPRCB *v10; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v9 = 1;
    v2 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_6;
    if ( CurrentPrcb->QuantumEnd )
      goto LABEL_9;
LABEL_16:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v9 = 5;
      goto LABEL_9;
    }
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v9 = 6;
      goto LABEL_9;
    }
LABEL_24:
    _disable();
    CurrentPrcb->DpcWatchdogCount = 0;
    CurrentPrcb->DpcTimeCount = 0;
    v10 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
    _enable();
    v9 = 0;
    goto LABEL_9;
  }
  if ( CurrentPrcb->NestingLevel )
  {
    v3 = 1LL;
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( CurrentPrcb->QuantumEnd )
    {
      v9 = 7;
      goto LABEL_9;
    }
    goto LABEL_16;
  }
  if ( (DpcRequestSummary & 0x1E) == 0 )
  {
    if ( CurrentPrcb->QuantumEnd )
    {
      v9 = 3;
      goto LABEL_9;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v9 = 4;
      goto LABEL_9;
    }
LABEL_6:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v2 )
      goto LABEL_24;
    goto LABEL_16;
  }
  v9 = 2;
LABEL_9:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v9, DpcWatchdogCount, DpcTimeCount, v3);
  LOBYTE(v1) = v9 != 0;
  return v1;
}
