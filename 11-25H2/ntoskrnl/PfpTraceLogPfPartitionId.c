/*
 * XREFs of PfpTraceLogPfPartitionId @ 0x1405C857C
 * Callers:
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PfDeletePartition @ 0x14073B1F4 (PfDeletePartition.c)
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 * Callees:
 *     PfpTraceLogPartitionId @ 0x1405C8560 (PfpTraceLogPartitionId.c)
 */

__int64 __fastcall PfpTraceLogPfPartitionId(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return PfpTraceLogPartitionId(*a1);
  return result;
}
