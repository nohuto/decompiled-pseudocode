/*
 * XREFs of PspGetMemoryPartitionContext @ 0x1408D8120
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     PspGetMemoryPartitionImplicit @ 0x1408D81A0 (PspGetMemoryPartitionImplicit.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408D82A0 (PspGetMemoryPartitionFromJobList.c)
 */

__int64 __fastcall PspGetMemoryPartitionContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int MemoryPartitionImplicit; // r10d

  MemoryPartitionImplicit = 0;
  *a5 = 0LL;
  if ( !a1
    || !*(_QWORD *)(a1 + 672)
    || (MemoryPartitionImplicit = PspGetMemoryPartitionImplicit(*(_QWORD *)(a1 + 672), a2, a5),
        MemoryPartitionImplicit >= 0) )
  {
    if ( !*a5 && a4 )
      return (unsigned int)PspGetMemoryPartitionFromJobList(a3, a4, a5);
  }
  return (unsigned int)MemoryPartitionImplicit;
}
