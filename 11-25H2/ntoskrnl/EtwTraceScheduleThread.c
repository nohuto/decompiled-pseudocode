/*
 * XREFs of EtwTraceScheduleThread @ 0x140313CB4
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceScheduleThread(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  int v4; // r9d
  char v5; // r8
  unsigned int v6; // r8d
  _DWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  char v8; // [rsp+38h] [rbp-38h]
  __int16 v9; // [rsp+39h] [rbp-37h]
  char v10; // [rsp+3Bh] [rbp-35h]
  _QWORD v11[3]; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]

  if ( a3 )
  {
    v3 = *a3;
    v4 = *((_DWORD *)a3 + 2);
    v5 = *((_BYTE *)a3 + 12);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v7[0] = *(_DWORD *)(a1 + 1296);
  v7[1] = *(_DWORD *)(a2 + 36);
  v8 = v5;
  v6 = 1;
  v10 = 0;
  v9 = v4 != 0;
  v11[0] = v7;
  v11[1] = 12LL;
  if ( v4 )
  {
    v11[2] = v3;
    v6 = 2;
    v12 = v4;
    v13 = 0;
  }
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL),
    (struct _KTHREAD *)v11,
    v6,
    0xA0000400,
    0x54Bu,
    0x600E02u);
}
