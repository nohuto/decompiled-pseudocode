/*
 * XREFs of PpmPerfApplyProcessorState @ 0x14029F124
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14029EE10 (PpmPerfApplyProcessorStates.c)
 *     PpmPerfAction @ 0x140351770 (PpmPerfAction.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14029E340 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmContinueTimeAccumulation @ 0x14029F2E8 (PpmContinueTimeAccumulation.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     PpmScaleIdleStateValues @ 0x14032D1B4 (PpmScaleIdleStateValues.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PpmEventTraceExpectedUtility @ 0x14046F540 (PpmEventTraceExpectedUtility.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x14047481C (PpmEventLegacyProcessorPerfStateChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, unsigned __int8 a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // rbp
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r13
  _PROC_PERF_DOMAIN *Domain; // rdi
  char v6; // r15
  char v7; // r12
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  unsigned __int8 v9; // si
  char v10; // bl
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  KSPIN_LOCK *p_QosUpdateLock; // rbp
  signed __int32 *SchedulerAssist; // r8
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v20; // eax
  signed __int32 v21; // ett

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
      v6 = KeDisableInterrupts(v14, v13, v15);
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
          v20 = *SchedulerAssist;
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
          }
          while ( v21 != v20 );
          if ( (v20 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    if ( v10 )
    {
      if ( p_CheckContext == Domain->Master && Domain->DomainPerfControlHandler )
      {
        LOBYTE(v18) = a2;
        LOBYTE(SchedulerAssist) = v9;
        guard_dispatch_icall_no_overrides(Domain->DomainContext, Domain->QosSelection, SchedulerAssist, v18);
      }
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
