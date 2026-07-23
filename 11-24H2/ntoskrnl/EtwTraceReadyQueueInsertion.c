/*
 * XREFs of EtwTraceReadyQueueInsertion @ 0x1403C1604
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402D716C (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceReadyQueueInsertion(__int64 a1, int a2, char a3, __int64 *a4)
{
  char v4; // r11
  __int64 v5; // r10
  int v6; // r9d
  int v7; // r8d
  _DWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  char v10; // [rsp+38h] [rbp-38h]
  char v11; // [rsp+39h] [rbp-37h]
  bool v12; // [rsp+3Ah] [rbp-36h]
  char v13; // [rsp+3Bh] [rbp-35h]
  _QWORD v14[3]; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ch] [rbp-14h]

  if ( a4 )
  {
    v4 = *((_BYTE *)a4 + 12);
    v5 = *a4;
    v6 = *((_DWORD *)a4 + 2);
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    v6 = 0;
  }
  v9[0] = *(_DWORD *)(a1 + 1296);
  v10 = a3;
  v7 = 1;
  v13 = 0;
  v12 = v6 != 0;
  v14[0] = v9;
  v9[1] = a2;
  v11 = v4;
  v14[1] = 12LL;
  if ( v6 )
  {
    v14[2] = v5;
    v7 = 2;
    v15 = v6;
    v16 = 0;
  }
  return EtwTraceSiloKernelEvent(
           *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL),
           (unsigned int)v14,
           v7,
           -1610610688,
           1356,
           6295042);
}
