/*
 * XREFs of PfpPartitionAccessTraceLockRelease @ 0x140B5D810
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405C9E50 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 */

void __fastcall PfpPartitionAccessTraceLockRelease(__int64 a1)
{
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 64));
}
