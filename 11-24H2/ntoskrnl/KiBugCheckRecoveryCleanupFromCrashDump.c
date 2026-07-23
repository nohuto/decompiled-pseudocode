/*
 * XREFs of KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C31FC
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlResumeFromRootCrashdump @ 0x1405853A8 (HvlResumeFromRootCrashdump.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C3C80 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiBugCheckRecoveryCleanupFromCrashDump(unsigned __int8 a1, char a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v9; // ett

  v3 = a1;
  result = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) != 0 && (unsigned int)result < 3 )
  {
    if ( (_DWORD)result == 2 )
    {
      HvlResumeFromRootCrashdump(1);
      KiSaveBugcheckRecoveryProgress(99LL);
    }
    KiSendThawExecution(1);
    result = guard_dispatch_icall_no_overrides(v6, v5);
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
          v9 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v9 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}
