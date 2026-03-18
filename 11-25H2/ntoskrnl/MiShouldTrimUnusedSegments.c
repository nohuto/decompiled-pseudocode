/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1403BE244
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404592F0 (MiComputeUnusedSegmentReduction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiShouldTrimUnusedSegments(ULONG *a1)
{
  unsigned int v1; // r9d
  unsigned __int64 v2; // r8

  v1 = 0;
  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 261);
  }
  else
  {
    v2 = qword_140E2C9D8;
    a1 = &MiSystemPartition;
  }
  if ( !v2 )
    return 0LL;
  LOBYTE(v1) = v2 >> 12 > 3 * (*((_QWORD *)a1 + 2451) / 0x64uLL);
  return v1;
}
