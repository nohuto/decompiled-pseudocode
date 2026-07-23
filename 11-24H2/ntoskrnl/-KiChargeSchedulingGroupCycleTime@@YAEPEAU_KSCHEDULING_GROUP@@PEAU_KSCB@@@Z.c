/*
 * XREFs of ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x1402D8414
 * Callers:
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402D8368 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

bool __fastcall KiChargeSchedulingGroupCycleTime(struct _KSCHEDULING_GROUP *a1, struct _KSCB *a2)
{
  unsigned __int64 v3; // rcx
  bool v4; // bl
  struct _KDPC *v6; // rcx

  v3 = a2->LastReportedCycles - a2->GenerationCycles;
  a2->LastReportedCycles = a2->GenerationCycles;
  v4 = (__int64)(v3 + _InterlockedExchangeAdd64(&a1->MaxQuotaCyclesRemaining, v3)) <= 0;
  if ( a1->NotificationCycles > 0 && (__int64)(v3 + _InterlockedExchangeAdd64(&a1->NotificationCycles, v3)) <= 0 )
  {
    v6 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)&a1->NotificationDpc, 0LL);
    if ( v6 )
      KeInsertQueueDpc(v6, 0LL, 0LL);
  }
  return v4;
}
