/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x14035468C
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     MiNumberWsSwapPagefiles @ 0x140352DB4 (MiNumberWsSwapPagefiles.c)
 */

char __fastcall MiCheckTrimUnusedPageFileRegions(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 *v2; // r10
  __int64 v3; // r8
  __int64 *v4; // r10
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  LODWORD(v1) = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)v1 )
  {
    if ( !v2[140] )
    {
      _InterlockedOr(v6, 0);
      v1 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v2[141];
      if ( v1 >= 0x861C46800LL )
      {
        if ( byte_140E30181 )
        {
          LOBYTE(v1) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
          v2[141] = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - 33000000000LL;
        }
        else
        {
          LOBYTE(v1) = PsReferencePartitionSafe(v2[23]);
          if ( (_BYTE)v1 )
          {
            v4[137] = v3;
            v4[139] = (__int64)MiTrimUnusedPageFileRegionsWorker;
            v4[140] = (__int64)v4;
            LOBYTE(v1) = ExQueueWorkItemToPartition((ULONG_PTR)(v4 + 137), 3, 0xFFFFFFFF, v4[23]);
          }
        }
      }
    }
  }
  return v1;
}
