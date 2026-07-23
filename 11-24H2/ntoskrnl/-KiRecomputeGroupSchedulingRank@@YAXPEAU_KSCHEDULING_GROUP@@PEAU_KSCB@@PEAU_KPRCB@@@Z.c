/*
 * XREFs of ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402D8368
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x1402D8414 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

void __fastcall KiRecomputeGroupSchedulingRank(struct _KSCHEDULING_GROUP *a1, struct _KSCB *a2, struct _KPRCB *a3)
{
  unsigned __int64 v6; // r10
  volatile signed __int32 *ShareRank; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 RankCycleTarget; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rtt
  volatile signed __int32 *v12; // rcx

  KiChargeSchedulingGroupCycleTime(a1, a2);
  v6 = KiCycleDivisorShortTerm * a1->RelativeWeight;
  ++a2->Rank;
  ShareRank = (volatile signed __int32 *)a2->ShareRank;
  v8 = v6 >> 7;
  a2->RankCycleTarget += v8;
  if ( ShareRank )
    _InterlockedIncrement(ShareRank);
  RankCycleTarget = a2->RankCycleTarget;
  if ( a2->GenerationCycles > RankCycleTarget )
  {
    v11 = v8 + a2->GenerationCycles - RankCycleTarget - 1;
    v10 = v11 / v8;
    a2->Rank += v11 / v8;
    a2->RankCycleTarget = RankCycleTarget + v8 * (unsigned int)(v11 / v8);
    v12 = (volatile signed __int32 *)a2->ShareRank;
    if ( v12 )
      _InterlockedAdd(v12, v10);
  }
  if ( (*(_BYTE *)&a2->0 & 1) != 0 )
    KiResortScbQueue(a3, a2, 1u);
}
