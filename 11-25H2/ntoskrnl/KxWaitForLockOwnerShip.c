/*
 * XREFs of KxWaitForLockOwnerShip @ 0x140301110
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
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
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
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
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
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
 *     KiLeaveCooperativeIdleSearch @ 0x1403CF880 (KiLeaveCooperativeIdleSearch.c)
 *     KiJoinCooperativeIdleSearch @ 0x1403CFEF0 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     MiLockPageTableInternal @ 0x1403DC310 (MiLockPageTableInternal.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403DE8C0 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KiAddThreadToReadyQueue @ 0x1403EFA70 (KiAddThreadToReadyQueue.c)
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
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     KeTryToFreezeThreadStack @ 0x1404AA4CC (KeTryToFreezeThreadStack.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E00 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWakeAddressAll @ 0x140456110 (KiWakeAddressAll.c)
 *     KeCanUseHaltOnAddress @ 0x1404F81B0 (KeCanUseHaltOnAddress.c)
 *     KiAddHaltBlockToWaitList @ 0x1405B673C (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405B678C (KiWaitForSignal.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(struct _KPRCB *CurrentPrcb, struct _KPRCB **a2)
{
  volatile signed __int64 *p_CurrentThread; // rbx
  bool v3; // zf
  int v4; // edi
  int v5; // esi
  unsigned int v6; // edi
  int v8; // esi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  _QWORD v14[3]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  p_CurrentThread = (volatile signed __int64 *)&CurrentPrcb->CurrentThread;
  v18 = 0LL;
  v3 = ((__int64)CurrentPrcb->CurrentThread & 4) == 0;
  v16 = 0LL;
  CurrentPrcb->CurrentThread = (_KTHREAD *)((unsigned __int64)CurrentPrcb->CurrentThread | 1);
  v4 = 0;
  BYTE1(v18) = !v3;
  v5 = 0;
  v17 = 0LL;
  DWORD1(v16) = 0;
  *a2 = CurrentPrcb;
  while ( 1 )
  {
    v6 = v4 + 1;
    LODWORD(v16) = v6;
    if ( (v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentPrcb) )
    {
      v8 = v5 + 1;
      DWORD1(v16) = v8;
      if ( (KiVelocityFlags & 0x10000) != 0 && (unsigned __int8)KeCanUseHaltOnAddress() && (v8 & 7) == 0 )
      {
        v9 = *p_CurrentThread;
        for ( *((_QWORD *)&v17 + 1) = v9; (v9 & 1) != 0; *((_QWORD *)&v17 + 1) = v9 )
        {
          if ( BYTE1(v18) )
            CurrentPrcb = (struct _KPRCB *)(v9 & 0xFFFFFFFFFFFFFFFBuLL);
          else
            CurrentPrcb = (struct _KPRCB *)(v9 | 4);
          *((_QWORD *)&v16 + 1) = CurrentPrcb;
          v10 = v9;
          v9 = _InterlockedCompareExchange64(p_CurrentThread, (signed __int64)CurrentPrcb, v9);
          *(_QWORD *)&v17 = v9;
          if ( v10 == v9 )
          {
            do
            {
              v15 = 0LL;
              v14[0] = p_CurrentThread;
              v14[2] = 0LL;
              v14[1] = KeGetCurrentPrcb();
              KiAddHaltBlockToWaitList(KiHaltOnAddressHashTable, v14);
              if ( *p_CurrentThread != *((_QWORD *)&v16 + 1) )
                KiWakeAddressAll(p_CurrentThread);
              _disable();
              while ( (_DWORD)v15 != 1 )
              {
                KiWaitForSignal();
                _disable();
              }
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
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
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
              _enable();
              v9 = *p_CurrentThread;
              *(_QWORD *)&v17 = v9;
            }
            while ( v9 == *((_QWORD *)&v16 + 1) );
          }
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v6);
      }
    }
    else
    {
      _mm_pause();
    }
    if ( (*p_CurrentThread & 1) == 0 )
      break;
    v5 = DWORD1(v16);
    v4 = v16;
  }
  return (unsigned int)v16;
}
