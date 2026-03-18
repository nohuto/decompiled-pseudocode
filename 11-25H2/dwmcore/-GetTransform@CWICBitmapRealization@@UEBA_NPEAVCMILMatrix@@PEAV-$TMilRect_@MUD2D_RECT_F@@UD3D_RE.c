/*
 * XREFs of ?GetTransform@CWICBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020CA30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CWICBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1802124B0 (-GetSize@CWICBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CWICBitmapRealization::GetTransform(CWICBitmapRealization *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  int v6; // [rsp+38h] [rbp+10h]
  int v7; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v4 = *(_BYTE *)(a2 + 65) & 0xE9;
  *(_BYTE *)(a2 + 64) = -86;
  *(_BYTE *)(a2 + 65) = v4 | 0x29;
  if ( a3 )
  {
    CWICBitmapRealization::GetSize(a1);
    *(_QWORD *)a3 = 0LL;
    *(float *)(a3 + 8) = (float)v6;
    *(float *)(a3 + 12) = (float)v7;
  }
  return 0;
}
