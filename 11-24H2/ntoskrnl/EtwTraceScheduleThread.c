/*
 * XREFs of EtwTraceScheduleThread @ 0x1402A6768
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceScheduleThread(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  int v4; // r9d
  char v5; // r8
  int v6; // r8d
  _DWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  char v9; // [rsp+38h] [rbp-38h]
  __int16 v10; // [rsp+39h] [rbp-37h]
  char v11; // [rsp+3Bh] [rbp-35h]
  _QWORD v12[3]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

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
  v8[0] = *(_DWORD *)(a1 + 1296);
  v8[1] = *(_DWORD *)(a2 + 36);
  v9 = v5;
  v6 = 1;
  v11 = 0;
  v10 = v4 != 0;
  v12[0] = v8;
  v12[1] = 12LL;
  if ( v4 )
  {
    v12[2] = v3;
    v6 = 2;
    v13 = v4;
    v14 = 0;
  }
  return EtwTraceSiloKernelEvent(
           *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL),
           (unsigned int)v12,
           v6,
           -1610611712,
           1355,
           6295042);
}
