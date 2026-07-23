/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x14031A580
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ADC50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ADD90 (KiInterruptSubDispatchNoLockNoEtw.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HalpTimerClockIpiRoutine @ 0x1403189B0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1403195B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403196D0 (HalpTimerWatchdogResetCountdown.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x140319964 (KiProcessDeferredDpcWatchdogViolation.c)
 *     HalpTimerClockInterruptWork @ 0x140319A2C (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x14031A530 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140371618 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiCheckAndRearmForceIdle @ 0x1403B03B8 (KiCheckAndRearmForceIdle.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x1404049E0 (KeIsForceIdleEngaged.c)
 *     ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x140434CA0 (-KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     HalpScanForProfilingCorruption @ 0x140435878 (HalpScanForProfilingCorruption.c)
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x1405D1B18 (PoTraceForceIdleReset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiCallInterruptServiceRoutine(struct _KINTERRUPT *a1, char a2, __int64 SchedulerAssist)
{
  unsigned int Vector; // eax
  _BYTE *RedirectObject; // r9
  struct _KPRCB *v7; // r14
  _QWORD *IsrDpcStats; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 *ActualLock; // rcx
  char (__fastcall *ServiceRoutine)(__int64); // rax
  void *ServiceContext; // rdx
  _KTRAP_FRAME *TrapFrame; // r13
  ULONG_PTR v17; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v19)(__int64); // rdx
  __int64 v20; // r15
  char *v21; // rdi
  char v22; // cl
  char v23; // r8
  char v24; // di
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  struct _KPRCB *v31; // rax
  _QWORD *v32; // rdi
  unsigned int v33; // r8d
  char v34; // cl
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int8 v36; // al
  bool v37; // di
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  unsigned __int64 v41; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h]
  int v45; // [rsp+80h] [rbp+18h] BYREF
  LARGE_INTEGER v46; // [rsp+88h] [rbp+20h] BYREF

  Vector = a1->Vector;
  if ( Vector >= 0x30 && !KiForceIdleDisabled && Vector <= 0xCF )
  {
    if ( KiForceIdleState == 4 )
    {
      v46.QuadPart = 0LL;
      v37 = KeDisableInterrupts();
      v45 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v45);
        while ( KiForceIdleLock );
      }
      if ( (unsigned __int8)KeIsForceIdleEngaged() )
      {
        KiSetForceIdleState(3LL);
        KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                             + *(_QWORD *)&RtlGetInterruptTimePrecise(&v46);
        if ( !KiForceIdleStopDpc.DpcData )
          KiForceIdleStopDpc.Number = KiClockTimerOwner + 2048;
        KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
        PoTraceForceIdleReset(1LL);
      }
      _InterlockedAnd64(&KiForceIdleLock, 0LL);
      if ( v37 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw((const void *)SchedulerAssist);
          v39 = *(_DWORD *)SchedulerAssist;
          do
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v39 & 0xFFDFFFFF, v39);
          }
          while ( v40 != v39 );
          if ( (v39 & 0x200000) != 0 )
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
    return (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a1->ServiceContext) != 0;
  RedirectObject = a1->RedirectObject;
  if ( RedirectObject )
  {
    if ( RedirectObject[16] )
    {
      v33 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
      v34 = v33 & 0x3F;
      SchedulerAssist = v33 >> 6;
      if ( (((_DWORD)SchedulerAssist == *((unsigned __int16 *)RedirectObject + 4)) & (unsigned int)(*(_QWORD *)RedirectObject >> v34)) == 0 )
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
  v9 = __rdtsc();
  v10 = (unsigned __int64)HIDWORD(v9) << 32;
  v41 = v9;
  v11 = v9;
  a1->IsrDpcStats.IsrTimeStart = v9;
  if ( a2 )
  {
    ActualLock = a1->ActualLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0
      || (v10 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)ActualLock, 0LL) )
        KxWaitForSpinLockAndAcquire(
          (volatile signed __int32 *)ActualLock,
          v10,
          SchedulerAssist,
          (__int64)RedirectObject);
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
    v17 = HalpClockTimer;
    PreviousIrql = TrapFrame->PreviousIrql;
    InternalData = HalpTimerGetInternalData(HalpClockTimer);
    v19 = *(__int64 (__fastcall **)(__int64))(v17 + 120);
    if ( v19 == HalpHvTimerAcknowledgeInterrupt )
      HalpHvTimerAcknowledgeInterrupt(InternalData);
    else
      guard_dispatch_icall_no_overrides(InternalData, v19);
    v20 = (unsigned int)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u);
    v21 = (char *)&HalpClockTickLog + 24 * (((unsigned __int8)v20 + 1) & 0xF);
    *(LARGE_INTEGER *)v21 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    *((_DWORD *)v21 + 2) = KeGetPcr()->Prcb.Number;
    *((_DWORD *)v21 + 3) = KiClockTimerOwner;
    v21[16] = 0;
    v22 = KeGetCurrentPrcb()->PendingTickFlags & 1;
    v21[16] = v22;
    v23 = v22 | KeGetCurrentPrcb()->PendingTickFlags & 2;
    v21[16] = v23;
    if ( KeGetCurrentPrcb()->ClockOwner )
      v21[16] = v23 | 4;
    if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
    {
      KeClockInterruptNotify((__int64)TrapFrame, PreviousIrql, 0);
      if ( KeGetCurrentPrcb()->ClockOwner )
      {
        v30 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
        {
          BYTE1(HalpClockWorkUnion) = 1;
          *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
        }
        if ( HalpClockWorkUnion )
          HalpTimerClockInterruptWork();
        v31 = KeGetCurrentPrcb();
        if ( HalpWatchdogTimer && v31->ClockOwner )
        {
          if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          {
            if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
              HalpTimerWatchdogResetCountdown();
            else
              guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v30);
          }
          if ( HalpTimerWatchdogResetCount == -1 )
            HalpTimerWatchdogTriggerSystemReset(0);
        }
        if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
        {
          LODWORD(v20) = KeGetPcr()->Prcb.Number;
          v32 = (_QWORD *)(HalpCounterSetInfo + 24 * v20);
          if ( MEMORY[0xFFFFF78000000008] - v32[2] >= 0x4C4B40uLL )
          {
            if ( (_QWORD *)*v32 != v32 )
              guard_dispatch_icall_no_overrides(0LL, 0LL);
            HalpScanForProfilingCorruption((unsigned int)v20);
            v32[2] = MEMORY[0xFFFFF78000000008];
          }
        }
      }
    }
    v11 = v41;
    v24 = 1;
    goto LABEL_27;
  }
  if ( (char *)ServiceRoutine == (char *)KiInterruptMessageDispatch )
  {
    v36 = KiInterruptMessageDispatch(a1, ServiceContext);
  }
  else
  {
    if ( (char *)ServiceRoutine == (char *)HalpTimerClockIpiRoutine )
    {
      v24 = HalpTimerClockIpiRoutine((__int64)a1, (__int64)ServiceContext);
      goto LABEL_27;
    }
    v36 = guard_dispatch_icall_no_overrides(a1, ServiceContext);
  }
  v24 = v36;
LABEL_27:
  if ( a2 )
  {
    v25 = a1->ActualLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v25, retaddr);
  }
  v26 = __rdtsc();
  DpcWatchdogSequenceNumber = v7->DpcWatchdogSequenceNumber;
  v28 = v26 - a1->IsrDpcStats.IsrTimeStart;
  if ( DpcWatchdogSequenceNumber != a1->IsrDpcStats.DpcWatchdog.SequenceNumber )
  {
    a1->IsrDpcStats.DpcWatchdog.SequenceNumber = DpcWatchdogSequenceNumber;
    a1->IsrDpcStats.DpcWatchdog.IsrTime = 0LL;
    a1->IsrDpcStats.DpcWatchdog.IsrCount = 0LL;
    a1->IsrDpcStats.DpcWatchdog.DpcTime = 0LL;
    a1->IsrDpcStats.DpcWatchdog.DpcCount = 0LL;
  }
  a1->IsrDpcStats.IsrTime += v28;
  a1->IsrDpcStats.DpcWatchdog.IsrTime += v28;
  ++a1->IsrDpcStats.IsrCount;
  ++a1->IsrDpcStats.DpcWatchdog.IsrCount;
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v29 = v26 - v11;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v29;
    else
      IsrDpcStats[4] += v29;
  }
  v7->IsrDpcStats = IsrDpcStats;
  a1->IsrDpcStats.IsrActive = 0;
  if ( v7 == (struct _KPRCB *)KiDeferredDpcWatchdogActivePrcb && v7->NestingLevel == 2 )
  {
    if ( v7->DpcRoutineActive )
      KiProcessDeferredDpcWatchdogViolation((__int64)a1->TrapFrame);
  }
  return v24 != 0;
}
