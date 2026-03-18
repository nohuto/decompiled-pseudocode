/*
 * XREFs of PfTSetTracingPriority @ 0x140B4B6BC
 * Callers:
 *     PfpLogEventRequest @ 0x140AA366C (PfpLogEventRequest.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     PfpPartitionToParent @ 0x1404BDA40 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x140678008 (MmSetAccessLogging.c)
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
