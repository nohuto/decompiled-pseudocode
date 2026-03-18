/*
 * XREFs of KiFreezeTargetExecution @ 0x1405C1C80
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1405B3190 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiEndDebugAccumulation @ 0x1404F4C20 (KiEndDebugAccumulation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404FB2A4 (KiSetDebuggerOwner.c)
 *     RtlCaptureContext @ 0x1404FC8A0 (RtlCaptureContext.c)
 *     KeSetVpThreadLowPriorityOverride @ 0x1405B7860 (KeSetVpThreadLowPriorityOverride.c)
 *     KeRestoreSupervisorState @ 0x1405B87E0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405B8864 (KeSaveSupervisorState.c)
 *     KiCheckStall @ 0x1405C1BF0 (KiCheckStall.c)
 *     KiStartDebugAccumulation @ 0x1405C202C (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1405CA37C (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x1405CA440 (KiSaveProcessorState.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x1406AA140 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1406AA210 (KiSaveProcessorControlState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KdpReportExceptionStateChange @ 0x140B7A1E0 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140B93958 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140B939E4 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  bool v6; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *SchedulerAssist; // r8
  int v19; // ett
  int v20; // [rsp+20h] [rbp-D8h] BYREF
  int *v21; // [rsp+28h] [rbp-D0h]
  unsigned __int64 Rip; // [rsp+30h] [rbp-C8h]

  memset_0(&v20, 0, 0x98uLL);
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
    guard_dispatch_icall_no_overrides(v9, 0LL, v10, v11);
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
        memset_0(&v20, 0, 0x98uLL);
        v20 = -2147483641;
        v21 = &v20;
        Rip = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(&v20, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    KeSetVpThreadLowPriorityOverride((__int64)CurrentPrcb, 0);
    LOBYTE(v12) = KiResumeForReboot;
    guard_dispatch_icall_no_overrides(0LL, v12, v13, v14);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v15 = __readcr4();
    if ( (v15 & 0x20080) != 0 )
    {
      __writecr4(v15 ^ 0x80);
      __writecr4(v15);
    }
    else
    {
      v16 = __readcr3();
      __writecr3(v16);
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
      v17 = KeGetCurrentPrcb();
      SchedulerAssist = v17->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v19 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v19 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
      _enable();
    }
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
