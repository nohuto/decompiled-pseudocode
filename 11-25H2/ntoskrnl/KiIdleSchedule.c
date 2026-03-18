/*
 * XREFs of KiIdleSchedule @ 0x140330B40
 * Callers:
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiResumeThreadCycleAccumulation @ 0x140313A04 (KiResumeThreadCycleAccumulation.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140330C10 (KiSendHeteroRescheduleIntRequest.c)
 */

_KTHREAD *__fastcall KiIdleSchedule(__int64 a1)
{
  __int64 v2; // rdx
  _KTHREAD *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a1, 1, (unsigned __int64 *)&v9);
  *(_BYTE *)(a1 + 14523) = 0;
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 16) = 0LL;
  v3 = KiSearchForNewThread((struct _KPRCB *)a1, 1, &v9);
  if ( v3 )
  {
    KiCaptureTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 24), v4, v5);
    *(_QWORD *)(a1 + 16) = 0LL;
    KiUpdatePriorityMatrixForRunningTransition((_QWORD *)a1, (__int64)v3);
    KiReleasePrcbLocksForIsolationUnit(&v9);
    v8 = *(_QWORD *)(a1 + 24);
    if ( v3 != (_KTHREAD *)v8 )
      return v3;
    v3 = 0LL;
    LOBYTE(v7) = 1;
    KiResumeThreadCycleAccumulation(a1, v8, v7);
  }
  if ( !KeHeteroSystemVirtual && KeHeteroSystem )
    KiSendHeteroRescheduleIntRequest(a1, v2, v4);
  return v3;
}
