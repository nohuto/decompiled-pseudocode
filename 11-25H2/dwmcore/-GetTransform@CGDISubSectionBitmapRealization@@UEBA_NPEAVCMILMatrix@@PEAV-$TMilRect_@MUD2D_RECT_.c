/*
 * XREFs of ?GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802E0780
 * Callers:
 *     ?GetTransform@CGDISubSectionBitmapRealization@@WBDI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802E0950 (-GetTransform@CGDISubSectionBitmapRealization@@WBDI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 */

char __fastcall CGDISubSectionBitmapRealization::GetTransform(_DWORD *a1, __int64 a2, float *a3)
{
  int v3; // r10d
  bool v4; // zf
  int v6; // ebp
  _DWORD *v7; // r11
  int v8; // ecx
  char v9; // r8
  int v10; // r9d
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  float v14; // xmm1_4
  __m128i v15; // xmm0
  char v16; // al
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __int128 v21; // [rsp+20h] [rbp-28h]

  v3 = a1[84];
  v4 = v3 == a1[88];
  v21 = *((_OWORD *)a1 + 21);
  v6 = v21;
  v7 = a1;
  v8 = a1[80];
  v9 = 0;
  if ( v4 )
    v6 = v8 + v21;
  v10 = v7[85];
  v11 = DWORD1(v21);
  if ( v10 == v7[89] )
    v11 = v7[82] + DWORD1(v21);
  v12 = DWORD2(v21);
  if ( v7[86] == v7[90] )
    v12 = DWORD2(v21) - v7[81];
  v13 = HIDWORD(v21);
  if ( v7[87] == v7[91] )
    v13 = HIDWORD(v21) - v7[83];
  if ( v12 < v6 )
    v12 = v6;
  if ( v13 < v11 )
    v13 = v11;
  v14 = (float)v3 - (float)v8;
  v15 = _mm_cvtsi32_si128(v7[82]);
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
  v16 = *(_BYTE *)(a2 + 65) & 0xE9;
  *(_BYTE *)(a2 + 64) = -86;
  *(_BYTE *)(a2 + 65) = v16 | 0x29;
  v17 = (float)v10 - _mm_cvtepi32_ps(v15).m128_f32[0];
  if ( v14 != 0.0 || v17 != 0.0 )
  {
    CMILMatrix::Translate((CMILMatrix *)a2, v14, v17);
    v9 = 1;
  }
  if ( a3 )
  {
    v18 = (float)v6 - (float)(int)v7[84];
    *a3 = v18;
    v19 = (float)v11 - (float)(int)v7[85];
    a3[1] = v19;
    a3[2] = (float)(int)(v12 - v6) + v18;
    a3[3] = (float)(int)(v13 - v11) + v19;
  }
  return v9;
}
