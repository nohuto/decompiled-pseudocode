/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     MiFindBestZeroingProcessor @ 0x140209DE8 (MiFindBestZeroingProcessor.c)
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     MiGetImageProtoProtection @ 0x140210790 (MiGetImageProtoProtection.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiFreePageToSlabAllocator @ 0x1402241C8 (MiFreePageToSlabAllocator.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14022E880 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiKernelStackVaToStackNode @ 0x14024468C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     MiTransientCombineAddress @ 0x1402448C4 (MiTransientCombineAddress.c)
 *     MiObtainParkedCoreMasks @ 0x140244998 (MiObtainParkedCoreMasks.c)
 *     MiGenerateAccessViolation @ 0x140246254 (MiGenerateAccessViolation.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A61D0 (KiActivateWaiterQueueWithThreadLock.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     MiLockPageListAndLastPage @ 0x1402C46F0 (MiLockPageListAndLastPage.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1402CB420 (vDbgPrintExWithPrefixInternalHelper.c)
 *     MiIsCalibrationWorthwhile @ 0x1402D1A6C (MiIsCalibrationWorthwhile.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D4090 (MiEmptyDecayClusterTimers.c)
 *     MiLockPageTableInternal @ 0x1402D4E40 (MiLockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiObtainPagefileHashes @ 0x1402E5C9C (MiObtainPagefileHashes.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiCreateCombineAnchor @ 0x1402F97FC (MiCreateCombineAnchor.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403664F0 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MmIsFileObjectAPagingFile @ 0x140373D0C (MmIsFileObjectAPagingFile.c)
 *     MiReferenceInPageFile @ 0x140398340 (MiReferenceInPageFile.c)
 *     MiLockPageListAndFirstPage @ 0x1403A1A7C (MiLockPageListAndFirstPage.c)
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 *     VmpProcessContextLockShared @ 0x1403ABC30 (VmpProcessContextLockShared.c)
 *     VmpInvalidateOutstandingFaults @ 0x1403B1140 (VmpInvalidateOutstandingFaults.c)
 *     KiSetLegacyAffinityThread @ 0x1403B178C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403B2A30 (KeSetUserGroupAffinityThread.c)
 *     MiReassessZeroThreads @ 0x1403C698C (MiReassessZeroThreads.c)
 *     MiAddZeroingThreads @ 0x1403C73C8 (MiAddZeroingThreads.c)
 *     MiProcessorParked @ 0x1403CA9E8 (MiProcessorParked.c)
 *     MiLockIoPfnTree @ 0x1403D0514 (MiLockIoPfnTree.c)
 *     InsertEventEntryInLookUpTable @ 0x1403D0F14 (InsertEventEntryInLookUpTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiGetPartitionNodeInformation @ 0x1403D4C28 (MiGetPartitionNodeInformation.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403EF5C0 (MiGetSlabRepurposedStandbyListWorker.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403F1694 (ViAvlAcquireTableLockAtDpcLevel.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 *     MiInsertSlabEntry @ 0x140413D28 (MiInsertSlabEntry.c)
 *     MiGetSharedProtosAtDpc @ 0x1404272D0 (MiGetSharedProtosAtDpc.c)
 *     MiGetPrototypePteRanges @ 0x14042DE18 (MiGetPrototypePteRanges.c)
 *     MiSystemImageHasPrivateFixups @ 0x140448F10 (MiSystemImageHasPrivateFixups.c)
 *     KiRundownMutants @ 0x14047E1B8 (KiRundownMutants.c)
 *     MiGetOptimalEngineMix @ 0x1404940F8 (MiGetOptimalEngineMix.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404D5000 (KiVpBackingThreadYieldExecution.c)
 *     DbgEnumerateCallback @ 0x1405E7530 (DbgEnumerateCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E77D4 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405EA26C (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14061187C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x140618FFC (CarAcquireDbLockAtDpcLevelSafe.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x140619DE4 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067024C (MiGetPageInHugePageBadStatus.c)
 *     MiFindPageFileMemoryExtent @ 0x14068E68C (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140692DA8 (MiGetPrototypePteBoundaries.c)
 *     ViDeadlockDetectionLock @ 0x140B991D4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  signed __int32 v1; // eax
  __int64 v2; // rdx
  signed __int32 v3; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v1 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v2 = (unsigned int)(v1 + 1);
      v3 = v1;
      v1 = _InterlockedCompareExchange(SpinLock, v2, v1);
      if ( v3 == v1 )
        break;
      if ( v1 < 0 )
      {
        LOBYTE(v2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(SpinLock, v2);
        return;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
}
