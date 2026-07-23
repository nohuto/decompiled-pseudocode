/*
 * XREFs of KeShouldYieldProcessor @ 0x14023BA60
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiUnlockMdlWritePages @ 0x140257B30 (MiUnlockMdlWritePages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiDoGangAssignment @ 0x14026FEE4 (MiDoGangAssignment.c)
 *     MiDeleteEmptySubsections @ 0x140292788 (MiDeleteEmptySubsections.c)
 *     MiConvertLargeFreePageToActive @ 0x1402EDE58 (MiConvertLargeFreePageToActive.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiGetPageChainYield @ 0x14038F588 (MiGetPageChainYield.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbePacketContended @ 0x140391364 (MiProbePacketContended.c)
 *     MiInitializeMdlBatchPages @ 0x140393678 (MiInitializeMdlBatchPages.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiWritePageFileHash @ 0x140426540 (MiWritePageFileHash.c)
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 *     MiQueryAddressSpan @ 0x14044AF24 (MiQueryAddressSpan.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 *     IopMcShouldYield @ 0x1404B7DE8 (IopMcShouldYield.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiPurgeZeroListHead @ 0x1404BFBD4 (MiPurgeZeroListHead.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404C49B8 (MiVadRangeIsIoSpace.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F26E4 (MiFlushFileOnlyDeleteChain.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B50C0 (KeAlertMultipleThreadByThreadId.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiSetGraphicsPtes @ 0x140673868 (MiSetGraphicsPtes.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140677A40 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140683A44 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiSoloZeroHugeRange @ 0x140686F44 (MiSoloZeroHugeRange.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiZeroPageCalibrateDpc @ 0x140695350 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // ett

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
    SchedulerAssist = (unsigned __int32 *)v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        LODWORD(v13) = v12 & 0xFFDFFFFF;
        v14 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v14 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v10, v13, SchedulerAssist, v3);
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
