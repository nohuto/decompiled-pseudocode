/*
 * XREFs of PfpTraceLogPartitionId @ 0x1405C8560
 * Callers:
 *     PfpPartitionCreate @ 0x1405C823C (PfpPartitionCreate.c)
 *     PfpTraceLogPfPartitionId @ 0x1405C857C (PfpTraceLogPfPartitionId.c)
 *     PfpPartitionFindOrCreate @ 0x14073B3C0 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x14093AACC (PfpPartitionFindByHandle.c)
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
