/*
 * XREFs of PfpMemoryListQuery @ 0x1402622D8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  _QWORD v9[22]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+100h] [rbp+8h] BYREF

  memset_0(v9, 0, sizeof(v9));
  v6 = 0;
  LODWORD(v10) = 0;
  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v6 = -1073741789;
  }
  else
  {
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (__int64)&v10);
    v7 = *(_QWORD *)(a1 + 16);
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v7 = 1;
    *(_DWORD *)(v7 + 4) = 64;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)(v7 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v7 + 24) = v9[8] + v9[7] + v9[6] + v9[5] + v9[9];
    *(_QWORD *)(v7 + 32) = v9[10];
    *(_QWORD *)(v7 + 40) = v9[12] + v9[11];
    *(_QWORD *)(v7 + 48) = v9[0] + v9[1];
    *(_QWORD *)(v7 + 56) = v9[3] + v9[2];
  }
  *a3 = 64;
  return v6;
}
