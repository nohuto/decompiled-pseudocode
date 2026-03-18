/*
 * XREFs of ExReleaseFastMutexUnsafe @ 0x140285A50
 * Callers:
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403EE930 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140457B30 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutexUnsafe @ 0x1404998B0 (KeReleaseGuardedMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14057D320 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14057D4B0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057DE00 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExReleaseFastMutexUnsafeWrapper @ 0x140614470 (DifExReleaseFastMutexUnsafeWrapper.c)
 *     DifKeReleaseGuardedMutexUnsafeWrapper @ 0x140623120 (DifKeReleaseGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x1406FF010 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406FF854 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140701C20 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140730250 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140783EC0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140783F60 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140784010 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1407840D0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1407845D0 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407ADB28 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407AE0E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407AE270 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407AE9F0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407AEB10 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407AED30 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407AF0E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407AF2C0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407AF480 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x1407CE88C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     NtSetBootEntryOrder @ 0x140820520 (NtSetBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140821260 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140822258 (ExpGetFirmwareEnvironmentVariable.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmSnapshotRMTxArray @ 0x140863EA8 (CmSnapshotRMTxArray.c)
 *     CmpRunDownCmRM @ 0x140865B50 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x1408662AC (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140866C54 (CmpLogCheckpoint.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408671C0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140867280 (CmpTransMgrRollback.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x14086FE0C (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408705D4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1409D9388 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1409D9524 (CmpPrepareLightWeightTransaction.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409F2950 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A02350 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A02D50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A03080 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A03770 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A03AA0 (FsRtlNotifyCleanup.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140A2FA90 (FsRtlOplockBreakH2.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140A4A2F8 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpTransInitializeTransaction @ 0x140A8174C (CmpTransInitializeTransaction.c)
 *     NtQueryBootOptions @ 0x140A937F0 (NtQueryBootOptions.c)
 *     CmRmFinalizeRecovery @ 0x140AA384C (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  signed __int32 v2; // eax
  int v3; // ecx
  int v4; // edx
  signed __int32 v5; // ett
  char Priority; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  struct _FAST_MUTEX *Flink; // rsi
  struct _FAST_MUTEX *v10; // rdx
  __int64 v11; // rax
  struct _FAST_MUTEX **v12; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  unsigned int i; // edx
  _KLOCK_ENTRY *v17; // rcx
  char v18; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v20; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  FastMutex->Owner = 0LL;
  v2 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( !v2 )
    goto LABEL_17;
  v24 = 0LL;
  do
  {
    v3 = -1;
    v4 = v2 & 2;
    if ( (v2 & 2) != 0 )
      v3 = 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange(&FastMutex->Count, v2 + v3, v2);
  }
  while ( v5 != v2 );
  if ( v4 )
    goto LABEL_17;
  Priority = KeGetCurrentThread()->Priority;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&FastMutex->Event);
  Flink = (struct _FAST_MUTEX *)FastMutex->Event.Header.WaitListHead.Flink;
  FastMutex->Event.Header.SignalState = 1;
  while ( Flink != (struct _FAST_MUTEX *)&FastMutex->Event.Header.WaitListHead )
  {
    v10 = *(struct _FAST_MUTEX **)&Flink->Count;
    v11 = (__int64)Flink;
    Flink = v10;
    v12 = *(struct _FAST_MUTEX ***)(v11 + 8);
    if ( v10->Owner != (void *)v11 || *v12 != (struct _FAST_MUTEX *)v11 )
      __fastfail(3u);
    *v12 = v10;
    v10->Owner = v12;
    v18 = *(_BYTE *)(v11 + 16);
    switch ( v18 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v11, *(unsigned __int16 *)(v11 + 18), &v24) )
          goto LABEL_14;
        break;
      case 2:
        *(_BYTE *)(v11 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v11 + 24), (__int64 *)v11);
LABEL_14:
        if ( FastMutex->Event.Header.SignalState-- == 1 )
          goto LABEL_15;
        break;
      case 4:
        *(_BYTE *)(v11 + 17) = 5;
        FastMutex->Event.Header.SignalState = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v11 + 24), &FastMutex->Event, (PVOID)v11);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v11, 256LL, 0LL);
        break;
    }
  }
LABEL_15:
  _InterlockedAnd(&FastMutex->Event.Header.Lock, 0xFFFFFF7F);
  if ( Priority )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
      KeAbPreWakeupThread((ULONG_PTR)&Next[-27], (__int64)FastMutex);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v17 = &KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL)
      && v17->AcquiredByte
      && (*(_QWORD *)&v17->LockState.0 & 1) == 0 )
    {
      v17->AcquiredByte = 0;
      KiAbEntryFreeAndEnableInterrupts(v17, CurrentThread, FastMutex, 1LL, 0LL);
      return;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, 0LL, 0LL);
  v20 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v20->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v22 = *SchedulerAssist;
    do
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
    }
    while ( v23 != v22 );
    if ( (v22 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v20);
  }
  _enable();
}
