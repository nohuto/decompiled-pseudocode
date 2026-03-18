/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801FC760
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801FC988 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801FCB4C (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  __m128i *v2; // r14
  const __m128i *v3; // rsi
  struct CExpressionValue *v4; // rax
  ColorSpaceHelpers *v5; // rcx
  float v6; // xmm7_4
  unsigned int v7; // ebx
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  ColorSpaceHelpers *v14; // rcx
  __m128i v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-60h]
  float *v18; // [rsp+40h] [rbp-40h] BYREF
  float v19; // [rsp+48h] [rbp-38h] BYREF
  float v20; // [rsp+4Ch] [rbp-34h] BYREF
  __m128i v21; // [rsp+50h] [rbp-30h] BYREF

  if ( *((_DWORD *)this + 2) < 3u )
  {
    v17 = 2909;
    goto LABEL_8;
  }
  v2 = (__m128i *)CExpressionValueStack::PeekStackValue(this, -2);
  v3 = (const __m128i *)CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  v5 = (ColorSpaceHelpers *)v2[4].m128i_u32[2];
  v6 = *(float *)v4;
  if ( *((_DWORD *)v4 + 18) != 18 || (v7 = 0, (_DWORD)v5 != v3[4].m128i_i32[2]) )
  {
    v17 = 2935;
LABEL_8:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17,
      0LL);
    return v7;
  }
  if ( (_DWORD)v5 != 70 )
  {
    v17 = 2987;
    goto LABEL_8;
  }
  v8 = (__m128)_mm_loadu_si128(v2);
  v9 = (__m128)_mm_loadu_si128(v3);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v5,
    _mm_shuffle_ps(v8, v8, 85).m128_f32[0],
    _mm_shuffle_ps(v8, v8, 170).m128_f32[0],
    _mm_shuffle_ps(v8, v8, 255).m128_f32[0],
    COERCE_FLOAT(&v18),
    (float *)&v18 + 1,
    &v19,
    &v20,
    v18);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v10,
    _mm_shuffle_ps(v9, v9, 85).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 170).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 255).m128_f32[0],
    COERCE_FLOAT(&v21),
    (float *)&v21.m128i_i32[1],
    (float *)&v21.m128i_i32[2],
    (float *)&v21.m128i_i32[3],
    v18);
  v11 = *(float *)&v21.m128i_i32[1] - *((float *)&v18 + 1);
  v12 = *(float *)&v21.m128i_i32[2] - v19;
  v13 = *(float *)&v21.m128i_i32[3] - v20;
  v21 = 0LL;
  v8.m128_f32[0] = fmaxf(0.0, fminf(v6, 1.0));
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v14,
    (float)(v11 * v8.m128_f32[0]) + *((float *)&v18 + 1),
    (float)(v12 * v8.m128_f32[0]) + v19,
    (float)(v13 * v8.m128_f32[0]) + v20,
    COERCE_FLOAT(&v21),
    (float *)&v21.m128i_i32[1],
    (float *)&v21.m128i_i32[2],
    (float *)&v21.m128i_i32[3],
    v18);
  v15 = v21;
  v2[4].m128i_i32[2] = 70;
  *v2 = v15;
  *((_DWORD *)this + 2) -= 2;
  return v7;
}
