/*
 * XREFs of KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404E95F0
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140299510 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14047C4A8 (KiUpdateThreadSchedulingProperties.c)
 * Callees:
 *     KiMayStealStandbyThread @ 0x140298460 (KiMayStealStandbyThread.c)
 */

bool __fastcall KiUpdateStandbyStealSummaryForStandbyChange(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 192);
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v1 + 400);
  result = KiMayStealStandbyThread(a1, 0LL, 1);
  if ( ((v3 & v2) != 0) != result )
  {
    if ( result )
      _InterlockedOr64((volatile signed __int64 *)(v1 + 400), v2);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 400), ~v2);
  }
  return result;
}
