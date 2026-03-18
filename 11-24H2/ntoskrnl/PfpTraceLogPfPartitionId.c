/*
 * XREFs of PfpTraceLogPfPartitionId @ 0x1405CCB4C
 * Callers:
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PfDeletePartition @ 0x140747214 (PfDeletePartition.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 * Callees:
 *     PfpTraceLogPartitionId @ 0x1405CCB30 (PfpTraceLogPartitionId.c)
 */

__int64 __fastcall PfpTraceLogPfPartitionId(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return PfpTraceLogPartitionId(*a1);
  return result;
}
