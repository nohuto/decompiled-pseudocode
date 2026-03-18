/*
 * XREFs of KeRemoveQueueApc @ 0x140203580
 * Callers:
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402EC9C0 (ExpCancelTimer.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 *     EtwpCancelPendingApcs @ 0x14048CB68 (EtwpCancelPendingApcs.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140644A5C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1406459B8 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x140203500 (KiRemoveQueueApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
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
