/*
 * XREFs of KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C5ACC
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlResumeFromRootCrashdump @ 0x140588088 (HvlResumeFromRootCrashdump.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C6550 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiBugCheckRecoveryCleanupFromCrashDump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  v4 = a2;
  v5 = (unsigned __int8)a1;
  result = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) != 0 && (unsigned int)result < 3 )
  {
    if ( (_DWORD)result == 2 )
    {
      LOBYTE(a1) = 1;
      HvlResumeFromRootCrashdump(a1, a2, a3, a4);
      KiSaveBugcheckRecoveryProgress(99LL);
    }
    KiSendThawExecution(1);
    result = guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
    if ( v4 )
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
  }
  return result;
}
