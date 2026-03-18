/*
 * XREFs of KiIdleSchedule @ 0x140296C40
 * Callers:
 *     KiIdleLoop @ 0x1406ABC30 (KiIdleLoop.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140297180 (KiSendHeteroRescheduleIntRequest.c)
 *     KiResumeThreadCycleAccumulation @ 0x14030CC20 (KiResumeThreadCycleAccumulation.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiIdleSchedule(struct _KPRCB *a1)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  _KTHREAD *IdleThread; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, &v6);
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
