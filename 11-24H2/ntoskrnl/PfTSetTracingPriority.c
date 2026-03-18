/*
 * XREFs of PfTSetTracingPriority @ 0x140B5B62C
 * Callers:
 *     PfpLogEventRequest @ 0x140AA86F4 (PfpLogEventRequest.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     PfpPartitionToParent @ 0x1404BCA40 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x140683808 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  int v5; // edx

  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 80));
  v4 = (_QWORD *)PfpPartitionToParent(a1);
  MmSetAccessLogging(v4, v5, a2);
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 80));
}
