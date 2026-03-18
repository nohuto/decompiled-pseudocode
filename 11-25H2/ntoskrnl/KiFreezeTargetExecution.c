/*
 * XREFs of KiFreezeTargetExecution @ 0x1405BDC20
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1405AF800 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiEndDebugAccumulation @ 0x1404F10F0 (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x1404F8C24 (KiSetDebuggerOwner.c)
 *     RtlCaptureContext @ 0x1404FA120 (RtlCaptureContext.c)
 *     KeRestoreSupervisorState @ 0x1405B4A20 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405B4AA4 (KeSaveSupervisorState.c)
 *     KiCheckStall @ 0x1405BDB90 (KiCheckStall.c)
 *     KiStartDebugAccumulation @ 0x1405BDFE0 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1405C5D5C (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x1405C5E20 (KiSaveProcessorState.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x14069EE70 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14069EF40 (KiSaveProcessorControlState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KdpReportExceptionStateChange @ 0x140B6A1E0 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140B83978 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140B83A04 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  bool v6; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  volatile signed __int32 *SchedulerAssist; // rax
  volatile signed __int32 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // r8
  int v16; // ett
  int v17; // [rsp+20h] [rbp-D8h] BYREF
  int *v18; // [rsp+28h] [rbp-D0h]
  unsigned __int64 Rip; // [rsp+30h] [rbp-C8h]

  memset_0(&v17, 0, 0x98uLL);
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
    guard_dispatch_icall_no_overrides(v9);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
    }
    SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset_0(&v17, 0, 0x98uLL);
        v17 = -2147483641;
        v18 = &v17;
        Rip = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(&v17, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    v11 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v11 )
      _InterlockedAnd(v11, 0xFFFDFFFF);
    guard_dispatch_icall_no_overrides(0LL);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v12 = __readcr4();
    if ( (v12 & 0x20080) != 0 )
    {
      __writecr4(v12 ^ 0x80);
      __writecr4(v12);
    }
    else
    {
      v13 = __readcr3();
      __writecr3(v13);
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
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        _m_prefetchw(v15);
        LODWORD(result) = *v15;
        do
        {
          v16 = result;
          result = (unsigned int)_InterlockedCompareExchange(v15, result & 0xFFDFFFFF, result);
        }
        while ( v16 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
      _enable();
    }
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
