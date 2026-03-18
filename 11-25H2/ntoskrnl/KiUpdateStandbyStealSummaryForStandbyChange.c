/*
 * XREFs of KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404F06D4
 * Callers:
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1403A9D6C (KiUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiUpdateStandbyStealSummaryForStandbyChange(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  bool result; // al

  v1 = *(_QWORD *)(a1 + 192);
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(a1 + 16);
  result = v3
        && v3 != *(_QWORD *)(a1 + 24)
        && v3 != *(_QWORD *)(a1 + 14392)
        && v3 != *(_QWORD *)(a1 + 36480)
        && (**(_BYTE **)(a1 + 56) & 0x7Fu) >= 0x10;
  if ( ((*(_QWORD *)(v1 + 400) & v2) != 0) != result )
  {
    if ( result )
      _InterlockedOr64((volatile signed __int64 *)(v1 + 400), v2);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 400), ~v2);
  }
  return result;
}
