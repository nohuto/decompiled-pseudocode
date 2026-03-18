/*
 * XREFs of KiExitDispatcher @ 0x14031E7A0
 * Callers:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x14031E170 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItemFromIo @ 0x140323D10 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeSetTimer @ 0x140335230 (KeSetTimer.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeAlertThreadByThreadIdEx @ 0x140338518 (KeAlertThreadByThreadIdEx.c)
 *     KeInsertQueue @ 0x1403BCC20 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403BCD90 (IopPassiveInterruptDpc.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403BD5D0 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403BDE10 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1403D7DA0 (KeTimeOutQueueWaiters.c)
 *     ExpCommitWakeFastResource @ 0x1403D8410 (ExpCommitWakeFastResource.c)
 *     KeSetEventBoostPriorityEx @ 0x1403D8BE8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     MiReturnWsToExpansionList @ 0x1403D9400 (MiReturnWsToExpansionList.c)
 *     KeRundownQueueEx @ 0x14041B7C8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14041BA48 (KeDeleteMutant.c)
 *     KeResumeThread @ 0x140460900 (KeResumeThread.c)
 *     KeFreezeProcess @ 0x1404634A0 (KeFreezeProcess.c)
 *     KePulseEvent @ 0x1404674D0 (KePulseEvent.c)
 *     KeRequestTerminationThread @ 0x140479818 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140479900 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x140479A40 (KeForceResumeThread.c)
 *     KiSetSystemTimeDpc @ 0x14047BEC0 (KiSetSystemTimeDpc.c)
 *     KiRundownMutants @ 0x14047E1B8 (KiRundownMutants.c)
 *     KeSuspendThread @ 0x140483128 (KeSuspendThread.c)
 *     KeThawMultiProcess @ 0x1404903A4 (KeThawMultiProcess.c)
 *     KeSetProcess @ 0x14049F4A0 (KeSetProcess.c)
 *     KeForceResumeProcess @ 0x1404A7414 (KeForceResumeProcess.c)
 *     FsRtlpPostStackOverflow @ 0x1405821AC (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405B14F4 (KeRegisterObjectDpc.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B7AE8 (KeAlertMultipleThreadByThreadId.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B8208 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x1405BD220 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405C9434 (KeRundownPriQueue.c)
 * Callees:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140298E80 (KiAcquireMultiplePrcbLocks.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406B2A60 (KiSwapContext.c)
 */

void __fastcall KiExitDispatcher(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  char v5; // bl
  unsigned __int64 v8; // rsi
  _KTHREAD *v9; // rax
  _KTHREAD *v10; // rbp
  _KTHREAD *v11; // rcx
  unsigned __int8 v12; // al
  _KTHREAD *v13; // rbx
  char v14; // al
  __int64 v15; // r8
  int v16; // edx
  char v17; // r9
  unsigned __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h] BYREF
  __int128 v20; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528)
    && (!v5 && (a2 & 4) == 0 || !(unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0)) )
  {
    KiProcessThreadWaitList(a1, a3);
  }
  if ( v5 )
  {
    v11 = *(_KTHREAD **)(a1 + 8);
    v12 = a5;
    v11->MiscFlags |= 4u;
    v11->WaitIrql = v12;
    return;
  }
  v8 = a5;
  v9 = *(_KTHREAD **)(a1 + 16);
  if ( a5 < 2u )
  {
    v10 = *(_KTHREAD **)(a1 + 8);
    if ( v9 )
    {
      KiAbProcessPreContextSwitch(v10, 0);
      v21 = a1;
      v18 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      KiAcquireMultiplePrcbLocks((__int64 *)&v21, 1u);
      v13 = *(_KTHREAD **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v10);
      KiUpdatePriorityMatrixForRunningTransition((_QWORD *)a1, (__int64)v13);
      v10->WaitReason = 32;
      v10->WaitIrql = v8;
      KiQueueReadyThread((struct _KPRCB *)a1, (__int64)&v18, (ULONG_PTR)v10);
      LOBYTE(v13) = KiSwapContext(v10, v13, (unsigned __int8)v8);
      KiAbProcessPostContextSwitch((__int64)v10);
      if ( !(_BYTE)v13 )
        goto LABEL_12;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
    }
    else
    {
      if ( (v10->MiscFlags & 0x40) == 0 )
      {
LABEL_12:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
        __writecr8(v8);
        return;
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
    }
    __writecr8(1uLL);
    v10->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_12;
  }
  if ( v9 && !*(_BYTE *)(a1 + 14522) )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      v20 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v14 = HalpDisableInterrupts(a1, a2, KeGetCurrentPrcb());
        v16 = *(_DWORD *)(v15 + 168);
        v17 = v14;
        *(_DWORD *)(v15 + 168) = v16 | 4;
        if ( !v16 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v17 )
          _enable();
      }
      v19 = 5;
      HalpInterruptSendIpi(&v19, 47LL);
    }
  }
}
