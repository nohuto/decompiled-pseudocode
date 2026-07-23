/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1402A8750
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8B40 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402A9340 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiQueryEffectivePriorityThreadWithStateLock @ 0x1405C2794 (KiQueryEffectivePriorityThreadWithStateLock.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  return *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1;
}
