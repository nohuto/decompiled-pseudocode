/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x140301030
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1402800E8 (ExpConvertExclusiveToSharedLite.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     CcSetDirtyPinnedData @ 0x1402D6A70 (CcSetDirtyPinnedData.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402D8890 (ExpAcquireSharedStarveExclusive.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402FDE30 (IopVerifyDeviceObjectOnStack.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1402FE0E0 (ExpInsertPoolTrackerExpansion.c)
 *     IopDecrementVpbRefCount @ 0x1402FE6C0 (IopDecrementVpbRefCount.c)
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FED30 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x1402FF290 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140301310 (KxAcquireQueuedSpinLock.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140301360 (ExIsResourceAcquiredSharedLite.c)
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     PfpPartitionGetFirst @ 0x140302770 (PfpPartitionGetFirst.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140303210 (ExpSetResourceOwnerPointerEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140304090 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140333910 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     KeInsertDeviceQueue @ 0x140334EB0 (KeInsertDeviceQueue.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140336ED0 (KeRemoveDeviceQueue.c)
 *     HalpDmaDequeueAdapter @ 0x140337000 (HalpDmaDequeueAdapter.c)
 *     HalpDmaReturnPageToOwner @ 0x140337190 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x1403372FC (HalpDmaReturnToScatterPool.c)
 *     IopRecordIoAttribution @ 0x14034E818 (IopRecordIoAttribution.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403A830C (CcFindPrivateVolumeCacheMap.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1403ABE90 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403AC174 (CcPostWorkQueueCachemapUninit.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     MiLockPageTableInternal @ 0x1403DC310 (MiLockPageTableInternal.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041D000 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x14041DD00 (IoGetAttachedDeviceReference.c)
 *     IopInterlockedDecrementUlong @ 0x14041F970 (IopInterlockedDecrementUlong.c)
 *     IoAcquireCancelSpinLock @ 0x140420D40 (IoAcquireCancelSpinLock.c)
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 *     PoQueryWatchdogTime @ 0x140441400 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x1404438A0 (CcSetParallelFlushFile.c)
 *     CcSetLogHandleForFileEx @ 0x140448570 (CcSetLogHandleForFileEx.c)
 *     HsaIommuSendCommand @ 0x14044921C (HsaIommuSendCommand.c)
 *     CcIsThereDirtyLoggedPages @ 0x140454E50 (CcIsThereDirtyLoggedPages.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1404573E0 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14041FAB0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14041FC48 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int InterruptCount; // esi
  int v4; // ebp
  int v5; // r14d
  int v6; // r9d
  char v7; // bl
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = (int)a2;
  v5 = 0;
  v6 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = __rdtsc();
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v8 = _InterlockedExchange64(a2, a1);
  if ( v8 )
  {
    v9 = KxWaitForLockOwnerShipWithIrql(a1, v8, 0LL, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v6 = v9;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v7 )
  {
    v10 = __rdtsc();
    PerfLogSpinLockAcquire(v4, v10, v10 - v5, v6, InterruptCount, 1);
  }
}
