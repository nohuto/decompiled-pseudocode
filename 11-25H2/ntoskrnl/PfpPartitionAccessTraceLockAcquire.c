/*
 * XREFs of PfpPartitionAccessTraceLockAcquire @ 0x140B4B814
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405C8110 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14073A35C (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 */

__int64 *__fastcall PfpPartitionAccessTraceLockAcquire(__int64 a1)
{
  return FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 64));
}
