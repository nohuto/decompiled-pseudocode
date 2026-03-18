/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x14029AC10
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x14029A050 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x14029A1B0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14030F768 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiReduceToUnderMaxQuotaSet @ 0x140469878 (KiReduceToUnderMaxQuotaSet.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 416);
    if ( !a1 )
      return 0;
  }
  return 1;
}
