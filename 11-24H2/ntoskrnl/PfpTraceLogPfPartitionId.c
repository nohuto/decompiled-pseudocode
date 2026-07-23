/*
 * XREFs of PfpTraceLogPfPartitionId @ 0x1405CA2BC
 * Callers:
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfDeletePartition @ 0x140745504 (PfDeletePartition.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 * Callees:
 *     PfpTraceLogPartitionId @ 0x1405CA2A0 (PfpTraceLogPartitionId.c)
 */

__int64 __fastcall PfpTraceLogPfPartitionId(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return PfpTraceLogPartitionId(*a1);
  return result;
}
