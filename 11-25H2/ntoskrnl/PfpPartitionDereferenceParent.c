/*
 * XREFs of PfpPartitionDereferenceParent @ 0x140301524
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1408B5CCC (PfCheckDeprioritizeFile.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 *     PfpPartitionFindByHandle @ 0x14093AACC (PfpPartitionFindByHandle.c)
 *     PfSnEndTrace @ 0x140989508 (PfSnEndTrace.c)
 *     PfTTraceListAdd @ 0x140A49470 (PfTTraceListAdd.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 */

__int64 __fastcall PfpPartitionDereferenceParent(__int64 a1)
{
  return PsDereferencePartition(a1, 1951426128LL);
}
