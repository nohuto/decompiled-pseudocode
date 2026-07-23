/*
 * XREFs of KiUpdateGroupSchedulingRank @ 0x1402A87A0
 * Callers:
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402D8368 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1402D8768 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14045D564 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404A4194 (KiSetClockTimerDeadlineNoWake.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiUpdateGroupSchedulingRank(
        __int64 a1,
        struct _KPRCB *a2,
        __int64 a3,
        char a4,
        struct _SINGLE_LIST_ENTRY **a5)
{
  volatile signed __int64 *v5; // rdi
  struct _KSCB *v8; // rbx
  int v9; // r14d
  unsigned __int16 PrcbLockFlags; // cx
  __int16 v11; // r13
  char v12; // al
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  volatile signed __int32 *ShareRank; // rax
  bool v22; // zf
  unsigned __int8 CurrentIrql; // di
  struct _KDPC *v24; // rcx
  unsigned int Rank; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+70h] [rbp+18h]

  v5 = *(volatile signed __int64 **)(a1 + 104);
  if ( !v5 )
    return;
  v8 = (struct _KSCB *)((char *)v5 + a2->ScbOffset);
  v9 = 0;
  while ( 1 )
  {
    PrcbLockFlags = v8->PrcbLockFlags;
    v11 = PrcbLockFlags & 2;
    Rank = v8->Rank;
    if ( (PrcbLockFlags & 4) == 0 )
    {
      LOBYTE(a3) = 0;
      if ( (PrcbLockFlags & 0x12) != 0 )
        goto LABEL_5;
      v15 = v8->LastReportedCycles - v8->GenerationCycles;
      v8->LastReportedCycles = v8->GenerationCycles;
      v16 = v15 + _InterlockedExchangeAdd64(v5 + 6, v15);
      v26 = v16;
      if ( *((__int64 *)v5 + 4) > 0 && (__int64)(v15 + _InterlockedExchangeAdd64(v5 + 4, v15)) <= 0 )
      {
        v24 = (struct _KDPC *)_InterlockedExchange64(v5 + 9, 0LL);
        if ( v24 )
        {
          KeInsertQueueDpc(v24, 0LL, 0LL);
          v16 = v26;
        }
      }
      PrcbLockFlags = v8->PrcbLockFlags;
      LOBYTE(a3) = v16 <= 0;
      if ( (PrcbLockFlags & 0x80u) == 0 || v8->GenerationCycles <= v8->MaxQuotaCycleTarget )
      {
        if ( v16 > 0 )
          goto LABEL_5;
      }
      else
      {
        LOBYTE(a3) = 1;
      }
      PrcbLockFlags |= 2u;
      v8->PrcbLockFlags = PrcbLockFlags;
LABEL_5:
      if ( (PrcbLockFlags & 0x24) != 0 || v8->GenerationCycles < v8->MinQuotaCycleTarget )
      {
        v12 = 0;
      }
      else
      {
        PrcbLockFlags |= 4u;
        v12 = 1;
        v8->PrcbLockFlags = PrcbLockFlags;
      }
      if ( (PrcbLockFlags & 0x20) == 0 && v12 || (PrcbLockFlags & 0x10) == 0 && (_BYTE)a3 )
      {
        v8->PrcbLockFlags = PrcbLockFlags | 4;
        v17 = *((unsigned int *)v5 + 2);
        v18 = (unsigned __int64)(KiCycleDivisorLongTerm * v17) >> 7;
        v19 = v8->LongTermCycles % v18;
        v20 = v8->LongTermCycles / v18 + 1;
        ShareRank = (volatile signed __int32 *)v8->ShareRank;
        v8->Rank = v20;
        if ( ShareRank )
          _InterlockedAdd(ShareRank, v20);
        v8->RankCycleTarget = v8->MinQuotaCycleTarget + ((unsigned __int64)(KiCycleDivisorShortTerm * v17) >> 7);
        KiCheckForEffectivePriorityChange(a2, (union _KISOLATION_UNIT_LOCK_HANDLE *)v19, v8);
      }
      v13 = v8->PrcbLockFlags;
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 2) != 0 )
          KiRemoveSchedulingGroupQueue(a2, v8, 1u);
        else
          KiResortScbQueue(a2, v8, 1u);
      }
      if ( (*(_BYTE *)&v8->0 & 4) != 0 && !a2->GroupSchedulingOverQuota )
      {
        KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, a2->Number, a3);
        v22 = KiClockTimerPerCpuTickScheduling == 0;
        a2->GroupSchedulingOverQuota = 1;
        if ( !v22 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
          KiSetClockTimerDeadlineNoWake(a2, 4LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
      goto LABEL_11;
    }
    if ( KiCheckMaxOverQuotaTransition(v8, (struct _KSCHEDULING_GROUP *)v5) )
    {
      if ( (*(_BYTE *)&v8->0 & 1) != 0 )
        KiRemoveSchedulingGroupQueue(a2, v8, 1u);
    }
    else if ( v8->GenerationCycles >= v8->RankCycleTarget && (*(_BYTE *)&v8->0 & 2) == 0 )
    {
      KiRecomputeGroupSchedulingRank((struct _KSCHEDULING_GROUP *)v5, v8, a2);
    }
LABEL_11:
    if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 && (Rank != v8->Rank || (v11 != 0) != ((v8->PrcbLockFlags >> 1) & 1)) )
    {
      v8->PrcbLockFlags |= 0x100u;
      v8->TracingListEntry.Next = *a5;
      *a5 = &v8->TracingListEntry;
    }
    v9 += v8->Rank;
    v8 = v8->Parent;
    if ( !v8 )
      break;
    v5 = (volatile signed __int64 *)((char *)v8 - a2->ScbOffset);
  }
  if ( a4
    && (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a1)
    && KiShouldPreemptionBeDeferred(v14)
    && v9
    && (*(_DWORD *)(a1 + 120) & 0xC00) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
  }
}
