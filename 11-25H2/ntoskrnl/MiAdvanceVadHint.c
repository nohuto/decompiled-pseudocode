/*
 * XREFs of MiAdvanceVadHint @ 0x140900910
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r11
  __int64 v8; // r8
  int v9; // edi
  BOOL v10; // ebx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9

  v3 = (a2 >> 4) & 0xFFFFFFFFFFFFLL;
  v4 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  result = (unsigned __int64)(-524288 * qword_140E2F048 + (a3[1] << 19)) >> 16;
  if ( v3 < result )
    return result;
  v7 = result + *a3;
  if ( v4 >= v7 )
    return result;
  v8 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  if ( v4 < result )
    v8 = result;
  v9 = 0;
  v10 = v4 < result;
  if ( v3 >= v7 )
  {
    v3 = v7 - 1;
    v10 = 1;
  }
  v11 = v3 - result;
  v12 = v8 - result;
  v13 = v11 - v12 + 1;
  if ( v11 == v12 && !v10 || v12 == a3[2] )
  {
    result = v11 + 1;
    a3[2] = v11 + 1;
  }
  v14 = a3[4];
  v15 = v11 + 1;
  if ( v14 >= v15 || a3[3] + v14 <= v12 )
  {
    if ( v13 <= 1 )
      return result;
    if ( v10 )
      goto LABEL_16;
  }
  else
  {
    v9 = 1;
  }
  a3[4] = v15;
LABEL_16:
  if ( v13 > 1 && !v10 )
  {
    if ( v9 )
    {
      result = a3[3];
      if ( v13 < result )
        result = v13;
      a3[3] = result;
    }
    else
    {
      a3[3] = v13;
    }
  }
  return result;
}
