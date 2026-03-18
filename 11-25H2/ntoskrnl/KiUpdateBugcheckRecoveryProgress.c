/*
 * XREFs of KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C21B0 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C2308 (KiSetBugCheckRecoveryProgressFlag.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendThawExecution @ 0x1404D91B0 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x14058E8F0 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058EA90 (IoSetBugCheckProgressFlag.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 */

__int64 __fastcall KiUpdateBugcheckRecoveryProgress(_DWORD *a1)
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
    switch ( *a1 )
    {
      case 0:
        IoSaveInitialBugCheckProgress(a1[4]);
        goto LABEL_15;
      case 1:
        IoSaveBugCheckProgress(a1[2]);
        goto LABEL_15;
      case 2:
        IoSetBugCheckProgressFlag(a1[2]);
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
