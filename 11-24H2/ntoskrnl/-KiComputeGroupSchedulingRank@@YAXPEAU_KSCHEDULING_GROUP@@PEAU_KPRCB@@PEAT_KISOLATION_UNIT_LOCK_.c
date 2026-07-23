/*
 * XREFs of ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402DBA34
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14045D564 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404A4194 (KiSetClockTimerDeadlineNoWake.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiComputeGroupSchedulingRank(
        struct _KSCHEDULING_GROUP *a1,
        struct _KPRCB *a2,
        union _KISOLATION_UNIT_LOCK_HANDLE *a3,
        struct _KSCB *a4)
{
  unsigned __int16 PrcbLockFlags; // ax
  bool v6; // dl
  __int64 v9; // r8
  char v10; // al
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 LongTermCycles; // rax
  __int64 RelativeWeight; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  volatile signed __int32 *ShareRank; // rax
  __int64 v20; // rcx
  bool v21; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v23; // rdx
  struct _KDPC *v24; // rcx

  PrcbLockFlags = a4->PrcbLockFlags;
  v6 = 0;
  v9 = PrcbLockFlags;
  if ( (PrcbLockFlags & 0x10) == 0 && (PrcbLockFlags & 2) == 0 )
  {
    v12 = a4->LastReportedCycles - a4->GenerationCycles;
    a4->LastReportedCycles = a4->GenerationCycles;
    v13 = v12 + _InterlockedExchangeAdd64(&a1->MaxQuotaCyclesRemaining, v12);
    if ( a1->NotificationCycles > 0 && (__int64)(v12 + _InterlockedExchangeAdd64(&a1->NotificationCycles, v12)) <= 0 )
    {
      v24 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)&a1->NotificationDpc, 0LL);
      if ( v24 )
        KeInsertQueueDpc(v24, 0LL, 0LL);
    }
    v9 = a4->PrcbLockFlags;
    v6 = v13 <= 0;
    if ( (v9 & 0x80u) != 0LL && a4->GenerationCycles > a4->MaxQuotaCycleTarget )
    {
      v6 = 1;
      goto LABEL_13;
    }
    if ( v13 <= 0 )
    {
LABEL_13:
      LOWORD(v9) = v9 | 2;
      a4->PrcbLockFlags = v9;
    }
  }
  if ( (v9 & 0x24) != 0 || a4->GenerationCycles < a4->MinQuotaCycleTarget )
  {
    v10 = 0;
  }
  else
  {
    LOWORD(v9) = v9 | 4;
    v10 = 1;
    a4->PrcbLockFlags = v9;
  }
  if ( (v9 & 0x20) == 0 && v10 || (v9 & 0x10) == 0 && v6 )
  {
    LongTermCycles = a4->LongTermCycles;
    a4->PrcbLockFlags = v9 | 4;
    RelativeWeight = a1->RelativeWeight;
    v16 = (unsigned __int64)(KiCycleDivisorLongTerm * RelativeWeight) >> 7;
    v17 = LongTermCycles % v16;
    v18 = LongTermCycles / v16 + 1;
    ShareRank = (volatile signed __int32 *)a4->ShareRank;
    a4->Rank = v18;
    if ( ShareRank )
      _InterlockedAdd(ShareRank, v18);
    a4->RankCycleTarget = a4->MinQuotaCycleTarget + ((unsigned __int64)(KiCycleDivisorShortTerm * RelativeWeight) >> 7);
    KiCheckForEffectivePriorityChange(a2, (union _KISOLATION_UNIT_LOCK_HANDLE *)v17, a4);
  }
  v11 = a4->PrcbLockFlags;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 2) != 0 )
      KiRemoveSchedulingGroupQueue(a2, a4, 1);
    else
      KiResortScbQueue(a2, a4, 1);
  }
  if ( (*(_BYTE *)&a4->0 & 4) != 0 && !a2->GroupSchedulingOverQuota )
  {
    KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, a2->Number, v9);
    v21 = KiClockTimerPerCpuTickScheduling == 0;
    a2->GroupSchedulingOverQuota = 1;
    if ( !v21 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v20) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v20, 15LL);
      }
      KiSetClockTimerDeadlineNoWake(a2, 4LL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v23) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      }
      __writecr8(CurrentIrql);
    }
  }
}
