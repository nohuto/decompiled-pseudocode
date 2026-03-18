/*
 * XREFs of PpmCheckCustomRun @ 0x140202CF8
 * Callers:
 *     PoLatencySensitivityHint @ 0x140201F50 (PoLatencySensitivityHint.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B3F74 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1404B422C (PpmCheckApplyResetNotification.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404B4F80 (PpmCheckDelayedPeriodicStart.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404C26D0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmParkSetLpiCap @ 0x1404CF974 (PpmParkSetLpiCap.c)
 *     PopIntSteerSetMode @ 0x1405D7130 (PopIntSteerSetMode.c)
 *     PpmPerfReApplyStates @ 0x140743AA4 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x140A69408 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x140203674 (PpmCheckStart.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14031AC90 (KiStartThreadCycleAccumulation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall PpmCheckCustomRun(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _KTHREAD *CurrentThread; // rdx
  signed __int32 *SchedulerAssist; // r8
  struct _KPRCB *v6; // rcx
  _KTHREAD *v7; // rdx
  __int64 v8; // rdx
  unsigned __int32 *v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // ett
  int v14; // [rsp+38h] [rbp+10h] BYREF

  PpmPerfPolicyLock = 0LL;
  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  _disable();
  KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, 0LL);
  SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v10 = *SchedulerAssist;
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
    }
    while ( v11 != v10 );
    if ( (v10 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick();
  }
  _enable();
  PpmCheckStart(v1);
  v6 = KeGetCurrentPrcb();
  v7 = v6->CurrentThread;
  _disable();
  KiStartThreadCycleAccumulation(v6, v7, 0LL);
  v9 = (unsigned __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( v9 )
  {
    _m_prefetchw(v9);
    v12 = *v9;
    do
    {
      v8 = v12;
      LODWORD(v8) = v12 & 0xFFDFFFFF;
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)v9, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick();
  }
  _enable();
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  __writecr8(CurrentIrql);
  v14 = 22;
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v14);
  KeLeaveCriticalRegion();
}
