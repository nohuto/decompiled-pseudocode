/*
 * XREFs of MiInitializeBestCandidatesContext @ 0x1403973B0
 * Callers:
 *     MiAllocateSkipPagesForMdl @ 0x1403968B8 (MiAllocateSkipPagesForMdl.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

void __fastcall MiInitializeBestCandidatesContext(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int v5; // edi
  __int64 Pool; // rcx
  __int64 v10; // rax

  *a1 = 0LL;
  v5 = a4;
  if ( a5 == a3 && (a3 == 16 || a3 == 512 || a3 == 0x40000) )
  {
    Pool = 0LL;
    if ( a4 > 8 )
    {
      v10 = 1024LL;
      if ( a4 <= 0x400 )
        v10 = a4;
      v5 = v10;
      Pool = MiAllocatePool(0x42uLL, 8 * v10 + 24, 1665952077);
      *a1 = Pool;
    }
    if ( !Pool )
    {
      v5 = 8;
      *a1 = a2;
      Pool = a2;
    }
    *(_OWORD *)Pool = 0LL;
    *(_QWORD *)(Pool + 16) = 0LL;
    *(_DWORD *)Pool = v5;
    *(_QWORD *)(Pool + 16) = qword_140E2DD20 & ~(a3 - 1);
  }
}
