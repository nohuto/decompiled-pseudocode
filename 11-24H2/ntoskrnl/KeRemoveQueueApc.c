/*
 * XREFs of KeRemoveQueueApc @ 0x14032CCE0
 * Callers:
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402BE0F0 (ExpCancelTimer.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpCancelPendingApcs @ 0x140487408 (EtwpCancelPendingApcs.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14064F0A4 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140650064 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiRemoveQueueApc @ 0x14032CD30 (KiRemoveQueueApc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v4 = 0;
  KiAcquireThreadLockRaiseToDpc(v1, &v4);
  LOBYTE(v2) = KiRemoveQueueApc(v2);
  KiReleaseThreadLockLowerIrql(v1);
  return v2;
}
