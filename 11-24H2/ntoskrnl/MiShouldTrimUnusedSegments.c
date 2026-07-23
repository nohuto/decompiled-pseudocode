/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x14048D3EC
 * Callers:
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 *     MiComputeUnusedSegmentReduction @ 0x1403EDBDC (MiComputeUnusedSegmentReduction.c)
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
    v2 = qword_140E2CD58;
    a1 = &MiSystemPartition;
  }
  if ( !v2 )
    return 0LL;
  LOBYTE(v1) = v2 >> 12 > 3 * (*((_QWORD *)a1 + 2451) / 0x64uLL);
  return v1;
}
