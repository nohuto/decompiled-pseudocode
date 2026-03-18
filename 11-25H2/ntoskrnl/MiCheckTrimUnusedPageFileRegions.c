/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x1403B3478
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiNumberWsSwapPagefiles @ 0x14047785C (MiNumberWsSwapPagefiles.c)
 */

unsigned __int64 MiCheckTrimUnusedPageFileRegions()
{
  unsigned __int64 result; // rax
  _QWORD *v1; // r10
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 *v4; // r10
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = MiNumberWsSwapPagefiles();
  if ( (_DWORD)result )
  {
    if ( !v1[140] )
    {
      _InterlockedOr(v5, 0);
      v2 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v1[141];
      if ( result >= 0x861C46800LL )
      {
        if ( byte_140E2FE01 )
        {
          result = v2 - 33000000000LL;
          v1[141] = v2 - 33000000000LL;
        }
        else
        {
          result = PsReferencePartitionSafe(v1[23]);
          if ( (_BYTE)result )
          {
            v4[137] = v3;
            v4[139] = (__int64)MiTrimUnusedPageFileRegionsWorker;
            v4[140] = (__int64)v4;
            return ExQueueWorkItemToPartition(v4 + 137, 3, 0xFFFFFFFF, v4[23]);
          }
        }
      }
    }
  }
  return result;
}
