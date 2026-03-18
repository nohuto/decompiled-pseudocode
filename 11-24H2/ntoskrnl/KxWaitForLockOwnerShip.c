/*
 * XREFs of KxWaitForLockOwnerShip @ 0x1402D6990
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     IopRecordIoAttribution @ 0x140244F60 (IopRecordIoAttribution.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfpPartitionGetFirst @ 0x140275EC0 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     CcFlushCachePostProcess @ 0x1402ABF10 (CcFlushCachePostProcess.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B2BA0 (ExpRemovePoolTrackerExpansion.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1402CA6FC (CcFindPrivateVolumeCacheMap.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402CEC30 (ExpSetResourceOwnerPointerEx.c)
 *     IopDecrementVpbRefCount @ 0x1402D48F0 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x1402D4BF0 (IopCheckDeviceAndDriver.c)
 *     MiLockPageTableInternal @ 0x1402D4E40 (MiLockPageTableInternal.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D6B90 (KxAcquireQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     KiAddThreadToPrcbQueue @ 0x1403102F0 (KiAddThreadToPrcbQueue.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14038D660 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     KeInsertDeviceQueue @ 0x14038E850 (KeInsertDeviceQueue.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140390B70 (KeRemoveDeviceQueue.c)
 *     HalpDmaReturnPageToOwner @ 0x140390E84 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x140390FF0 (HalpDmaReturnToScatterPool.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140393920 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1403BC880 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403D79F8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403E27B0 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     IopInterlockedDecrementUlong @ 0x1403F1990 (IopInterlockedDecrementUlong.c)
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     KiAddThreadToReadyQueue @ 0x1403F4AB0 (KiAddThreadToReadyQueue.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14041A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x14041D070 (IoGetAttachedDeviceReference.c)
 *     IoAcquireCancelSpinLock @ 0x14041E750 (IoAcquireCancelSpinLock.c)
 *     PoQueryWatchdogTime @ 0x140440D30 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x1404450F0 (CcSetParallelFlushFile.c)
 *     HsaIommuSendCommand @ 0x14044639C (HsaIommuSendCommand.c)
 *     CcSetLogHandleForFileEx @ 0x140446A80 (CcSetLogHandleForFileEx.c)
 *     CcIsThereDirtyLoggedPages @ 0x140455490 (CcIsThereDirtyLoggedPages.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     KeTryToFreezeThreadStack @ 0x1404AB95C (KeTryToFreezeThreadStack.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     KiJoinCooperativeIdleSearch @ 0x1404E9730 (KiJoinCooperativeIdleSearch.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1404E99B0 (KiLeaveCooperativeIdleSearch.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F9554 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWakeAddressAll @ 0x14045512C (KiWakeAddressAll.c)
 *     KeCanUseHaltOnAddress @ 0x1404FA680 (KeCanUseHaltOnAddress.c)
 *     KiAddHaltBlockToWaitList @ 0x1405BA560 (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405BA5B0 (KiWaitForSignal.c)
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
