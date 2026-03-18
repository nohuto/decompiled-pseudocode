/*
 * XREFs of KiUpdateBugcheckRecoveryProgress @ 0x1405C687C
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C6550 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C66A8 (KiSetBugCheckRecoveryProgressFlag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x140592120 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1405922C0 (IoSetBugCheckProgressFlag.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 */

__int64 __fastcall KiUpdateBugcheckRecoveryProgress(__int64 a1)
{
  unsigned int v3; // ebx
  char v4; // bp
  bool v5; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  if ( KiRecoveryCheckpointsFailure )
    return 3221225473LL;
  v3 = 0;
  v4 = 1;
  v5 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( (unsigned int)KiBugCheckRecoveryFreezeOtherProcessors(0xF4240u) <= 1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        IoSaveInitialBugCheckProgress(*(_DWORD *)(a1 + 16), *(_QWORD *)(a1 + 8));
        goto LABEL_15;
      case 1:
        IoSaveBugCheckProgress(*(_DWORD *)(a1 + 8));
        goto LABEL_15;
      case 2:
        IoSetBugCheckProgressFlag(*(_DWORD *)(a1 + 8));
        goto LABEL_15;
    }
    KiRecoveryCheckpointsFailure = 1;
  }
  else
  {
    v4 = 0;
    KiRecoveryCheckpointsFailure = 1;
  }
  v3 = -1073741823;
LABEL_15:
  KiSendThawExecution(v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v3;
}
