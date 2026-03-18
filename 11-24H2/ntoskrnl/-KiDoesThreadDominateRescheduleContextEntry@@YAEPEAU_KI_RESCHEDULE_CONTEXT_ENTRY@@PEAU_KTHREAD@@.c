/*
 * XREFs of ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x14029A7B0
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x14029A1B0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiCanDeferredReadyThreadBeScheduledToRescheduleContext @ 0x14029A620 (KiCanDeferredReadyThreadBeScheduledToRescheduleContext.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C7B74 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 * Callees:
 *     KiEvaluateGroupSchedulingPreemption @ 0x14029A850 (KiEvaluateGroupSchedulingPreemption.c)
 */

unsigned __int8 __fastcall KiDoesThreadDominateRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KTHREAD *a2,
        __int64 a3,
        struct _KSCB **a4)
{
  struct _KSCB *v5; // r9
  unsigned __int8 result; // al
  unsigned __int8 AllCompareThreadStateFlags; // r10
  _KTHREAD *CompareThread; // rax
  char Priority; // r11
  struct _KSCB *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    result = KiEvaluateGroupSchedulingPreemption(a1, a2, a3, &v10);
    v5 = v10;
  }
  else
  {
    AllCompareThreadStateFlags = a1->AllCompareThreadStateFlags;
    if ( (AllCompareThreadStateFlags & 1) != 0 )
    {
      result = 1;
    }
    else
    {
      CompareThread = a1->CompareThread;
      Priority = a2->Priority;
      result = Priority > CompareThread->Priority
            || Priority == CompareThread->Priority && ((AllCompareThreadStateFlags & 0x18) != 0 || (a3 & 1) != 0)
            || (AllCompareThreadStateFlags & 0x10) != 0 && Priority;
    }
  }
  if ( a4 )
    *a4 = v5;
  return result;
}
