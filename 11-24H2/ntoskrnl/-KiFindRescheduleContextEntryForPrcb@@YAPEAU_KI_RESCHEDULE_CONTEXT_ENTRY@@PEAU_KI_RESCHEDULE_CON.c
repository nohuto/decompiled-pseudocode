/*
 * XREFs of ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1403CA100
 * Callers:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiAttemptToStealStandbyThread @ 0x140297D94 (KiAttemptToStealStandbyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForParking @ 0x1403C9FA0 (KiAdjustRescheduleContextForParking.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C7B74 (KiAdjustRescheduleContextForIsolationWidthChange.c)
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
