/*
 * XREFs of PfTSetTracingPriority @ 0x140B5D69C
 * Callers:
 *     PfpLogEventRequest @ 0x140AA3778 (PfpLogEventRequest.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x1406849B8 (MmSetAccessLogging.c)
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
