/*
 * XREFs of PfpTraceLogPartitionId @ 0x1405CA2A0
 * Callers:
 *     PfpPartitionCreate @ 0x1405C9F7C (PfpPartitionCreate.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CA2BC (PfpTraceLogPfPartitionId.c)
 *     PfpPartitionFindOrCreate @ 0x1407456D0 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
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
