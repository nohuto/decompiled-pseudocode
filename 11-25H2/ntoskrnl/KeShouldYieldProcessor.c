/*
 * XREFs of KeShouldYieldProcessor @ 0x1402B0440
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiWritePageFileHash @ 0x140226C80 (MiWritePageFileHash.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiUnlockMdlWritePages @ 0x14023DBA0 (MiUnlockMdlWritePages.c)
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiDeleteEmptySubsections @ 0x1402A6D2C (MiDeleteEmptySubsections.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402C2F60 (MiFillPoolCommitPageTable.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1402C541C (MiConvertSmallPageRangeToLarge.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbePacketContended @ 0x1403386E0 (MiProbePacketContended.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiConvertActiveLargePageToSmall @ 0x14038A558 (MiConvertActiveLargePageToSmall.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiInitializeMdlBatchPages @ 0x140416570 (MiInitializeMdlBatchPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14041753C (MiInitializeLargeMdlLeafPfns.c)
 *     MiDemoteSlabEntriesDpc @ 0x14044E510 (MiDemoteSlabEntriesDpc.c)
 *     MiQueryAddressSpan @ 0x14045AA68 (MiQueryAddressSpan.c)
 *     MiGetPageChainYield @ 0x14045F44C (MiGetPageChainYield.c)
 *     MiConvertLargeFreePageToActive @ 0x14049FCE4 (MiConvertLargeFreePageToActive.c)
 *     IopMcShouldYield @ 0x1404BDC4C (IopMcShouldYield.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiPurgeZeroListHead @ 0x1404C5F04 (MiPurgeZeroListHead.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiDoGangAssignment @ 0x1404D4858 (MiDoGangAssignment.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F0DD4 (MiFlushFileOnlyDeleteChain.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B3BF8 (KeAlertMultipleThreadByThreadId.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiHugePurgeZeroList @ 0x140664DEC (MiHugePurgeZeroList.c)
 *     MiSetGraphicsPtes @ 0x140666BE8 (MiSetGraphicsPtes.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14066AE10 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiEnableLargeSubsection @ 0x14066F2B4 (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140677034 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiSoloZeroHugeRange @ 0x14067A584 (MiSoloZeroHugeRange.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiZeroPageCalibrateDpc @ 0x140688E20 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402B2120 (EtwTraceShouldYieldProcessor.c)
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
  unsigned int v8; // edi
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
    v8 = 1;
    v2 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_15;
      goto LABEL_8;
    }
  }
  else
  {
    if ( CurrentPrcb->NestingLevel )
    {
      v3 = 1LL;
      if ( DpcWatchdogCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v8 = 7;
          goto LABEL_15;
        }
        goto LABEL_8;
      }
      return 0;
    }
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v8 = 2;
      goto LABEL_15;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v8 = 3;
      goto LABEL_15;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v8 = 4;
      goto LABEL_15;
    }
  }
  if ( DpcWatchdogCount <= 7 )
    return 0;
  if ( !v2 )
    goto LABEL_24;
LABEL_8:
  if ( (DpcRequestSummary & 0x1E) == 0 )
  {
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v8 = 6;
      goto LABEL_15;
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
    v8 = 0;
    goto LABEL_15;
  }
  v8 = 5;
LABEL_15:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v8, DpcWatchdogCount, DpcTimeCount, v3);
  LOBYTE(v1) = v8 != 0;
  return v1;
}
