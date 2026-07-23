/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x140279DF0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x1406A18B0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406A19E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406A1A80 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406A1B20 (KiInterruptSubDispatchNoLockNoEtw.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     HalpTimerClockIpiRoutine @ 0x140278260 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140278DC0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x140278F80 (HalpTimerWatchdogResetCountdown.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x140279214 (KiProcessDeferredDpcWatchdogViolation.c)
 *     HalpTimerClockInterruptWork @ 0x1402792DC (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x140279DA0 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiSetForceIdleState @ 0x1403558C8 (KiSetForceIdleState.c)
 *     KiCheckAndRearmForceIdle @ 0x140372628 (KiCheckAndRearmForceIdle.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140377510 (KeFindFirstSetRightGroupAffinity.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140377540 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x140404640 (KeIsForceIdleEngaged.c)
 *     ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x14043EA80 (-KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     HalpScanForProfilingCorruption @ 0x14043FBC8 (HalpScanForProfilingCorruption.c)
 *     PoTraceForceIdleReset @ 0x1405CF99C (PoTraceForceIdleReset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiCallInterruptServiceRoutine(struct _KINTERRUPT *a1, __int64 a2, __int64 a3)
{
  unsigned int Vector; // eax
  char v4; // bp
  _BYTE *RedirectObject; // r9
  struct _KPRCB *v7; // r14
  _QWORD *IsrDpcStats; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 *ActualLock; // rcx
  char (__fastcall *ServiceRoutine)(__int64); // rax
  void *ServiceContext; // rdx
  _KTRAP_FRAME *TrapFrame; // r13
  ULONG_PTR v15; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v17)(__int64); // rdx
  __int64 v18; // r15
  char *v19; // rdi
  char v20; // cl
  char v21; // r8
  char v22; // di
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  struct _KPRCB *v29; // rax
  _QWORD *v30; // rdi
  unsigned int v31; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int8 v33; // al
  char v34; // di
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  unsigned __int64 v39; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-40h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h]
  int v43; // [rsp+80h] [rbp+18h] BYREF
  LARGE_INTEGER v44; // [rsp+88h] [rbp+20h] BYREF

  Vector = a1->Vector;
  v4 = a2;
  if ( Vector >= 0x30 && !KiForceIdleDisabled && Vector <= 0xCF )
  {
    if ( KiForceIdleState == 4 )
    {
      v44.QuadPart = 0LL;
      v34 = KeDisableInterrupts(a1, a2, a3);
      v43 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v43);
        while ( KiForceIdleLock );
      }
      if ( (unsigned __int8)KeIsForceIdleEngaged() )
      {
        KiSetForceIdleState(3LL);
        KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                             + *(_QWORD *)&RtlGetInterruptTimePrecise(&v44);
        if ( !KiForceIdleStopDpc.DpcData )
          KiForceIdleStopDpc.Number = KiClockTimerOwner + 2048;
        KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
        PoTraceForceIdleReset(1LL);
      }
      _InterlockedAnd64(&KiForceIdleLock, 0LL);
      if ( v34 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v37 = *SchedulerAssist;
          do
          {
            v38 = v37;
            v37 = _InterlockedCompareExchange(SchedulerAssist, v37 & 0xFFDFFFFF, v37);
          }
          while ( v38 != v37 );
          if ( (v37 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
      }
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !a1->SynchronizeIrql )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a1->ServiceContext) != 0;
  RedirectObject = a1->RedirectObject;
  if ( RedirectObject )
  {
    if ( RedirectObject[16] )
    {
      v31 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
      if ( ((v31 >> 6 == *((unsigned __int16 *)RedirectObject + 4)) & (unsigned int)(*(_QWORD *)RedirectObject >> (v31 & 0x3F))) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(a1->RedirectObject);
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  v7 = KeGetCurrentPrcb();
  IsrDpcStats = v7->IsrDpcStats;
  a1->IsrDpcStats.IsrActive = 1;
  v7->IsrDpcStats = &a1->IsrDpcStats;
  v39 = __rdtsc();
  v9 = v39;
  a1->IsrDpcStats.IsrTimeStart = v39;
  if ( v4 )
  {
    ActualLock = a1->ActualLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)ActualLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)ActualLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)ActualLock);
    }
  }
  ServiceRoutine = (char (__fastcall *)(__int64))a1->ServiceRoutine;
  ServiceContext = a1->ServiceContext;
  if ( ServiceRoutine == HalpTimerClockInterrupt )
  {
    TrapFrame = a1->TrapFrame;
    v15 = HalpClockTimer;
    PreviousIrql = TrapFrame->PreviousIrql;
    InternalData = HalpTimerGetInternalData(HalpClockTimer);
    v17 = *(__int64 (__fastcall **)(__int64))(v15 + 120);
    if ( v17 == HalpHvTimerAcknowledgeInterrupt )
      HalpHvTimerAcknowledgeInterrupt(InternalData);
    else
      guard_dispatch_icall_no_overrides(InternalData, v17);
    v18 = (unsigned int)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u);
    v19 = (char *)&HalpClockTickLog + 24 * (((unsigned __int8)v18 + 1) & 0xF);
    *(LARGE_INTEGER *)v19 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    *((_DWORD *)v19 + 2) = KeGetPcr()->Prcb.Number;
    *((_DWORD *)v19 + 3) = KiClockTimerOwner;
    v19[16] = 0;
    v20 = KeGetCurrentPrcb()->PendingTickFlags & 1;
    v19[16] = v20;
    v21 = v20 | KeGetCurrentPrcb()->PendingTickFlags & 2;
    v19[16] = v21;
    if ( KeGetCurrentPrcb()->ClockOwner )
      v19[16] = v21 | 4;
    if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
    {
      KeClockInterruptNotify((__int64 *)TrapFrame, PreviousIrql, 0LL);
      if ( KeGetCurrentPrcb()->ClockOwner )
      {
        v28 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
        {
          BYTE1(HalpClockWorkUnion) = 1;
          *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
        }
        if ( HalpClockWorkUnion )
          HalpTimerClockInterruptWork();
        v29 = KeGetCurrentPrcb();
        if ( HalpWatchdogTimer && v29->ClockOwner )
        {
          if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          {
            if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
              HalpTimerWatchdogResetCountdown();
            else
              guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v28);
          }
          if ( HalpTimerWatchdogResetCount == -1 )
            HalpTimerWatchdogTriggerSystemReset(0);
        }
        if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
        {
          LODWORD(v18) = KeGetPcr()->Prcb.Number;
          v30 = (_QWORD *)(HalpCounterSetInfo + 24 * v18);
          if ( MEMORY[0xFFFFF78000000008] - v30[2] >= 0x4C4B40uLL )
          {
            if ( (_QWORD *)*v30 != v30 )
              guard_dispatch_icall_no_overrides(0LL, 0LL);
            HalpScanForProfilingCorruption((unsigned int)v18);
            v30[2] = MEMORY[0xFFFFF78000000008];
          }
        }
      }
    }
    v9 = v39;
    v22 = 1;
    goto LABEL_27;
  }
  if ( (char *)ServiceRoutine == (char *)KiInterruptMessageDispatch )
  {
    v33 = KiInterruptMessageDispatch(a1, ServiceContext);
  }
  else
  {
    if ( (char *)ServiceRoutine == (char *)HalpTimerClockIpiRoutine )
    {
      v22 = HalpTimerClockIpiRoutine((__int64)a1, (__int64)ServiceContext);
      goto LABEL_27;
    }
    v33 = guard_dispatch_icall_no_overrides(a1, ServiceContext);
  }
  v22 = v33;
LABEL_27:
  if ( v4 )
  {
    v23 = a1->ActualLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v23, 0LL);
    else
      KiReleaseSpinLockInstrumented(v23, retaddr);
  }
  v24 = __rdtsc();
  DpcWatchdogSequenceNumber = v7->DpcWatchdogSequenceNumber;
  v26 = v24 - a1->IsrDpcStats.IsrTimeStart;
  if ( DpcWatchdogSequenceNumber != a1->IsrDpcStats.DpcWatchdog.SequenceNumber )
  {
    a1->IsrDpcStats.DpcWatchdog.SequenceNumber = DpcWatchdogSequenceNumber;
    a1->IsrDpcStats.DpcWatchdog.IsrTime = 0LL;
    a1->IsrDpcStats.DpcWatchdog.IsrCount = 0LL;
    a1->IsrDpcStats.DpcWatchdog.DpcTime = 0LL;
    a1->IsrDpcStats.DpcWatchdog.DpcCount = 0LL;
  }
  a1->IsrDpcStats.IsrTime += v26;
  a1->IsrDpcStats.DpcWatchdog.IsrTime += v26;
  ++a1->IsrDpcStats.IsrCount;
  ++a1->IsrDpcStats.DpcWatchdog.IsrCount;
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v27 = v24 - v9;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v27;
    else
      IsrDpcStats[4] += v27;
  }
  v7->IsrDpcStats = IsrDpcStats;
  a1->IsrDpcStats.IsrActive = 0;
  if ( v7 == (struct _KPRCB *)KiDeferredDpcWatchdogActivePrcb && v7->NestingLevel == 2 )
  {
    if ( v7->DpcRoutineActive )
      KiProcessDeferredDpcWatchdogViolation((__int64)a1->TrapFrame);
  }
  return v22 != 0;
}
