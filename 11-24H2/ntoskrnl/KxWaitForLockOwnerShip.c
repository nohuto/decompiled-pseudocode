/*
 * XREFs of KxWaitForLockOwnerShip @ 0x140357C10
 * Callers:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     IopRecordIoAttribution @ 0x14020D740 (IopRecordIoAttribution.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfpPartitionGetFirst @ 0x14022B450 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     CcGetDirtyPagesHelper @ 0x140274DD0 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14027973C (CcPostWorkQueueCachemapUninit.c)
 *     CcCachemapUninitWorkerThread @ 0x14027AAB0 (CcCachemapUninitWorkerThread.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1402F14D8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     IopDecrementVpbRefCount @ 0x140355B70 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x140355E70 (IopCheckDeviceAndDriver.c)
 *     MiLockPageTableInternal @ 0x1403560C0 (MiLockPageTableInternal.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140357E10 (KxAcquireQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     KeInsertDeviceQueue @ 0x140388190 (KeInsertDeviceQueue.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x14038A4B0 (KeRemoveDeviceQueue.c)
 *     HalpDmaReturnPageToOwner @ 0x14038A7B4 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x14038A920 (HalpDmaReturnToScatterPool.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14038D250 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403CAE20 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     IopInterlockedDecrementUlong @ 0x1403E56B0 (IopInterlockedDecrementUlong.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1403FE770 (ExpSetResourceOwnerPointerEx.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14040A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     IoAcquireCancelSpinLock @ 0x140414490 (IoAcquireCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14042AA30 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     CcFindPrivateVolumeCacheMap @ 0x14042FF54 (CcFindPrivateVolumeCacheMap.c)
 *     PoQueryWatchdogTime @ 0x140437AB0 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x14043D2A0 (CcSetParallelFlushFile.c)
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 *     CcSetLogHandleForFileEx @ 0x14043EE30 (CcSetLogHandleForFileEx.c)
 *     CcIsThereDirtyLoggedPages @ 0x14044A240 (CcIsThereDirtyLoggedPages.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     KeTryToFreezeThreadStack @ 0x1404A5F7C (KeTryToFreezeThreadStack.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x1404E06E0 (KiJoinCooperativeIdleSearch.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1404E0960 (KiLeaveCooperativeIdleSearch.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWakeAddressAll @ 0x140449DEC (KiWakeAddressAll.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     KiAddHaltBlockToWaitList @ 0x1405B7B90 (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405B7BE0 (KiWaitForSignal.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rbx
  bool v3; // zf
  int v4; // edi
  int v5; // esi
  unsigned int v6; // edi
  int v8; // esi
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _QWORD v16[3]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-10h]

  v2 = (volatile signed __int64 *)(a1 + 8);
  v20 = 0LL;
  v3 = (*(_QWORD *)(a1 + 8) & 4) == 0;
  v18 = 0LL;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  v4 = 0;
  BYTE1(v20) = !v3;
  v5 = 0;
  v19 = 0LL;
  DWORD1(v18) = 0;
  *a2 = a1;
  while ( 1 )
  {
    v6 = v4 + 1;
    LODWORD(v18) = v6;
    if ( (v6 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      v8 = v5 + 1;
      DWORD1(v18) = v8;
      if ( (KiVelocityFlags & 0x10000) != 0 && (unsigned __int8)KeCanUseHaltOnAddress() && (v8 & 7) == 0 )
      {
        v9 = *v2;
        for ( *((_QWORD *)&v19 + 1) = v9; (v9 & 1) != 0; *((_QWORD *)&v19 + 1) = v9 )
        {
          if ( BYTE1(v20) )
            v10 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
          else
            v10 = v9 | 4;
          *((_QWORD *)&v18 + 1) = v10;
          v11 = v9;
          v9 = _InterlockedCompareExchange64(v2, v10, v9);
          *(_QWORD *)&v19 = v9;
          if ( v11 == v9 )
          {
            do
            {
              v17 = 0LL;
              v16[0] = v2;
              v16[2] = 0LL;
              v16[1] = KeGetCurrentPrcb();
              KiAddHaltBlockToWaitList(KiHaltOnAddressHashTable, v16);
              if ( *v2 != *((_QWORD *)&v18 + 1) )
                KiWakeAddressAll(v2);
              _disable();
              while ( (_DWORD)v17 != 1 )
              {
                KiWaitForSignal();
                _disable();
              }
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v14 = *SchedulerAssist;
                do
                {
                  v15 = v14;
                  v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
                }
                while ( v15 != v14 );
                if ( (v14 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
              _enable();
              v9 = *v2;
              *(_QWORD *)&v19 = v9;
            }
            while ( v9 == *((_QWORD *)&v18 + 1) );
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
    if ( (*v2 & 1) == 0 )
      break;
    v5 = DWORD1(v18);
    v4 = v18;
  }
  return (unsigned int)v18;
}
