/*
 * XREFs of PfpPartitionAccessTraceLockRelease @ 0x140B5B7A0
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405CC6E0 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14074637C (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 * Callees:
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 */

void __fastcall PfpPartitionAccessTraceLockRelease(__int64 a1)
{
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 64));
}
