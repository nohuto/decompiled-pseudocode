/*
 * XREFs of PpmCheckCustomRun @ 0x14044C05C
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x14044BD40 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckDelayedPeriodicStart @ 0x14044BD70 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckApplyResetNotification @ 0x14044BDA8 (PpmCheckApplyResetNotification.c)
 *     PpmCheckApplyParkConstraints @ 0x14044BDC4 (PpmCheckApplyParkConstraints.c)
 *     PoLatencySensitivityHint @ 0x14044BDE0 (PoLatencySensitivityHint.c)
 *     PpmParkSetLpiCap @ 0x1404C8A78 (PpmParkSetLpiCap.c)
 *     PopIntSteerSetMode @ 0x1405D91E0 (PopIntSteerSetMode.c)
 *     PpmPerfReApplyStates @ 0x14074DEA4 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x140A8ACF8 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiEndThreadCycleAccumulation @ 0x14036B600 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14036D230 (KiStartThreadCycleAccumulation.c)
 *     PpmCheckStart @ 0x14044C244 (PpmCheckStart.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall PpmCheckCustomRun(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CurrentThread; // rdx
  struct _KPRCB *v5; // rcx
  signed __int32 *SchedulerAssist; // r8
  struct _KPRCB *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _KPRCB *v10; // rcx
  unsigned __int32 *v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  int v16; // [rsp+38h] [rbp+10h] BYREF

  PpmPerfPolicyLock = 0LL;
  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, 0);
  v5 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v5->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v5);
  }
  _enable();
  PpmCheckStart(v1);
  v7 = KeGetCurrentPrcb();
  v8 = (__int64)v7->CurrentThread;
  _disable();
  KiStartThreadCycleAccumulation((__int64)v7, v8, 0);
  v10 = KeGetCurrentPrcb();
  v11 = (unsigned __int32 *)v10->SchedulerAssist;
  if ( v11 )
  {
    _m_prefetchw(v11);
    v14 = *v11;
    do
    {
      v9 = v14;
      LODWORD(v9) = v14 & 0xFFDFFFFF;
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v14 & 0xFFDFFFFF, v14);
    }
    while ( v15 != v14 );
    if ( (v14 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(CurrentIrql);
  v16 = 22;
  KiClearSystemPriority(KeGetCurrentThread(), &v16);
  KeLeaveCriticalRegion();
}
