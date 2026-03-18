/*
 * XREFs of KeThawExecution @ 0x1404F4AF0
 * Callers:
 *     ExpWaitForBootDevices @ 0x140655DF0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404F4C20 (KiEndDebugAccumulation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeThawExecution(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  v5 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v5 = KdPortLocked;
  guard_dispatch_icall_no_overrides(0LL, 0LL, a3, a4);
  if ( !PoAllProcIntrDisabled )
  {
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  KiSendThawExecution(1);
  v6 = (unsigned __int8)KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&KiFreezeExecutionLock);
  if ( v5 )
    KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
  v7 = __readcr4();
  if ( (v7 & 0x20080) != 0 )
  {
    __writecr4(v7 ^ 0x80);
    __writecr4(v7);
  }
  else
  {
    v8 = __readcr3();
    __writecr3(v8);
  }
  result = KiEndDebugAccumulation(KeGetCurrentPrcb());
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = v6;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(v6);
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
        v13 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v13 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
