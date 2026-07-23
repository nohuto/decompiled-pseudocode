/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480
 * Callers:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiKernelStackVaToStackNode @ 0x14020CE1C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiTransientCombineAddress @ 0x14020D0AC (MiTransientCombineAddress.c)
 *     MiObtainParkedCoreMasks @ 0x14020D180 (MiObtainParkedCoreMasks.c)
 *     MiLockPageListAndFirstPage @ 0x1402185DC (MiLockPageListAndFirstPage.c)
 *     MiLockPageListAndLastPage @ 0x140219C30 (MiLockPageListAndLastPage.c)
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiInsertSlabEntry @ 0x14021E754 (MiInsertSlabEntry.c)
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmIsFileObjectAPagingFile @ 0x14025C5CC (MmIsFileObjectAPagingFile.c)
 *     MiGetPartitionNodeInformation @ 0x1402636C4 (MiGetPartitionNodeInformation.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140275C70 (vDbgPrintExWithPrefixInternalHelper.c)
 *     MiCreateCombineAnchor @ 0x1402945B4 (MiCreateCombineAnchor.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402D5900 (KiActivateWaiterQueueWithThreadLock.c)
 *     MiGenerateAccessViolation @ 0x1402FB178 (MiGenerateAccessViolation.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140302190 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     MiGetImageProtoProtection @ 0x140339AF0 (MiGetImageProtoProtection.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiObtainPagefileHashes @ 0x140341E3C (MiObtainPagefileHashes.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 *     MiEmptyDecayClusterTimers @ 0x140355310 (MiEmptyDecayClusterTimers.c)
 *     MiLockPageTableInternal @ 0x1403560C0 (MiLockPageTableInternal.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     VmpProcessContextLockShared @ 0x14039A340 (VmpProcessContextLockShared.c)
 *     VmpInvalidateOutstandingFaults @ 0x14039F950 (VmpInvalidateOutstandingFaults.c)
 *     KiSetLegacyAffinityThread @ 0x14039FF9C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403C5B54 (MiPageFileLargestBitmapsRun.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403E2544 (MiGetSlabRepurposedStandbyListWorker.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403E53B4 (ViAvlAcquireTableLockAtDpcLevel.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403F1ED8 (MiFinishMdlForMappedFileFault.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 *     MiGetSharedProtosAtDpc @ 0x14041B454 (MiGetSharedProtosAtDpc.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     MiGetPrototypePteRanges @ 0x14041FB48 (MiGetPrototypePteRanges.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     MiSystemImageHasPrivateFixups @ 0x140441660 (MiSystemImageHasPrivateFixups.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     KiRundownMutants @ 0x1404793A8 (KiRundownMutants.c)
 *     MiGetOptimalEngineMix @ 0x14048EB84 (MiGetOptimalEngineMix.c)
 *     MiIsCalibrationWorthwhile @ 0x140490824 (MiIsCalibrationWorthwhile.c)
 *     MiProcessorParked @ 0x1404ADB64 (MiProcessorParked.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404CE2D8 (KiVpBackingThreadYieldExecution.c)
 *     DbgEnumerateCallback @ 0x1405E4B20 (DbgEnumerateCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E4DC4 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405E77BC (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14060FE3C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x1406175BC (CarAcquireDbLockAtDpcLevelSafe.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x1406183A4 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067141C (MiGetPageInHugePageBadStatus.c)
 *     MiFindPageFileMemoryExtent @ 0x14068F7BC (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140693E78 (MiGetPrototypePteBoundaries.c)
 *     ViDeadlockDetectionLock @ 0x140B9B1D4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  __int64 v2; // r9
  signed __int32 v3; // eax
  __int64 v4; // rdx
  signed __int32 v5; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v3 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v4 = (unsigned int)(v3 + 1);
      v5 = v3;
      v3 = _InterlockedCompareExchange(SpinLock, v4, v3);
      if ( v5 == v3 )
        break;
      if ( v3 < 0 )
      {
        LOBYTE(v4) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)SpinLock, v4, v1, v2);
        return;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, 0xFFu);
  }
}
