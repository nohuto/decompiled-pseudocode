/*
 * XREFs of MiDereferenceSubsectionProtos @ 0x140A1D2D4
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x1403E0D5C (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x1404A38CC (MiUpdatePerSessionProto.c)
 */

__int64 __fastcall MiDereferenceSubsectionProtos(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v6; // rcx
  __int64 v7; // rbx

  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x20000) != 0 )
  {
    result = (__int64)MiLocateSessionProtosInSubsection(a1, a2);
    v7 = result;
    if ( (*(_DWORD *)(result + 80))-- == 1 )
    {
      MiUpdatePerSessionProto(*v6, a1, result, 0);
      result = *a3;
      *(_DWORD *)(v7 + 80) = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(v7 + 64) = a1;
      *(_QWORD *)v7 = result;
      *a3 = v7;
    }
  }
  return result;
}
