/*
 * XREFs of PpmPerfApplyProcessorState @ 0x1403E8944
 * Callers:
 *     PpmPerfAction @ 0x1403B0150 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x1403E8630 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PpmContinueTimeAccumulation @ 0x1403E8B08 (PpmContinueTimeAccumulation.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1403E8E10 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmScaleIdleStateValues @ 0x1403E955C (PpmScaleIdleStateValues.c)
 *     PpmEventTraceExpectedUtility @ 0x1403E9604 (PpmEventTraceExpectedUtility.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x1403E97D8 (PpmEventLegacyProcessorPerfStateChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // rbp
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r13
  _PROC_PERF_DOMAIN *Domain; // rdi
  bool v6; // r15
  char v7; // r12
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  char v9; // si
  char v10; // bl
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  KSPIN_LOCK *p_QosUpdateLock; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett

  Constraint = a1->PowerState.CheckContext.Constraint;
  p_CheckContext = &a1->PowerState.CheckContext;
  Domain = a1->PowerState.CheckContext.Domain;
  v6 = 0;
  v7 = 1;
  Master = Domain->Master;
  if ( p_CheckContext == Master || (v9 = 0, Domain->InitiateAllProcessors) )
    v9 = 1;
  if ( Domain->Coordination != 0xFD && a2 )
    v9 = 1;
  if ( a1 != KeGetCurrentPrcb() && (p_CheckContext == Master || v9 && Domain->AffinitizeControl) )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmContinueTimeAccumulation)(
          a1,
          (LARGE_INTEGER)PerformanceCounter.QuadPart);
  if ( v10 )
  {
    if ( Constraint->UseQosUpdateLock )
    {
      p_QosUpdateLock = &Constraint->QosUpdateLock;
      v6 = KeDisableInterrupts();
      KxAcquireSpinLock(p_QosUpdateLock);
    }
    else
    {
      v7 = 0;
      p_QosUpdateLock = &Constraint->QosUpdateLock;
    }
    LOBYTE(v14) = a2;
    LOBYTE(v13) = v9;
    v10 = PpmPerfArbitratorApplyProcessorState(a1, v13, v14);
    if ( v7 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)p_QosUpdateLock);
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v18 = *SchedulerAssist;
          do
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
          }
          while ( v19 != v18 );
          if ( (v18 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    if ( v10 )
    {
      if ( p_CheckContext == Domain->Master && Domain->DomainPerfControlHandler )
        guard_dispatch_icall_no_overrides(Domain->DomainContext, Domain->QosSelection);
      if ( !a2 )
      {
        PpmEventLegacyProcessorPerfStateChange(a1);
        PpmScaleIdleStateValues(&a1->PowerState);
        PpmEventTraceExpectedUtility(p_CheckContext);
      }
    }
  }
  return v10;
}
