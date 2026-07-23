/*
 * XREFs of RtlpConstructIndirectRelocationFixup @ 0x14043B0B0
 * Callers:
 *     RtlApplyIndirectRelocationToPage @ 0x14043AFDC (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplyIndirectRelocationToImage @ 0x1406A3C78 (RtlApplyIndirectRelocationToImage.c)
 * Callees:
 *     RtlSizeOfRetpolineIndirectFixup @ 0x14043B724 (RtlSizeOfRetpolineIndirectFixup.c)
 */

__int16 __fastcall RtlpConstructIndirectRelocationFixup(
        int a1,
        _DWORD *a2,
        __int64 a3,
        __int16 *a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v10; // rax
  __int16 v11; // r8
  int v12; // edx
  int v13; // edx
  char v14; // cl
  __int16 v15; // r11
  __int16 result; // ax
  _WORD *v17; // r10
  unsigned int v18; // r9d
  __int16 v19; // cx
  __int64 v20; // r8
  __int16 v21; // ax
  int v22; // r8d

  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)(a6 + 8) = 0;
  *(_WORD *)(a6 + 12) = 0;
  v10 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v10 = 0x9090909090909090uLL;
  *(_QWORD *)(a6 + 2) = v10;
  *(_DWORD *)(a6 + 10) = v10;
  v11 = *a4;
  if ( a5 )
  {
    if ( (v11 & 0x4000) != 0 )
      v12 = *(_DWORD *)(a3 + 64);
    else
      v12 = *(_DWORD *)(a3 + 68);
    v13 = a2[12] + v12 - (a1 + 5);
    *(_BYTE *)(a6 + 2) = ((v11 & 0x1000) == 0) | 0xE8;
    *(_DWORD *)(a6 + 3) = v13;
  }
  else
  {
    v18 = 0;
    if ( (v11 & 0x2000) != 0 )
    {
      *(_BYTE *)(a6 + 2) = 72;
      v18 = 1;
    }
    v19 = *a4;
    v20 = v18 + 1;
    *(_BYTE *)(v18 + a6 + 2) = -1;
    v21 = *a4 & 0x1000;
    if ( (v19 & 0x4000) != 0 )
    {
      *(_BYTE *)(v20 + a6 + 2) = v21 != 0 ? 21 : 37;
      v22 = *a2 - (v18 + a1 + 6);
      *(_BYTE *)(v18 + 2 + a6 + 2) = v22;
      *(_BYTE *)(v18 + 3 + a6 + 2) = BYTE1(v22);
      *(_BYTE *)(v18 + 4 + a6 + 2) = BYTE2(v22);
      *(_BYTE *)(v18 + 5 + a6 + 2) = HIBYTE(v22);
    }
    else
    {
      *(_BYTE *)(v20 + a6 + 2) = v21 != 0 ? -48 : -32;
      if ( (*a4 & 0x1000) != 0 )
      {
        *(_BYTE *)(v18 + 2 + a6 + 2) = 15;
        *(_BYTE *)(v18 + 3 + a6 + 2) = 31;
        *(_BYTE *)(v18 + 4 + a6 + 2) = 0;
      }
    }
  }
  v14 = RtlSizeOfRetpolineIndirectFixup(a4);
  result = (v15 << v14) - v15;
  *v17 = result;
  return result;
}
