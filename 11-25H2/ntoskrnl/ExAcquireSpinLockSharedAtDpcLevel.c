/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360
 * Callers:
 *     MiReferenceInPageFile @ 0x140208E60 (MiReferenceInPageFile.c)
 *     MiFindBestZeroingProcessor @ 0x14020E844 (MiFindBestZeroingProcessor.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140218514 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x14021C78C (MiGetSlabRepurposedStandbyListWorker.c)
 *     MiObtainPagefileHashes @ 0x140226A10 (MiObtainPagefileHashes.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiCreateCombineAnchor @ 0x14023AD70 (MiCreateCombineAnchor.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     VmpInvalidateOutstandingFaults @ 0x14027075C (VmpInvalidateOutstandingFaults.c)
 *     KiSetLegacyAffinityThread @ 0x1402715DC (KiSetLegacyAffinityThread.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A1650 (KiActivateWaiterQueueWithThreadLock.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiLockPageListAndFirstPage @ 0x1402C5F38 (MiLockPageListAndFirstPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockPageListAndLastPage @ 0x1402FCA40 (MiLockPageListAndLastPage.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiKernelStackVaToStackNode @ 0x14032346C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiObtainParkedCoreMasks @ 0x14032375C (MiObtainParkedCoreMasks.c)
 *     MiGetPrototypePteRanges @ 0x1403379A8 (MiGetPrototypePteRanges.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MmIsFileObjectAPagingFile @ 0x14035D458 (MmIsFileObjectAPagingFile.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     MiGetPartitionNodeInformation @ 0x140392848 (MiGetPartitionNodeInformation.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0 (vDbgPrintExWithPrefixInternalHelper.c)
 *     MiEmptyDecayClusterTimers @ 0x1403B3A50 (MiEmptyDecayClusterTimers.c)
 *     MiIsCalibrationWorthwhile @ 0x1403B7024 (MiIsCalibrationWorthwhile.c)
 *     MiFreePageToSlabAllocator @ 0x1403B7474 (MiFreePageToSlabAllocator.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x1403BB444 (InsertEventEntryInLookUpTable.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403DB268 (MiPageFileLargestBitmapsRun.c)
 *     MiLockPageTableInternal @ 0x1403DC310 (MiLockPageTableInternal.c)
 *     MiGetSharedProtosAtDpc @ 0x1403E0B9C (MiGetSharedProtosAtDpc.c)
 *     MiGetImageProtoProtection @ 0x1403E0BF0 (MiGetImageProtoProtection.c)
 *     MiTransientCombineAddress @ 0x1403E2664 (MiTransientCombineAddress.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403EBB54 (ViAvlAcquireTableLockAtDpcLevel.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     VmpProcessContextLockShared @ 0x14042BCD8 (VmpProcessContextLockShared.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140433470 (MmMapLockedPagesWithReservedMapping.c)
 *     MiReassessZeroThreads @ 0x140436884 (MiReassessZeroThreads.c)
 *     MiAddZeroingThreads @ 0x140437118 (MiAddZeroingThreads.c)
 *     MiSystemImageHasPrivateFixups @ 0x14044B3D0 (MiSystemImageHasPrivateFixups.c)
 *     MiInsertSlabEntry @ 0x14045C760 (MiInsertSlabEntry.c)
 *     KeSetUserGroupAffinityThread @ 0x140469728 (KeSetUserGroupAffinityThread.c)
 *     KiRundownMutants @ 0x14047E8DC (KiRundownMutants.c)
 *     MiGetOptimalEngineMix @ 0x14049F7F8 (MiGetOptimalEngineMix.c)
 *     MiProcessorParked @ 0x1404B31A8 (MiProcessorParked.c)
 *     MiStopHugePageAccessor @ 0x1404F3624 (MiStopHugePageAccessor.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404F4D1C (KiVpBackingThreadYieldExecution.c)
 *     DbgEnumerateCallback @ 0x1405DB480 (DbgEnumerateCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405DB724 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405DE11C (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1406058BC (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14060D03C (CarAcquireDbLockAtDpcLevelSafe.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14060DE24 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406647A4 (MiGetPageInHugePageBadStatus.c)
 *     MiFindPageFileMemoryExtent @ 0x140682DFC (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140687948 (MiGetPrototypePteBoundaries.c)
 *     ViDeadlockDetectionLock @ 0x140B891F4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v1 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(SpinLock, v1 + 1, v1);
      if ( v2 == v1 )
        break;
      if ( v1 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)SpinLock, 0xFFu);
        return;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, 0xFFu);
  }
}
