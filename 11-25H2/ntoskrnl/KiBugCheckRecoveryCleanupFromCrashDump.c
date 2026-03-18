/*
 * XREFs of KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C172C
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendThawExecution @ 0x1404D91B0 (KiSendThawExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlResumeFromRootCrashdump @ 0x140584908 (HvlResumeFromRootCrashdump.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C21B0 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiBugCheckRecoveryCleanupFromCrashDump(__int64 a1, char a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v8; // ett

  v3 = (unsigned __int8)a1;
  result = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) != 0 && (unsigned int)result < 3 )
  {
    if ( (_DWORD)result == 2 )
    {
      LOBYTE(a1) = 1;
      HvlResumeFromRootCrashdump(a1);
      KiSaveBugcheckRecoveryProgress(99LL);
    }
    KiSendThawExecution(1);
    result = guard_dispatch_icall_no_overrides(v5);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
    if ( a2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v8 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v8 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}
