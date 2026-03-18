/*
 * XREFs of ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiAdjustRescheduleContextForParking @ 0x140353A94 (KiAdjustRescheduleContextForParking.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C395C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 * Callees:
 *     <none>
 */

struct _KI_RESCHEDULE_CONTEXT_ENTRY *__fastcall KiFindRescheduleContextEntryForPrcb(
        struct _KI_RESCHEDULE_CONTEXT *a1,
        struct _KPRCB *a2)
{
  __int64 i; // rax

  for ( i = 0LL; (unsigned int)i < a1->ProcessorCount; i = (unsigned int)(i + 1) )
  {
    if ( a1->ProcessorEntries[i].Prcb == a2 )
      return &a1->ProcessorEntries[i];
  }
  return 0LL;
}
