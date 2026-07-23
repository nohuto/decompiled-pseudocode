/*
 * XREFs of PpmPerfApplyProcessorState @ 0x1402ADC20
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x1402AF070 (PpmPerfApplyProcessorStates.c)
 *     PpmPerfAction @ 0x1402AFC80 (PpmPerfAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ACE30 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmContinueTimeAccumulation @ 0x1402AD8FC (PpmContinueTimeAccumulation.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x1404374C4 (PpmScaleIdleStateValues.c)
 *     PpmEventTraceExpectedUtility @ 0x140469D1C (PpmEventTraceExpectedUtility.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x14047062C (PpmEventLegacyProcessorPerfStateChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // rbp
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r13
  _PROC_PERF_DOMAIN *Domain; // rdi
  char v6; // r15
  char v7; // r12
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  unsigned __int8 v9; // si
  char v10; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  KSPIN_LOCK *p_QosUpdateLock; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett

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
  KeQueryPerformanceCounter(0LL);
  v10 = PpmContinueTimeAccumulation(a1);
  if ( v10 )
  {
    if ( Constraint->UseQosUpdateLock )
    {
      p_QosUpdateLock = &Constraint->QosUpdateLock;
      v6 = KeDisableInterrupts(v13, v12, v14, v15);
      KxAcquireSpinLock(p_QosUpdateLock);
    }
    else
    {
      v7 = 0;
      p_QosUpdateLock = &Constraint->QosUpdateLock;
    }
    v10 = PpmPerfArbitratorApplyProcessorState((__int64)a1, v9, a2);
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
          v19 = *SchedulerAssist;
          do
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
          }
          while ( v20 != v19 );
          if ( (v19 & 0x200000) != 0 )
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
