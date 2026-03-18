/*
 * XREFs of EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354
 * Callers:
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceXSchedulerPriorityKickSend(int a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v6 = 0;
  v3[0] = a1;
  v3[1] = a2;
  v4 = v3;
  v5 = 8;
  return EtwTraceKernelEvent((int)&v4, 1, 0xA0000020, 3957, 5245442);
}
