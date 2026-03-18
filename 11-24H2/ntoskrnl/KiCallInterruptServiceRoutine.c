/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x14033B0A0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x1403BFD28 (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x1406ACB80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ACCB0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ACD50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ACDF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     HalpTimerClockIpiRoutine @ 0x1403394D0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x14033A1F0 (HalpTimerWatchdogResetCountdown.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x14033A484 (KiProcessDeferredDpcWatchdogViolation.c)
 *     HalpTimerClockInterruptWork @ 0x14033A54C (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x14033B050 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1403B4C70 (KeFindFirstSetRightGroupAffinity.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1403B5288 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiCheckAndRearmForceIdle @ 0x1403C17F8 (KiCheckAndRearmForceIdle.c)
 *     KiSetForceIdleState @ 0x1403CBA34 (KiSetForceIdleState.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x14040C350 (KeIsForceIdleEngaged.c)
 *     ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x14043F0F0 (-KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     HalpScanForProfilingCorruption @ 0x140441980 (HalpScanForProfilingCorruption.c)
 *     PoTraceForceIdleReset @ 0x1405D4358 (PoTraceForceIdleReset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiCallInterruptServiceRoutine(
        struct _KINTERRUPT *a1,
        char a2,
        signed __int32 *SchedulerAssist,
        __int64 a4)
{
  unsigned int Vector; // eax
  _BYTE *RedirectObject; // r9
  struct _KPRCB *v8; // r14
  _QWORD *IsrDpcStats; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 *ActualLock; // rcx
  unsigned __int8 (__fastcall *ServiceRoutine)(_KINTERRUPT *, void *); // rax
  void *ServiceContext; // rdx
  _KTRAP_FRAME *TrapFrame; // r13
  ULONG_PTR v16; // rdi
  __int64 InternalData; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall *v20)(__int64); // rdx
  __int64 v21; // r15
  char *v22; // rdi
  char v23; // cl
  char v24; // r8
  char v25; // di
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  struct _KPRCB *v35; // rax
  _QWORD *v36; // rdi
  unsigned int v37; // r8d
  char v38; // cl
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int8 v40; // al
  bool v41; // di
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  unsigned __int64 v45; // [rsp+20h] [rbp-48h]
  char v46[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h]
  int v49; // [rsp+80h] [rbp+18h] BYREF
  __int64 v50; // [rsp+88h] [rbp+20h] BYREF

  Vector = a1->Vector;
  if ( Vector >= 0x30 && !KiForceIdleDisabled && Vector <= 0xCF )
  {
    if ( KiForceIdleState == 4 )
    {
      v50 = 0LL;
      v41 = KeDisableInterrupts();
      v49 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( KiForceIdleLock );
      }
      if ( (unsigned __int8)KeIsForceIdleEngaged() )
      {
        KiSetForceIdleState(3LL);
        KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + RtlGetInterruptTimePrecise(&v50);
        if ( !KiForceIdleStopDpc.DpcData )
          KiForceIdleStopDpc.Number = KiClockTimerOwner + 2048;
        KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
        PoTraceForceIdleReset(1LL);
      }
      _InterlockedAnd64(&KiForceIdleLock, 0LL);
      if ( v41 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v43 = *SchedulerAssist;
          do
          {
            v44 = v43;
            v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
          }
          while ( v44 != v43 );
          if ( (v43 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
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
    return (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a1->ServiceContext, SchedulerAssist, a4) != 0;
  RedirectObject = a1->RedirectObject;
  if ( RedirectObject )
  {
    if ( RedirectObject[16] )
    {
      v37 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
      v38 = v37 & 0x3F;
      SchedulerAssist = (signed __int32 *)(v37 >> 6);
      if ( (((_DWORD)SchedulerAssist == *((unsigned __int16 *)RedirectObject + 4)) & (unsigned int)(*(_QWORD *)RedirectObject >> v38)) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(a1->RedirectObject);
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  v8 = KeGetCurrentPrcb();
  IsrDpcStats = v8->IsrDpcStats;
  a1->IsrDpcStats.IsrActive = 1;
  v8->IsrDpcStats = &a1->IsrDpcStats;
  v45 = __rdtsc();
  v10 = v45;
  a1->IsrDpcStats.IsrTimeStart = v45;
  if ( a2 )
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
  ServiceRoutine = a1->ServiceRoutine;
  ServiceContext = a1->ServiceContext;
  if ( (char *)ServiceRoutine == (char *)HalpTimerClockInterrupt )
  {
    TrapFrame = a1->TrapFrame;
    v16 = HalpClockTimer;
    PreviousIrql = TrapFrame->PreviousIrql;
    InternalData = HalpTimerGetInternalData(HalpClockTimer);
    v20 = *(__int64 (__fastcall **)(__int64))(v16 + 120);
    if ( v20 == HalpHvTimerAcknowledgeInterrupt )
      HalpHvTimerAcknowledgeInterrupt(InternalData);
    else
      guard_dispatch_icall_no_overrides(InternalData, v20, v18, v19);
    v21 = (unsigned int)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u);
    v22 = (char *)&HalpClockTickLog + 24 * (((unsigned __int8)v21 + 1) & 0xF);
    *(_QWORD *)v22 = RtlGetInterruptTimePrecise(v46);
    *((_DWORD *)v22 + 2) = KeGetPcr()->Prcb.Number;
    *((_DWORD *)v22 + 3) = KiClockTimerOwner;
    v22[16] = 0;
    v23 = KeGetCurrentPrcb()->PendingTickFlags & 1;
    v22[16] = v23;
    v24 = v23 | KeGetCurrentPrcb()->PendingTickFlags & 2;
    v22[16] = v24;
    if ( KeGetCurrentPrcb()->ClockOwner )
      v22[16] = v24 | 4;
    if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
    {
      KeClockInterruptNotify((__int64)TrapFrame, PreviousIrql, 0);
      if ( KeGetCurrentPrcb()->ClockOwner )
      {
        v33 = HalpClockTimer;
        v34 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
        {
          BYTE1(HalpClockWorkUnion) = 1;
          *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
        }
        if ( HalpClockWorkUnion )
          HalpTimerClockInterruptWork(v33, v34, v31, v32);
        v35 = KeGetCurrentPrcb();
        if ( HalpWatchdogTimer && v35->ClockOwner )
        {
          if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          {
            if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
              HalpTimerWatchdogResetCountdown();
            else
              guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v34, v31, v32);
          }
          if ( HalpTimerWatchdogResetCount == -1 )
            HalpTimerWatchdogTriggerSystemReset(0);
        }
        if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
        {
          LODWORD(v21) = KeGetPcr()->Prcb.Number;
          v36 = (_QWORD *)(HalpCounterSetInfo + 24 * v21);
          if ( MEMORY[0xFFFFF78000000008] - v36[2] >= 0x4C4B40uLL )
          {
            if ( (_QWORD *)*v36 != v36 )
              guard_dispatch_icall_no_overrides(0LL, 0LL, v31, v32);
            HalpScanForProfilingCorruption((unsigned int)v21);
            v36[2] = MEMORY[0xFFFFF78000000008];
          }
        }
      }
    }
    v10 = v45;
    v25 = 1;
    goto LABEL_27;
  }
  if ( ServiceRoutine == KiInterruptMessageDispatch )
  {
    v40 = KiInterruptMessageDispatch(a1, ServiceContext);
  }
  else
  {
    if ( (char *)ServiceRoutine == (char *)HalpTimerClockIpiRoutine )
    {
      v25 = HalpTimerClockIpiRoutine((__int64)a1, (__int64)ServiceContext);
      goto LABEL_27;
    }
    v40 = guard_dispatch_icall_no_overrides(a1, ServiceContext, SchedulerAssist, RedirectObject);
  }
  v25 = v40;
LABEL_27:
  if ( a2 )
  {
    v26 = a1->ActualLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v26, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v26, retaddr);
  }
  v27 = __rdtsc();
  DpcWatchdogSequenceNumber = v8->DpcWatchdogSequenceNumber;
  v29 = v27 - a1->IsrDpcStats.IsrTimeStart;
  if ( DpcWatchdogSequenceNumber != a1->IsrDpcStats.DpcWatchdog.SequenceNumber )
  {
    a1->IsrDpcStats.DpcWatchdog.SequenceNumber = DpcWatchdogSequenceNumber;
    a1->IsrDpcStats.DpcWatchdog.IsrTime = 0LL;
    a1->IsrDpcStats.DpcWatchdog.IsrCount = 0LL;
    a1->IsrDpcStats.DpcWatchdog.DpcTime = 0LL;
    a1->IsrDpcStats.DpcWatchdog.DpcCount = 0LL;
  }
  a1->IsrDpcStats.IsrTime += v29;
  a1->IsrDpcStats.DpcWatchdog.IsrTime += v29;
  ++a1->IsrDpcStats.IsrCount;
  ++a1->IsrDpcStats.DpcWatchdog.IsrCount;
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v30 = v27 - v10;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v30;
    else
      IsrDpcStats[4] += v30;
  }
  v8->IsrDpcStats = IsrDpcStats;
  a1->IsrDpcStats.IsrActive = 0;
  if ( v8 == (struct _KPRCB *)KiDeferredDpcWatchdogActivePrcb && v8->NestingLevel == 2 )
  {
    if ( v8->DpcRoutineActive )
      KiProcessDeferredDpcWatchdogViolation((__int64)a1->TrapFrame);
  }
  return v25 != 0;
}
