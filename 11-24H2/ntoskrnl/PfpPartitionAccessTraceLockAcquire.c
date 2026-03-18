/*
 * XREFs of PfpPartitionAccessTraceLockAcquire @ 0x140B5B784
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405CC6E0 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14074637C (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 */

__int64 __fastcall PfpPartitionAccessTraceLockAcquire(__int64 a1)
{
  return FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 64));
}
