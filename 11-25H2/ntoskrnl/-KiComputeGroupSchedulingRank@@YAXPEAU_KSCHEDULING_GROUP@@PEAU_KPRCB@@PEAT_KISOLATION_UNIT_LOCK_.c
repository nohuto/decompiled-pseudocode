/*
 * XREFs of ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x140350788
 * Callers:
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402F6764 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x140350F40 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140351E34 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404F3C70 (KiSetClockTimerDeadlineNoWake.c)
 */

void __fastcall KiComputeGroupSchedulingRank(
        struct _KSCHEDULING_GROUP *a1,
        struct _KPRCB *a2,
        union _KISOLATION_UNIT_LOCK_HANDLE *a3,
        struct _KSCB *a4)
{
  __int64 PrcbLockFlags; // r8
  bool v6; // dl
  unsigned __int8 v9; // al
  char v10; // al
  unsigned __int16 v11; // ax
  unsigned __int64 LongTermCycles; // rax
  __int64 RelativeWeight; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  volatile signed __int32 *ShareRank; // rax
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v21; // rdx

  PrcbLockFlags = a4->PrcbLockFlags;
  v6 = 0;
  if ( (PrcbLockFlags & 0x12) == 0 )
  {
    v9 = KiChargeSchedulingGroupCycleTime(a1, a4);
    PrcbLockFlags = a4->PrcbLockFlags;
    v6 = v9 != 0;
    if ( (PrcbLockFlags & 0x80u) != 0LL && a4->GenerationCycles > a4->MaxQuotaCycleTarget )
    {
      v6 = 1;
      goto LABEL_30;
    }
    if ( v9 )
    {
LABEL_30:
      LOWORD(PrcbLockFlags) = PrcbLockFlags | 2;
      a4->PrcbLockFlags = PrcbLockFlags;
    }
  }
  if ( (PrcbLockFlags & 0x24) != 0 || a4->GenerationCycles < a4->MinQuotaCycleTarget )
  {
    v10 = 0;
  }
  else
  {
    LOWORD(PrcbLockFlags) = PrcbLockFlags | 4;
    v10 = 1;
    a4->PrcbLockFlags = PrcbLockFlags;
  }
  if ( (PrcbLockFlags & 0x20) == 0 && v10 || (PrcbLockFlags & 0x10) == 0 && v6 )
  {
    LongTermCycles = a4->LongTermCycles;
    a4->PrcbLockFlags = PrcbLockFlags | 4;
    RelativeWeight = a1->RelativeWeight;
    v14 = (unsigned __int64)(KiCycleDivisorLongTerm * RelativeWeight) >> 7;
    v15 = LongTermCycles % v14;
    v16 = LongTermCycles / v14 + 1;
    ShareRank = (volatile signed __int32 *)a4->ShareRank;
    a4->Rank = v16;
    if ( ShareRank )
      _InterlockedAdd(ShareRank, v16);
    a4->RankCycleTarget = a4->MinQuotaCycleTarget + ((unsigned __int64)(KiCycleDivisorShortTerm * RelativeWeight) >> 7);
    KiCheckForEffectivePriorityChange(a2, (union _KISOLATION_UNIT_LOCK_HANDLE *)v15, a4);
  }
  v11 = a4->PrcbLockFlags;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 2) != 0 )
      KiRemoveSchedulingGroupQueue(a2, a4, 1u);
    else
      KiResortScbQueue(a2, a4, 1u);
  }
  if ( (*(_BYTE *)&a4->0 & 4) != 0 && !a2->GroupSchedulingOverQuota )
  {
    KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, a2->Number, PrcbLockFlags, a4);
    v19 = KiClockTimerPerCpuTickScheduling == 0;
    a2->GroupSchedulingOverQuota = 1;
    if ( !v19 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v18) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v18);
      }
      KiSetClockTimerDeadlineNoWake(a2, 4LL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v21) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
      }
      __writecr8(CurrentIrql);
    }
  }
}
