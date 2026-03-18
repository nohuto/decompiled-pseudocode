/*
 * XREFs of PfpTraceLogPartitionId @ 0x1405CCB30
 * Callers:
 *     PfpPartitionCreate @ 0x1405CC80C (PfpPartitionCreate.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CCB4C (PfpTraceLogPfPartitionId.c)
 *     PfpPartitionFindOrCreate @ 0x1407473E0 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x140933E78 (PfpPartitionFindByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpTraceLogPartitionId(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 120) + 464LL);
  return result;
}
