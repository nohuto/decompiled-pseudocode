/*
 * XREFs of KiIdleSchedule @ 0x1402A5920
 * Callers:
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402A5E60 (KiSendHeteroRescheduleIntRequest.c)
 *     KiResumeThreadCycleAccumulation @ 0x1402DBC80 (KiResumeThreadCycleAccumulation.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiIdleSchedule(struct _KPRCB *a1)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  _KTHREAD *IdleThread; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1LL, &v6);
  a1->IdleSchedule = 0;
  if ( a1->NextThread == a1->IdleThread )
    a1->NextThread = 0LL;
  v2 = KiSearchForNewThread(a1);
  if ( v2 )
  {
    KiCaptureTotalCyclesCurrentThread(a1, a1->IdleThread);
    a1->NextThread = 0LL;
    KiUpdatePriorityMatrixForRunningTransition(a1, v2);
    KiReleasePrcbLocksForIsolationUnit(&v6);
    IdleThread = a1->IdleThread;
    if ( (_KTHREAD *)v2 != IdleThread )
      return v2;
    v2 = 0LL;
    LOBYTE(v4) = 1;
    KiResumeThreadCycleAccumulation(a1, IdleThread, v4);
  }
  if ( !KeHeteroSystemVirtual && KeHeteroSystem )
    KiSendHeteroRescheduleIntRequest(a1);
  return v2;
}
