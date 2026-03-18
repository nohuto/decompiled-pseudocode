/*
 * XREFs of PpmCheckCustomRun @ 0x1403B45DC
 * Callers:
 *     PoLatencySensitivityHint @ 0x1403B7A90 (PoLatencySensitivityHint.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B38A4 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1404B3B5C (PpmCheckApplyResetNotification.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404B48A0 (PpmCheckDelayedPeriodicStart.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404C0B20 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmParkSetLpiCap @ 0x1404CF9C8 (PpmParkSetLpiCap.c)
 *     PopIntSteerSetMode @ 0x1405DC310 (PopIntSteerSetMode.c)
 *     PpmPerfReApplyStates @ 0x14074FB74 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x140A8E688 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14034ED50 (KiStartThreadCycleAccumulation.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PpmCheckStart @ 0x140457794 (PpmCheckStart.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v16);
  KeLeaveCriticalRegion();
}
