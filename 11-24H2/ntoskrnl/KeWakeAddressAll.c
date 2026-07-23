/*
 * XREFs of KeWakeAddressAll @ 0x1402CA630
 * Callers:
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfpPartitionGetFirst @ 0x14022B450 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403CAE20 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403F4770 (KiSwapDirectoryTableBaseTarget.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14040A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1404150F0 (IoReleaseCancelSpinLock.c)
 *     KeSignalCallDpcSynchronize @ 0x1404282B0 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14042D650 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 *     KiSetSystemTimeDpc @ 0x140477490 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     KeTryToFreezeThreadStack @ 0x1404A5F7C (KeTryToFreezeThreadStack.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404AEE90 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x1404E06E0 (KiJoinCooperativeIdleSearch.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1404E0960 (KiLeaveCooperativeIdleSearch.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BB7A0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 *     ExpLimitInsertDpc @ 0x140653350 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406598D0 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14066E010 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x140677810 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x14067D7B0 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140687770 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068FA90 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x140692720 (MiDpcGangTarget.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HalRequestIpi @ 0x140371AA0 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeWakeAddressAll(unsigned __int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  char v6; // bl
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v11; // ett
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  signed __int32 v15[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v16; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v17[264]; // [rsp+28h] [rbp-120h] BYREF

  _InterlockedOr(v15, 0);
  v2 = KeDisableInterrupts(a1, a2, (a1 >> 5) & 0x7F, KiHaltOnAddressHashTable);
  v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v3), 0LL);
  v6 = v2;
  result = (__int64)memset_0(v17, 0, 0x100uLL);
  v8 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v8 )
  {
    v16 = 2097153LL;
    memset_0(v17, 0, 0x100uLL);
    do
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(v8 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v8 + 24), 1) )
        KeAddGroupAffinityEx((unsigned __int16 *)&v16, *(unsigned __int8 *)(v13 + 208), *(_QWORD *)(v13 + 200));
      v8 = v14;
    }
    while ( v14 );
    if ( (KiHaltOnAddressFlags & 4) != 0 )
      result = HvlWakeVirtualProcessors(&v16, v12, v13);
    else
      result = HalRequestIpi(0LL, &v16);
  }
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v11 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v11 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
