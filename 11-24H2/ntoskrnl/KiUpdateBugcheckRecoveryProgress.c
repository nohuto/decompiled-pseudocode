/*
 * XREFs of KiUpdateBugcheckRecoveryProgress @ 0x1405C3FAC
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C3C80 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C3DD8 (KiSetBugCheckRecoveryProgressFlag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x14058F140 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058F2E0 (IoSetBugCheckProgressFlag.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
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
