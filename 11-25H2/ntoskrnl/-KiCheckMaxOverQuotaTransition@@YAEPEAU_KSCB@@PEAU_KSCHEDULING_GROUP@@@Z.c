/*
 * XREFs of ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x140350974
 * Callers:
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x140350F40 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 */

bool __fastcall KiCheckMaxOverQuotaTransition(struct _KSCB *a1, struct _KSCHEDULING_GROUP *a2)
{
  bool v2; // r8
  unsigned __int8 v4; // al
  unsigned __int16 PrcbLockFlags; // cx

  v2 = 0;
  if ( (*(_BYTE *)&a1->0 & 0x12) == 0 )
  {
    v4 = KiChargeSchedulingGroupCycleTime(a2, a1);
    PrcbLockFlags = a1->PrcbLockFlags;
    v2 = v4 != 0;
    if ( (PrcbLockFlags & 0x80u) != 0 && a1->GenerationCycles > a1->MaxQuotaCycleTarget )
    {
      v2 = 1;
      goto LABEL_5;
    }
    if ( v4 )
LABEL_5:
      a1->PrcbLockFlags = PrcbLockFlags | 2;
  }
  return v2;
}
