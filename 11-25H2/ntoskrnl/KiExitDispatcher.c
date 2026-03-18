/*
 * XREFs of KiExitDispatcher @ 0x140287260
 * Callers:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     NtAssociateWaitCompletionPacket @ 0x14027F510 (NtAssociateWaitCompletionPacket.c)
 *     MiReturnWsToExpansionList @ 0x14027FC50 (MiReturnWsToExpansionList.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     KeAlertThreadByThreadIdEx @ 0x1402807E0 (KeAlertThreadByThreadIdEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeSetTimer @ 0x1402EE1E0 (KeSetTimer.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     KeRegisterObjectNotification @ 0x140306594 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 *     KeRundownQueueEx @ 0x14041E338 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14041EA58 (KeDeleteMutant.c)
 *     KeTimeOutQueueWaiters @ 0x14043F744 (KeTimeOutQueueWaiters.c)
 *     IopPassiveInterruptDpc @ 0x140461CF0 (IopPassiveInterruptDpc.c)
 *     KeResumeThread @ 0x14046230C (KeResumeThread.c)
 *     KeInsertQueue @ 0x140464700 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     KiSetSystemTimeDpc @ 0x14047ACB0 (KiSetSystemTimeDpc.c)
 *     KeRequestTerminationThread @ 0x14047D128 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x14047D210 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     KiRundownMutants @ 0x14047E8DC (KiRundownMutants.c)
 *     KeSuspendThread @ 0x1404875A0 (KeSuspendThread.c)
 *     KeThawMultiProcess @ 0x140491514 (KeThawMultiProcess.c)
 *     KeFreezeProcess @ 0x140494EF4 (KeFreezeProcess.c)
 *     KeSetProcess @ 0x1404A8088 (KeSetProcess.c)
 *     KeForceResumeProcess @ 0x1404A9118 (KeForceResumeProcess.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405ADB64 (KeRegisterObjectDpc.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B3BF8 (KeAlertMultipleThreadByThreadId.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B4318 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x1405B9380 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405C4E08 (KeRundownPriQueue.c)
 * Callees:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 */

void __fastcall KiExitDispatcher(struct _KPRCB *a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  char v6; // bl
  unsigned __int64 v9; // rsi
  _KTHREAD *NextThread; // rax
  _KTHREAD *v11; // rbp
  bool v12; // zf
  _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v14; // al
  char v15; // al
  __int64 v16; // r8
  int v17; // edx
  char v18; // r9
  _KTHREAD *v19; // rbx
  int v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+24h] [rbp-34h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2 & 1;
  if ( a1->DeferredReadyListHead.Next
    && (!v6 && (a2 & 4) == 0 || !(unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0)) )
  {
    KiProcessThreadWaitList(a1, a3, a4, 0LL);
  }
  if ( v6 )
  {
    CurrentThread = a1->CurrentThread;
    v14 = a5;
    CurrentThread->MiscFlags |= 4u;
    CurrentThread->WaitIrql = v14;
  }
  else
  {
    v9 = a5;
    NextThread = a1->NextThread;
    v22 = 0LL;
    if ( a5 >= 2u )
    {
      if ( NextThread && !a1->DpcRoutineActive )
      {
        if ( a1->NestingLevel )
        {
          a1->InterruptRequest = 1;
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
    else
    {
      v11 = a1->CurrentThread;
      if ( NextThread )
      {
        KiAbProcessPreContextSwitch(a1->CurrentThread, 0LL);
        KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, &v22);
        v19 = a1->NextThread;
        a1->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread(a1, v11);
        KiUpdatePriorityMatrixForRunningTransition(a1, v19);
        v11->WaitReason = 32;
        v11->WaitIrql = v9;
        KiQueueReadyThread(a1);
        LOBYTE(v19) = KiSwapContext(v11, v19, (unsigned __int8)v9);
        KiAbProcessPostContextSwitch(v11);
        v12 = (_BYTE)v19 == 0;
      }
      else
      {
        v12 = (v11->MiscFlags & 0x40) == 0;
      }
      if ( !v12 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 1;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
        }
        __writecr8(1uLL);
        v11->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
      __writecr8(v9);
    }
  }
}
