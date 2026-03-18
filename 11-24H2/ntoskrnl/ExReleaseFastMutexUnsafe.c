/*
 * XREFs of ExReleaseFastMutexUnsafe @ 0x14031CF70
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403DA480 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140458580 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutexUnsafe @ 0x1404999E0 (KeReleaseGuardedMutexUnsafe.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140580610 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405807A0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x140581220 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExReleaseFastMutexUnsafeWrapper @ 0x140620430 (DifExReleaseFastMutexUnsafeWrapper.c)
 *     DifKeReleaseGuardedMutexUnsafeWrapper @ 0x14062F0E0 (DifKeReleaseGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x14070AEF0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14070B734 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14070DB00 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14073C4E0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140793290 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140793330 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1407933E0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1407934A0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1407939A0 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BCFA8 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407BD8B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDA40 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BDBD0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE030 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407BE1C0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE2E0 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407BE500 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BE8B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEA90 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BEC50 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x1407DE04C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407DE140 (CmpLazyCommitWorker.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x140868C88 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408790E8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtSetBootEntryOrder @ 0x140964DF0 (NtSetBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x140965240 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140965B30 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140966C70 (ExpGetFirmwareEnvironmentVariable.c)
 *     CmSnapshotRMTxArray @ 0x14097ABF4 (CmSnapshotRMTxArray.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409ED190 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A011F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A01C00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A01F30 (FsRtlNotifyCleanup.c)
 *     CmpTransInitializeTransaction @ 0x140A04118 (CmpTransInitializeTransaction.c)
 *     CmpRunDownCmRM @ 0x140A04740 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x140A04E08 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140A05DB4 (CmpLogCheckpoint.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140A06460 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A066A0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A0683C (CmpPrepareLightWeightTransaction.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140A35490 (FsRtlOplockBreakH2.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140A4D108 (UNLOCK_TRANSACTION_LIST.c)
 *     NtQueryBootOptions @ 0x140A97A60 (NtQueryBootOptions.c)
 *     CmRmFinalizeRecovery @ 0x140AA88D4 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x1403D8DF0 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
      KiAbEntryFreeAndEnableInterrupts((__int64)(v17 + 16), (ULONG_PTR)CurrentThread, (__int64)FastMutex, 1, 0LL);
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
