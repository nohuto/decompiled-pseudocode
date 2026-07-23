/*
 * XREFs of KiFreezeTargetExecution @ 0x1405BF250
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1405B0100 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiEndDebugAccumulation @ 0x1404F2520 (KiEndDebugAccumulation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404F8B84 (KiSetDebuggerOwner.c)
 *     RtlCaptureContext @ 0x1404FA160 (RtlCaptureContext.c)
 *     KeSetVpThreadLowPriorityOverride @ 0x1405B4E30 (KeSetVpThreadLowPriorityOverride.c)
 *     KeRestoreSupervisorState @ 0x1405B5E20 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405B5EA4 (KeSaveSupervisorState.c)
 *     KiCheckStall @ 0x1405BF1C0 (KiCheckStall.c)
 *     KiStartDebugAccumulation @ 0x1405BF5FC (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1405C7AAC (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x1405C7B70 (KiSaveProcessorState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x1406AB0E0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1406AB1B0 (KiSaveProcessorControlState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdpReportExceptionStateChange @ 0x140B7C1E0 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140B95958 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140B959E4 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  bool v6; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *SchedulerAssist; // r8
  int v15; // ett
  int v16; // [rsp+20h] [rbp-D8h] BYREF
  int *v17; // [rsp+28h] [rbp-D0h]
  unsigned __int64 Rip; // [rsp+30h] [rbp-C8h]

  memset_0(&v16, 0, 0x98uLL);
  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v6 = KeDisableInterrupts();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    guard_dispatch_icall_no_overrides(v9, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
    }
    KeSetVpThreadLowPriorityOverride((__int64)CurrentPrcb, 1);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset_0(&v16, 0, 0x98uLL);
        v16 = -2147483641;
        v17 = &v16;
        Rip = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(&v16, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    KeSetVpThreadLowPriorityOverride((__int64)CurrentPrcb, 0);
    LOBYTE(v10) = KiResumeForReboot;
    guard_dispatch_icall_no_overrides(0LL, v10);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v11 = __readcr4();
    if ( (v11 & 0x20080) != 0 )
    {
      __writecr4(v11 ^ 0x80);
      __writecr4(v11);
    }
    else
    {
      v12 = __readcr3();
      __writecr3(v12);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    KeRestoreSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
    {
      v13 = KeGetCurrentPrcb();
      SchedulerAssist = v13->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v15 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v15 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
      _enable();
    }
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
