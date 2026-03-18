/*
 * XREFs of KeAccumulateTicks @ 0x14029C3C0
 * Callers:
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForTimerExpiration @ 0x14029CAE0 (KiCheckForTimerExpiration.c)
 *     KdPollBreakIn @ 0x14029CFB0 (KdPollBreakIn.c)
 *     KiDpcWatchdogCounterReset @ 0x14029D7D0 (KiDpcWatchdogCounterReset.c)
 *     KiQueryEffectivePriorityThread @ 0x14034BFE0 (KiQueryEffectivePriorityThread.c)
 *     KiCheckKeepAlive @ 0x1403C9E44 (KiCheckKeepAlive.c)
 *     KiDpcWatchdogCaptureStack @ 0x140447624 (KiDpcWatchdogCaptureStack.c)
 *     EtwTraceDpcProfilingStack @ 0x1404476CC (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14044775C (EtwTraceDpcProfilingStackBegin.c)
 *     HvlInvokeHypervisorDebugger @ 0x14044782C (HvlInvokeHypervisorDebugger.c)
 *     KiDeferDpcWatchdogViolation @ 0x14044787C (KiDeferDpcWatchdogViolation.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1404F9918 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FC810 (DbgBreakPointWithStatus.c)
 */

void __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5, int a6)
{
  _KTHREAD *CurrentThread; // rbp
  unsigned int v11; // edi
  __int64 DpcCount; // rdx
  __int16 v13; // cx
  unsigned int v14; // ecx
  unsigned int MaximumDpcQueueDepth; // eax
  unsigned __int8 NestingLevel; // al
  int v17; // esi
  __int64 v18; // rcx
  unsigned int InterruptRate; // eax
  unsigned int DpcWatchdogProfileSingleDpcThresholdTicks; // r14d
  unsigned int DpcWatchdogProfileCumulativeDpcThresholdTicks; // esi
  unsigned int DpcTimeCount; // r15d
  unsigned int DpcWatchdogCount; // r13d
  unsigned int v24; // r12d
  int v25; // r15d
  bool v26; // zf
  unsigned int SingleDpcSoftTimeLimitTicks; // eax
  unsigned int v28; // edx
  unsigned int *p_DpcTimeCount; // rcx
  ULONG_PTR v30; // r9
  unsigned int DpcWatchdogPeriodTicks; // ecx
  int v32; // esi
  unsigned int v33; // r8d
  int v34; // r14d
  unsigned int DpcTimeLimitTicks; // edx
  ULONG_PTR v36; // r12
  ULONG_PTR v37; // r13
  unsigned int v38; // r10d
  char v39; // dl
  ULONG_PTR v40; // r12
  ULONG_PTR v41; // rsi
  _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO *SingleDpcSoftTimeoutEventInfo; // r9
  _KDPC *volatile ActiveDpc; // r8
  _QWORD *p_DeferredRoutine; // rcx
  int v45; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-38h]
  ULONG_PTR *BugCheckParameter4; // [rsp+70h] [rbp+8h]
  int v48; // [rsp+98h] [rbp+30h]

  if ( a6 != 4 )
    KiCheckForTimerExpiration();
  CurrentThread = a1->CurrentThread;
  if ( KiTickAccumulationFromAccountingPeriods && (CurrentThread->MiscFlags & 0x400) == 0 )
    CurrentThread->ModeHistory = a5 | (2 * CurrentThread->ModeHistory);
  a1->LastTick = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( KiForceIdleDisabled || KiForceIdleState != 4 )
      return;
    goto LABEL_12;
  }
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      v39 = 0;
      v40 = (unsigned __int8)KiClockCheckSlot;
      KiClockPollCycle = KiClockKeepAliveCycle;
      v41 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      if ( (unsigned int)(unsigned __int8)KiClockCheckSlot + 1 < (unsigned int)KeNumberProcessors_0 )
        v39 = KiClockCheckSlot + 1;
      KiClockCheckSlot = v39;
      if ( (unsigned __int8)KiCheckKeepAlive(v41) )
      {
        if ( !*(_DWORD *)(v41 + 33696) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, v40);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v41, v40);
        }
        *(_DWORD *)(v41 + 33696) = 0;
      }
    }
  }
  if ( a5 )
  {
    if ( !KiTickAccumulationFromAccountingPeriods )
    {
      a1->UserTime += v11;
      CurrentThread->UserTime += v11;
    }
    ++a1->DpcWatchdogSequenceNumber;
    KiDpcWatchdogCounterReset(a1);
    goto LABEL_39;
  }
  NestingLevel = a1->NestingLevel;
  v17 = 0;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    if ( NestingLevel == 2 && a1->DpcRoutineActive )
    {
      ++a1->DpcTimeCount;
      v17 = 1;
    }
  }
  else
  {
    a1->KernelTime += v11;
    if ( NestingLevel == 2 && a1->DpcRoutineActive )
    {
      a1->DpcTime += v11;
      v17 = 1;
      ++a1->DpcTimeCount;
    }
    else if ( a1->NestingLevel > 1u )
    {
      a1->InterruptTime += v11;
    }
    else
    {
      a1->CurrentThread->SchedulerApc.SpareLong0 += v11;
    }
  }
  if ( a4 >= 2u )
  {
    ++a1->DpcWatchdogCount;
    goto LABEL_58;
  }
  KiDpcWatchdogCounterReset(a1);
  ++a1->DpcWatchdogSequenceNumber;
  if ( v17 )
  {
LABEL_58:
    DpcWatchdogProfileSingleDpcThresholdTicks = a1->DpcWatchdogProfileSingleDpcThresholdTicks;
    DpcWatchdogProfileCumulativeDpcThresholdTicks = DpcWatchdogProfileSingleDpcThresholdTicks;
    if ( !DpcWatchdogProfileSingleDpcThresholdTicks
      || DpcWatchdogProfileSingleDpcThresholdTicks > a1->DpcWatchdogProfileCumulativeDpcThresholdTicks )
    {
      DpcWatchdogProfileCumulativeDpcThresholdTicks = a1->DpcWatchdogProfileCumulativeDpcThresholdTicks;
    }
    if ( DpcWatchdogProfileCumulativeDpcThresholdTicks )
    {
      DpcTimeCount = a1->DpcTimeCount;
      DpcWatchdogCount = a1->DpcWatchdogCount;
      v24 = DpcWatchdogCount;
      if ( DpcTimeCount > DpcWatchdogCount )
        v24 = a1->DpcTimeCount;
      if ( DpcWatchdogProfileCumulativeDpcThresholdTicks == v24 )
        EtwTraceDpcProfilingStackBegin(
          a1->DpcWatchdogSequenceNumber,
          DpcWatchdogProfileCumulativeDpcThresholdTicks,
          DpcTimeCount,
          DpcWatchdogCount,
          0);
      if ( DpcWatchdogProfileSingleDpcThresholdTicks && DpcWatchdogProfileSingleDpcThresholdTicks == DpcTimeCount )
        EtwTraceDpcProfilingStackBegin(a1->DpcWatchdogSequenceNumber, DpcTimeCount, DpcTimeCount, DpcWatchdogCount, 1);
      if ( DpcWatchdogProfileCumulativeDpcThresholdTicks <= v24 )
      {
        KiDpcWatchdogCaptureStack(a1);
        EtwTraceDpcProfilingStack(a1->DpcWatchdogSequenceNumber, v24);
      }
      v25 = 0;
      if ( DpcWatchdogProfileCumulativeDpcThresholdTicks < 0x20 )
        v26 = v24 == 16;
      else
        v26 = v24 == DpcWatchdogProfileCumulativeDpcThresholdTicks >> 1;
      LOBYTE(v25) = v26;
    }
    else
    {
      v25 = 0;
    }
    SingleDpcSoftTimeLimitTicks = a1->SingleDpcSoftTimeLimitTicks;
    v28 = a1->DpcTimeCount;
    p_DpcTimeCount = &a1->DpcTimeCount;
    if ( SingleDpcSoftTimeLimitTicks )
    {
      if ( v28 >= SingleDpcSoftTimeLimitTicks )
      {
        SingleDpcSoftTimeoutEventInfo = a1->SingleDpcSoftTimeoutEventInfo;
        if ( SingleDpcSoftTimeoutEventInfo )
        {
          ActiveDpc = a1->DpcData[0].ActiveDpc;
          if ( ActiveDpc )
          {
            p_DeferredRoutine = &ActiveDpc->DeferredRoutine;
            if ( SingleDpcSoftTimeoutEventInfo->TickCount )
            {
              if ( SingleDpcSoftTimeoutEventInfo->DeferredRoutine == (void *)*p_DeferredRoutine )
                SingleDpcSoftTimeoutEventInfo->TickCount = v28;
              p_DpcTimeCount = &a1->DpcTimeCount;
            }
            else
            {
              SingleDpcSoftTimeoutEventInfo->TickCount = v28;
              SingleDpcSoftTimeoutEventInfo->DeferredRoutine = (void *)*p_DeferredRoutine;
              KeInsertQueueDpc(
                &SingleDpcSoftTimeoutEventInfo->EventDpc,
                a1->CurrentThread,
                (PVOID)(0x7E35C6C7F3DD7277LL
                      * (KiWaitNever ^ __ROR8__(
                                         *p_DeferredRoutine ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)ActiveDpc),
                                         KiWaitNever))));
              p_DpcTimeCount = &a1->DpcTimeCount;
            }
          }
        }
      }
    }
    v30 = *p_DpcTimeCount;
    DpcWatchdogPeriodTicks = a1->DpcWatchdogPeriodTicks;
    v32 = 0;
    v33 = a1->DpcWatchdogCount;
    v34 = 0;
    DpcTimeLimitTicks = a1->DpcTimeLimitTicks;
    v36 = 0LL;
    v37 = 0LL;
    v48 = 0;
    v38 = 0;
    BugCheckParameter3 = 0LL;
    BugCheckParameter4 = 0LL;
    if ( DpcWatchdogPeriodTicks )
    {
      LOBYTE(v32) = v33 == DpcWatchdogPeriodTicks >> 1;
      if ( v33 >= DpcWatchdogPeriodTicks )
      {
        v34 = 1;
        BugCheckParameter4 = 0LL;
        v36 = 1LL;
        BugCheckParameter3 = (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock;
        v37 = DpcWatchdogPeriodTicks;
        v38 = 2;
      }
    }
    if ( DpcTimeLimitTicks && (unsigned int)v30 >= DpcTimeLimitTicks )
    {
      v36 = 0LL;
      v48 = 1;
      v37 = v30;
      BugCheckParameter3 = a1->DpcTimeLimitTicks;
      BugCheckParameter4 = &KeDpcWatchdogProfileGlobalTriageBlock;
      v38 = 3;
    }
    else if ( !v34 )
    {
LABEL_81:
      if ( v25 | v32 )
        KeInsertQueueDpc(&a1->DpcWatchdogDpc, 0LL, 0LL);
      goto LABEL_39;
    }
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(v38, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || KiForceBugcheckForDpcWatchdog || (_BYTE)KdDebuggerNotPresent )
      {
        if ( !v48 || KiRecoveryCallbackCount <= 0 )
          KeBugCheckEx(0x133u, v36, v37, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        KiDeferDpcWatchdogViolation();
LABEL_109:
        a1->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler(a1);
LABEL_110:
        if ( v34 )
        {
          KiDpcWatchdogCounterReset(a1);
          ++a1->DpcWatchdogSequenceNumber;
        }
        goto LABEL_81;
      }
      v45 = v48;
      if ( v48 )
        NT_ASSERT(
          "*** DPC execution time exceeds system limit
    This is NOT a break in update time
    This is a BUG in a DPC "
          "routine
    Perform a stack trace to find the culprit
    The time out limit will be doubled on continuation
 "
          "   Use gh to continue!!
");
      if ( v34 )
        NT_ASSERT(
          "*** DPC watchdog timeout
    This is NOT a break in update time
    This is most likely a BUG in an ISR
    Pe"
          "rform a stack trace to find the culprit
    The period will be doubled on continuation
    Use gh to continue!!
");
    }
    else
    {
      v45 = v48;
    }
    if ( !v45 )
      goto LABEL_110;
    goto LABEL_109;
  }
LABEL_39:
  if ( !KiTickAccumulationFromAccountingPeriods
    && CurrentThread != a1->IdleThread
    && a1->NestingLevel <= 1u
    && (int)KiQueryEffectivePriorityThread(CurrentThread, a1) < 8 )
  {
    a1->AvailableTime += v11;
  }
  if ( v11 >= 8 )
  {
    a1->InterruptRate = 0;
  }
  else
  {
    v18 = v11;
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    do
    {
      InterruptRate >>= 4;
      --v18;
    }
    while ( v18 );
    a1->InterruptRate = InterruptRate;
  }
  a1->InterruptLastCount = a1->InterruptCount;
  DpcCount = a1->DpcData[0].DpcCount;
  a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v11;
  a1->DpcLastCount = DpcCount;
  if ( !a1->DpcData[0].DpcQueueDepth || (v13 = a1->DpcRequestSlot[0], (v13 & 3) != 0) )
  {
    v26 = a1->AdjustDpcThreshold-- == 1;
    if ( v26 )
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      MaximumDpcQueueDepth = a1->MaximumDpcQueueDepth;
      if ( MaximumDpcQueueDepth < KiMaximumDpcQueueDepth )
        a1->MaximumDpcQueueDepth = MaximumDpcQueueDepth + 1;
    }
  }
  else
  {
    a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
    if ( (v13 & 0xAF) == 0 )
    {
      LOBYTE(DpcCount) = 2;
      KiRequestSoftwareInterrupt(a1, DpcCount);
    }
    v14 = a1->MaximumDpcQueueDepth;
    if ( a1->DpcRequestRate < KiIdealDpcRate && v14 > 1 )
      a1->MaximumDpcQueueDepth = v14 - 1;
  }
LABEL_12:
  if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled)
    && KiPollSlot == a1->Number
    && (!KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
