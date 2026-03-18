/*
 * XREFs of ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028EF4
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180028A60 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
int *__fastcall CTreeEffectLayer::RoundOffLayerSize(int *a1, float *a2, double a3)
{
  __m128i v3; // xmm4
  int v5; // ecx
  __m128i v6; // xmm3
  int v7; // ecx
  __m128 v8; // xmm0
  int v9; // ecx
  __m128 v10; // xmm1
  int v11; // eax
  int *result; // rax
  __m128 v13; // rt1
  float v14; // [rsp+8h] [rbp+8h]
  float v15; // [rsp+8h] [rbp+8h]

  v3 = (__m128i)*(unsigned int *)a2;
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v5 = (int)*(float *)v3.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v14 = *(float *)v3.m128i_i32 + 6291456.25;
    v5 = (int)(LODWORD(v14) << 10) >> 11;
  }
  v6 = (__m128i)*((unsigned int *)a2 + 1);
  *a1 = v5;
  if ( (_mm_cvtsi128_si32(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v6.m128i_i32 - *(float *)v6.m128i_i32;
    v13.m128_f32[0] = FLOAT_N0_5;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v13);
    v7 = (int)*(float *)v6.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v15 = *(float *)v6.m128i_i32 + 6291456.25;
    v7 = (int)(LODWORD(v15) << 10) >> 11;
  }
  v8 = (__m128)*((unsigned int *)a2 + 2);
  v8.m128_f32[0] = v8.m128_f32[0] - *(float *)v3.m128i_i32;
  a1[1] = v7;
  v9 = (int)v8.m128_f32[0];
  v10.m128_i32[0] = v8.m128_i32[0];
  v8.m128_f32[0] = (float)(int)v8.m128_f32[0];
  v11 = _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v8, v10));
  v8.m128_f32[0] = a2[3] - *(float *)v6.m128i_i32;
  a1[2] = v9 - v11;
  *(float *)&a3 = (float)(int)v8.m128_f32[0];
  result = a1;
  a1[3] = (int)v8.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(*(__m128 *)&a3, v8));
  return result;
}
