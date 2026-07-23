/*
 * XREFs of KiExitDispatcher @ 0x1402C7330
 * Callers:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x1402C55A0 (KiInsertQueue.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402C6D00 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItemFromIo @ 0x1402CC8A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     KeAlertThreadByThreadIdEx @ 0x1402DE598 (KeAlertThreadByThreadIdEx.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x1402F15F0 (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1402F1880 (KeTimeOutQueueWaiters.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     MiReturnWsToExpansionList @ 0x1402F26D0 (MiReturnWsToExpansionList.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KeSetTimer @ 0x1403161F0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403AC260 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403ACAA0 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     KeRundownQueueEx @ 0x14040F308 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14040F588 (KeDeleteMutant.c)
 *     KeResumeThread @ 0x140455D98 (KeResumeThread.c)
 *     IopPassiveInterruptDpc @ 0x140456570 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x14045A460 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140475190 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x1404752D0 (KeForceResumeThread.c)
 *     KiSetSystemTimeDpc @ 0x140477490 (KiSetSystemTimeDpc.c)
 *     KiRundownMutants @ 0x1404793A8 (KiRundownMutants.c)
 *     KeSuspendThread @ 0x14047E25C (KeSuspendThread.c)
 *     KeThawMultiProcess @ 0x14048A9E4 (KeThawMultiProcess.c)
 *     KeFreezeProcess @ 0x14048E57C (KeFreezeProcess.c)
 *     KeSetProcess @ 0x14049A2E8 (KeSetProcess.c)
 *     KeForceResumeProcess @ 0x1404A1E44 (KeForceResumeProcess.c)
 *     FsRtlpPostStackOverflow @ 0x14057F52C (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405AE464 (KeRegisterObjectDpc.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B50C0 (KeAlertMultipleThreadByThreadId.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B57E8 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x1405BA850 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405C6B64 (KeRundownPriQueue.c)
 * Callees:
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiAcquireMultiplePrcbLocks @ 0x1402A7970 (KiAcquireMultiplePrcbLocks.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 */

void __fastcall KiExitDispatcher(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  char v6; // bl
  unsigned __int64 v9; // rsi
  _KTHREAD *v10; // rax
  _KTHREAD *v11; // rbp
  _KTHREAD *v12; // rcx
  unsigned __int8 v13; // al
  _KTHREAD *v14; // rbx
  char v15; // al
  __int64 v16; // r8
  int v17; // edx
  char v18; // r9
  unsigned __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+28h] [rbp-30h] BYREF
  __int128 v21; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528)
    && (!v6 && (a2 & 4) == 0 || !(unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0)) )
  {
    KiProcessThreadWaitList(a1, a3, a4, 0LL);
  }
  if ( v6 )
  {
    v12 = *(_KTHREAD **)(a1 + 8);
    v13 = a5;
    v12->MiscFlags |= 4u;
    v12->WaitIrql = v13;
    return;
  }
  v9 = a5;
  v10 = *(_KTHREAD **)(a1 + 16);
  if ( a5 < 2u )
  {
    v11 = *(_KTHREAD **)(a1 + 8);
    if ( v10 )
    {
      KiAbProcessPreContextSwitch(v11, 0);
      v22 = a1;
      v19 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      KiAcquireMultiplePrcbLocks((__int64 *)&v22, 1u);
      v14 = *(_KTHREAD **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v11);
      KiUpdatePriorityMatrixForRunningTransition((_QWORD *)a1, (__int64)v14);
      v11->WaitReason = 32;
      v11->WaitIrql = v9;
      KiQueueReadyThread((struct _KPRCB *)a1, (__int64)&v19, (ULONG_PTR)v11);
      LOBYTE(v14) = KiSwapContext(v11, v14, (unsigned __int8)v9);
      KiAbProcessPostContextSwitch(v11);
      if ( !(_BYTE)v14 )
        goto LABEL_12;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
    }
    else
    {
      if ( (v11->MiscFlags & 0x40) == 0 )
      {
LABEL_12:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
        __writecr8(v9);
        return;
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
    }
    __writecr8(1uLL);
    v11->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_12;
  }
  if ( v10 && !*(_BYTE *)(a1 + 14522) )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      v21 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v15 = HalpDisableInterrupts(a1, a2, KeGetCurrentPrcb());
        v17 = *(_DWORD *)(v16 + 168);
        v18 = v15;
        *(_DWORD *)(v16 + 168) = v17 | 4;
        if ( !v17 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v18 )
          _enable();
      }
      v20 = 5;
      HalpInterruptSendIpi(&v20, 47LL);
    }
  }
}
