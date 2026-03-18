/*
 * XREFs of ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x18009CF50
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180207134 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::GetLargestOccluder(__int64 a1, __m128 *a2, char a3, int a4, _OWORD *a5)
{
  int v5; // r11d
  __m128 v8; // xmm1
  __m128 v9; // xmm14
  __m128 v10; // xmm15
  float v11; // xmm14_4
  float v12; // xmm15_4
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int128 v15; // xmm8
  float v16; // xmm10_4
  __int128 *v17; // rax
  float v18; // xmm7_4
  float v19; // xmm2_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm9_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  __int128 v28; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v29; // [rsp+30h] [rbp-C8h] BYREF

  v5 = a4;
  if ( a3 || !*(_BYTE *)(a1 + 1564) )
  {
    v8 = *a2;
    v9 = *a2;
    v10 = *a2;
    v29 = _mm_shuffle_ps(v8, v8, 255);
    LODWORD(v11) = _mm_shuffle_ps(v9, v8, 170).m128_u32[0];
    LODWORD(v12) = _mm_shuffle_ps(v10, v8, 85).m128_u32[0];
  }
  else
  {
    v29 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 1572, a2, &v29);
    v8.m128_i32[0] = v29.m128_i32[0];
    v12 = v29.m128_f32[1];
    v11 = v29.m128_f32[2];
    v29 = (__m128)v29.m128_u32[3];
  }
  v13 = *(_DWORD *)(a1 + 640);
  v14 = 0;
  v15 = 0LL;
  v16 = 0.0;
  v28 = 0LL;
  if ( !v13 )
    return 0;
  v17 = *(__int128 **)(a1 + 616);
  do
  {
    if ( *((_DWORD *)v17 + 4) >= v5 )
      break;
    v18 = *((float *)v17 + 2);
    if ( v18 > *(float *)v17 && *((float *)v17 + 3) > *((float *)v17 + 1) )
    {
      v19 = v8.m128_f32[0];
      v20 = v12;
      v21 = v11;
      if ( *(float *)v17 > v8.m128_f32[0] )
        v19 = *(float *)v17;
      v22 = v19;
      v23 = v19;
      if ( *((float *)v17 + 1) > v12 )
        v20 = *((float *)v17 + 1);
      v24 = v20;
      if ( v11 > v18 )
      {
        v21 = *((float *)v17 + 2);
        v22 = v19;
        v23 = v19;
      }
      v25 = v29.m128_f32[0];
      if ( v29.m128_f32[0] > *((float *)v17 + 3) )
      {
        v22 = v23;
        v24 = v20;
        v25 = *((float *)v17 + 3);
      }
      if ( v21 > v22 && v25 > v24 )
      {
        v26 = (float)(v25 - v20) * (float)(v21 - v19);
        if ( v26 > v16 )
        {
          v15 = *v17;
          v16 = v26;
        }
      }
    }
    ++v14;
    v17 += 3;
  }
  while ( v14 < v13 );
  v28 = v15;
  if ( v16 <= 0.0 )
    return 0;
  if ( a3 || !*(_BYTE *)(a1 + 1564) )
  {
    *a5 = v15;
    return 1;
  }
  else
  {
    COcclusionContext::DeviceRectToPageInPixelsRect(a1, &v28, a5);
    return 1;
  }
}
