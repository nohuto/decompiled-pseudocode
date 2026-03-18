/*
 * XREFs of PfpPartitionDereferenceParent @ 0x140274CCC
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1408E5C40 (PfCheckDeprioritizeFile.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     PfpPartitionFindByHandle @ 0x140933E78 (PfpPartitionFindByHandle.c)
 *     PfTTraceListAdd @ 0x1409506E0 (PfTTraceListAdd.c)
 *     PfSnEndTrace @ 0x140971A58 (PfSnEndTrace.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 */

__int64 __fastcall PfpPartitionDereferenceParent(__int64 a1)
{
  return PsDereferencePartition(a1);
}
