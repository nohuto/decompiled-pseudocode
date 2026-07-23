/*
 * XREFs of MiAdvanceVadHint @ 0x140919160
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  BOOL v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx

  v3 = (a2 >> 4) & 0xFFFFFFFFFFFFLL;
  v5 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  result = (unsigned __int64)(-524288 * qword_140E2F3C8 + (a3[1] << 19)) >> 16;
  if ( v3 < result )
    return result;
  v7 = result + *a3;
  if ( v5 >= v7 )
    return result;
  v8 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  if ( v5 < result )
    v8 = result;
  v9 = 0;
  v10 = v5 < result;
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
