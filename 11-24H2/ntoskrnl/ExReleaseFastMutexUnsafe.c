/*
 * XREFs of ExReleaseFastMutexUnsafe @ 0x1402C5B00
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403CF540 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14044DA30 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutexUnsafe @ 0x140494370 (KeReleaseGuardedMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x1404D98A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14057DA80 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14057DC10 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057DC84 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057E5E0 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExReleaseFastMutexUnsafeWrapper @ 0x14061E9F0 (DifExReleaseFastMutexUnsafeWrapper.c)
 *     DifKeReleaseGuardedMutexUnsafeWrapper @ 0x14062D6A0 (DifKeReleaseGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x140708AB0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070919C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1407092D0 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14070B6A0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14073A410 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140793330 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407933D0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140793480 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140793540 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140793A40 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BD3F8 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407BDD00 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDE90 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE480 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407BE610 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE730 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407BE950 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BED00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEEE0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x1407DE59C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407DE690 (CmpLazyCommitWorker.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x14086CF78 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     NtSetBootEntryOrder @ 0x14094D880 (NtSetBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x14094E5C0 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094F700 (ExpGetFirmwareEnvironmentVariable.c)
 *     CmSnapshotRMTxArray @ 0x140963404 (CmSnapshotRMTxArray.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409E64C0 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1409FE1C0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1409FEF00 (FsRtlNotifyCleanup.c)
 *     CmpTransInitializeTransaction @ 0x140A00648 (CmpTransInitializeTransaction.c)
 *     CmpRunDownCmRM @ 0x140A00C70 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x140A01338 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140A022E4 (CmpLogCheckpoint.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140A02990 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A02BD0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A02D6C (CmpPrepareLightWeightTransaction.c)
 *     FsRtlOplockBreakH2 @ 0x140A294A0 (FsRtlOplockBreakH2.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140A43C98 (UNLOCK_TRANSACTION_LIST.c)
 *     NtQueryBootOptions @ 0x140A942B0 (NtQueryBootOptions.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  struct _FAST_MUTEX *v11; // rax
  struct _FAST_MUTEX **Owner; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v17; // r11
  __int64 v18; // rdx
  char Contention; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v21; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  FastMutex->Owner = 0LL;
  v2 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( !v2 )
    goto LABEL_17;
  v25 = 0LL;
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&FastMutex->Event);
  Flink = (struct _FAST_MUTEX *)FastMutex->Event.Header.WaitListHead.Flink;
  FastMutex->Event.Header.SignalState = 1;
  while ( Flink != (struct _FAST_MUTEX *)&FastMutex->Event.Header.WaitListHead )
  {
    v10 = *(struct _FAST_MUTEX **)&Flink->Count;
    v11 = Flink;
    Flink = v10;
    Owner = (struct _FAST_MUTEX **)v11->Owner;
    if ( v10->Owner != v11 || *Owner != v11 )
      __fastfail(3u);
    *Owner = v10;
    v10->Owner = Owner;
    Contention = v11->Contention;
    switch ( Contention )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v11, HIWORD(v11->Contention), &v25) )
          goto LABEL_14;
        break;
      case 2:
        BYTE1(v11->Contention) = 5;
        KiInsertQueueInternal(*(_QWORD *)&v11->Event.Header.Lock, v11);
LABEL_14:
        if ( FastMutex->Event.Header.SignalState-- == 1 )
          goto LABEL_15;
        break;
      case 4:
        BYTE1(v11->Contention) = 5;
        FastMutex->Event.Header.SignalState = 0;
        KeInsertQueueDpc(*(PRKDPC *)&v11->Event.Header.Lock, &FastMutex->Event, v11);
        break;
      default:
        KiTryUnwaitThread(CurrentPrcb, v11, 256LL, 0LL);
        break;
    }
  }
LABEL_15:
  _InterlockedAnd(&FastMutex->Event.Header.Lock, 0xFFFFFF7F);
  if ( Priority )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
      KeAbPreWakeupThread(&Next[-27], FastMutex);
  }
  KiExitDispatcher(CurrentPrcb, CurrentIrql);
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v17 = (char *)KernelAbEntries + 88 * i;
    v18 = *((_QWORD *)v17 + 2);
    if ( (v18 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL)
      && v17[26]
      && (v18 & 1) == 0 )
    {
      v17[26] = 0;
      KiAbEntryFreeAndEnableInterrupts((__int64)(v17 + 16), (ULONG_PTR)CurrentThread, (__int64)FastMutex, 1LL, 0LL);
      return;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, 0LL, 0LL);
  v21 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v23 = *SchedulerAssist;
    do
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
    }
    while ( v24 != v23 );
    if ( (v23 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v21);
  }
  _enable();
}
