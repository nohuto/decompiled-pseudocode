/*
 * XREFs of KeRemoveQueueApc @ 0x140205700
 * Callers:
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x140333A40 (ExpCancelTimer.c)
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     EtwpCancelPendingApcs @ 0x14048C6E8 (EtwpCancelPendingApcs.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140650A6C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140651964 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x140205750 (KiRemoveQueueApc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rdx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v6 = 0;
  KiAcquireThreadLockRaiseToDpc(v1, &v6);
  v3 = KiRemoveQueueApc(v2);
  LOBYTE(v4) = v6;
  LOBYTE(v2) = v3;
  KiReleaseThreadLockLowerIrql(v1, v4);
  return v2;
}
