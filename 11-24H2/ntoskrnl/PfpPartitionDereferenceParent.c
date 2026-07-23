/*
 * XREFs of PfpPartitionDereferenceParent @ 0x14022A25C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     PfTTraceListAdd @ 0x140972A00 (PfTTraceListAdd.c)
 *     PfCheckDeprioritizeFile @ 0x1409DCA6C (PfCheckDeprioritizeFile.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 */

__int64 __fastcall PfpPartitionDereferenceParent(__int64 a1)
{
  return PsDereferencePartition(a1, 1951426128LL);
}
