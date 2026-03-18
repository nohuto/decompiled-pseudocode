/*
 * XREFs of ?PixelAlignOccluder@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x1800D3BB0
 * Callers:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18027AD9C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800D3E10 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800D3E60 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int *__fastcall PixelAlignOccluder(int *a1, unsigned int *a2, double a3)
{
  __m128i v3; // xmm3
  int v6; // ecx
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128i v9; // xmm3
  int v10; // ecx
  __m128 v11; // xmm2
  __m128 v12; // xmm2
  __m128i v13; // xmm3
  int v14; // ecx
  __m128 v15; // xmm2
  __m128 v16; // xmm2
  __m128i v17; // xmm3
  int v18; // ecx
  __m128 v20; // rt1
  float v21; // [rsp+60h] [rbp+8h]
  float v22; // [rsp+60h] [rbp+8h]
  float v23; // [rsp+60h] [rbp+8h]
  float v24; // [rsp+60h] [rbp+8h]

  v3 = (__m128i)*a2;
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    v6 = (int)*(float *)v3.m128i_i32
       - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v21 = *(float *)v3.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v21) << 10) >> 11;
  }
  v7 = (__m128)*a2;
  v7.m128_f32[0] = *(float *)v3.m128i_i32 - (float)v6;
  v8 = _mm_and_ps(v7, (__m128)(unsigned int)_xmm);
  if ( v8.m128_f32[0] > 0.00390625 )
    v6 = CFloatFPU::CeilingSat(*(float *)v3.m128i_i32);
  v9 = (__m128i)a2[1];
  *a1 = v6;
  if ( (_mm_cvtsi128_si32(v9) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v8.m128_f32[0] = (float)(int)*(float *)v9.m128i_i32 - *(float *)v9.m128i_i32;
    v10 = (int)*(float *)v9.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v8, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v22 = *(float *)v9.m128i_i32 + 6291456.25;
    v10 = (int)(LODWORD(v22) << 10) >> 11;
  }
  v11 = (__m128)v9;
  v11.m128_f32[0] = *(float *)v9.m128i_i32 - (float)v10;
  v12 = _mm_and_ps(v11, (__m128)(unsigned int)_xmm);
  if ( v12.m128_f32[0] > 0.00390625 )
    v10 = CFloatFPU::CeilingSat(*(float *)v9.m128i_i32);
  v13 = (__m128i)a2[2];
  a1[1] = v10;
  if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v12.m128_f32[0] = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
    v14 = (int)*(float *)v13.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v12, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v23 = *(float *)v13.m128i_i32 + 6291456.25;
    v14 = (int)(LODWORD(v23) << 10) >> 11;
  }
  v15 = (__m128)v13;
  v15.m128_f32[0] = *(float *)v13.m128i_i32 - (float)v14;
  v16 = _mm_and_ps(v15, (__m128)(unsigned int)_xmm);
  if ( v16.m128_f32[0] > 0.00390625 )
    v14 = CFloatFPU::FloorSat(*(float *)v13.m128i_i32);
  v17 = (__m128i)a2[3];
  a1[2] = v14;
  if ( (_mm_cvtsi128_si32(v17) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v16.m128_f32[0] = (float)(int)*(float *)v17.m128i_i32 - *(float *)v17.m128i_i32;
    v20.m128_f32[0] = FLOAT_N0_5;
    v18 = (int)*(float *)v17.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v16, v20));
  }
  else
  {
    v24 = *(float *)v17.m128i_i32 + 6291456.25;
    v18 = (int)(LODWORD(v24) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v17.m128i_i32 - (float)v18) & _xmm) <= 0.00390625 )
    a1[3] = v18;
  else
    a1[3] = CFloatFPU::FloorSat(*(float *)v17.m128i_i32);
  return a1;
}
