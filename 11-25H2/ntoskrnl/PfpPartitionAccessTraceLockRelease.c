/*
 * XREFs of PfpPartitionAccessTraceLockRelease @ 0x140B4B830
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405C8110 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14073A35C (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 * Callees:
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 */

void __fastcall PfpPartitionAccessTraceLockRelease(__int64 a1)
{
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 64));
}
