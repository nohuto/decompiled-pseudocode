/*
 * XREFs of AcpiPccInitMapSharedMemoryRegion @ 0x1400A0204
 * Callers:
 *     AcpiPccInitType0Subspace @ 0x1400A0370 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400A04A0 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400A05E0 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400A0780 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccInitMapSharedMemoryRegion(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  v11 = 0;
  if ( a1 )
  {
    if ( (int)HalGetMemoryCachingRequirements(a2, a3, &v11) >= 0 )
    {
      v7 = v11;
    }
    else
    {
      v7 = 0;
      v11 = 0;
    }
    v8 = 516LL;
    if ( v7 == 1 )
      v8 = 4LL;
    v9 = MmMapIoSpaceEx(a2, v4, v8);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 120) = a2;
      *(_DWORD *)(a1 + 128) = v4;
      *(_QWORD *)(a1 + 56) = v9;
    }
    else
    {
      v3 = -1073741670;
      *(_DWORD *)(a1 + 816) = 2;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
