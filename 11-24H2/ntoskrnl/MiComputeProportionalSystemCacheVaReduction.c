/*
 * XREFs of MiComputeProportionalSystemCacheVaReduction @ 0x1403EE624
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeProportionalSystemCacheVaReduction(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( !qword_140E38A80 )
    return 0LL;
  v1 = 100 * (unsigned __int64)*(unsigned int *)(a1 + 2408) / qword_140E38A80;
  return (8 * v1) & -(__int64)(v1 != 0);
}
