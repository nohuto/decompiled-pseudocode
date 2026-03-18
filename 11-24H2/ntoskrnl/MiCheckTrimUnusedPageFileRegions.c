/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x1402D3414
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     MiNumberWsSwapPagefiles @ 0x1402D1B3C (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 */

unsigned __int64 __fastcall MiCheckTrimUnusedPageFileRegions(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 *v5; // r10
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  result = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)result )
  {
    if ( !v2[140] )
    {
      _InterlockedOr(v6, 0);
      v3 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v2[141];
      if ( result >= 0x861C46800LL )
      {
        if ( byte_140E30041 )
        {
          result = v3 - 33000000000LL;
          v2[141] = v3 - 33000000000LL;
        }
        else
        {
          result = PsReferencePartitionSafe(v2[23]);
          if ( (_BYTE)result )
          {
            v5[137] = v4;
            v5[139] = (__int64)MiTrimUnusedPageFileRegionsWorker;
            v5[140] = (__int64)v5;
            return ExQueueWorkItemToPartition((ULONG_PTR)(v5 + 137), 3, 0xFFFFFFFF, v5[23]);
          }
        }
      }
    }
  }
  return result;
}
