/*
 * XREFs of ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1402D8768
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

bool __fastcall KiCheckMaxOverQuotaTransition(struct _KSCB *a1, struct _KSCHEDULING_GROUP *a2)
{
  unsigned __int16 PrcbLockFlags; // ax
  bool v3; // r8
  unsigned __int64 GenerationCycles; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int16 v9; // cx
  struct _KDPC *v10; // rcx

  PrcbLockFlags = a1->PrcbLockFlags;
  v3 = 0;
  if ( (PrcbLockFlags & 0x10) == 0 && (PrcbLockFlags & 2) == 0 )
  {
    GenerationCycles = a1->GenerationCycles;
    v7 = a1->LastReportedCycles - a1->GenerationCycles;
    a1->LastReportedCycles = GenerationCycles;
    v8 = v7 + _InterlockedExchangeAdd64(&a2->MaxQuotaCyclesRemaining, v7);
    if ( a2->NotificationCycles > 0 && (__int64)(v7 + _InterlockedExchangeAdd64(&a2->NotificationCycles, v7)) <= 0 )
    {
      v10 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)&a2->NotificationDpc, 0LL);
      if ( v10 )
        KeInsertQueueDpc(v10, 0LL, 0LL);
    }
    v9 = a1->PrcbLockFlags;
    v3 = v8 <= 0;
    if ( (v9 & 0x80u) != 0 && a1->GenerationCycles > a1->MaxQuotaCycleTarget )
    {
      v3 = 1;
      goto LABEL_7;
    }
    if ( v8 <= 0 )
LABEL_7:
      a1->PrcbLockFlags = v9 | 2;
  }
  return v3;
}
