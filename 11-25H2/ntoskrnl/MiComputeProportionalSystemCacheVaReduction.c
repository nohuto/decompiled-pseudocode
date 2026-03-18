/*
 * XREFs of MiComputeProportionalSystemCacheVaReduction @ 0x140459BAC
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeProportionalSystemCacheVaReduction(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( !qword_140E38700 )
    return 0LL;
  v1 = 100 * (unsigned __int64)*(unsigned int *)(a1 + 2408) / qword_140E38700;
  return (8 * v1) & -(__int64)(v1 != 0);
}
