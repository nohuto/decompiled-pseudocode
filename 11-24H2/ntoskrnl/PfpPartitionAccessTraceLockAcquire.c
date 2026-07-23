/*
 * XREFs of PfpPartitionAccessTraceLockAcquire @ 0x140B5D7F4
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405C9E50 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 */

char *__fastcall PfpPartitionAccessTraceLockAcquire(__int64 a1)
{
  return FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 64));
}
