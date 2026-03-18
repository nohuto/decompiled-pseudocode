/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x140299C60
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiUpdateGroupSchedulingRank @ 0x140299CB0 (KiUpdateGroupSchedulingRank.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x14029A050 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x14029A1B0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x14029A850 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  return *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1;
}
