/*
 * XREFs of KeThawExecution @ 0x1404F23F0
 * Callers:
 *     ExpWaitForBootDevices @ 0x1406544F0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404F2520 (KiEndDebugAccumulation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // di
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  guard_dispatch_icall_no_overrides(0LL, 0LL);
  if ( !PoAllProcIntrDisabled )
  {
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  KiSendThawExecution(1);
  v3 = (unsigned __int8)KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
  v4 = __readcr4();
  if ( (v4 & 0x20080) != 0 )
  {
    __writecr4(v4 ^ 0x80);
    __writecr4(v4);
  }
  else
  {
    v5 = __readcr3();
    __writecr3(v5);
  }
  result = KiEndDebugAccumulation(KeGetCurrentPrcb());
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v3;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v3);
  if ( a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v10 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v10 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
