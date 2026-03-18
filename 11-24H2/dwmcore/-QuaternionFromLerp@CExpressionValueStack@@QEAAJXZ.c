/*
 * XREFs of ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x1801F2FBC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromLerp(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rdi
  const __m128i *v3; // rsi
  struct CExpressionValue *v4; // rax
  __m128 v5; // xmm9
  __m128 v6; // xmm5
  float v7; // xmm11_4
  float v8; // xmm12_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  unsigned int v25; // ebx
  unsigned int v27; // [rsp+20h] [rbp-88h]

  if ( *((_DWORD *)this + 2) < 3u )
  {
    v27 = 6735;
LABEL_12:
    v25 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v27,
      0LL);
    return v25;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -2);
  v3 = (const __m128i *)CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v2 + 18) != 71 )
  {
    v27 = 6742;
    goto LABEL_12;
  }
  if ( v3[4].m128i_i32[2] != 71 )
  {
    v27 = 6743;
    goto LABEL_12;
  }
  if ( *((_DWORD *)v4 + 18) != 18 )
  {
    v27 = 6744;
    goto LABEL_12;
  }
  v5 = (__m128)_mm_loadu_si128(v3);
  v6 = (__m128)_mm_loadu_si128((const __m128i *)v2);
  v7 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v8 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
  v10 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
  v11 = v10 * *(float *)v4;
  v12 = 1.0 - *(float *)v4;
  v13 = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
  v14 = (float)((float)(v7 * v8) + (float)(v5.m128_f32[0] * v6.m128_f32[0])) + (float)(v10 * v9);
  v15 = v9 * v12;
  v16 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
  v17 = v16 * *(float *)v4;
  v18 = v16 * v13;
  v19 = v13 * v12;
  if ( (float)(v14 + v18) < 0.0 )
  {
    v20 = v15 - v11;
    v21 = v19 - v17;
    v22 = (float)(v12 * v6.m128_f32[0]) - (float)(*(float *)v4 * v5.m128_f32[0]);
    v23 = (float)(v12 * v8) - (float)(*(float *)v4 * v7);
  }
  else
  {
    v20 = v15 + v11;
    v21 = v19 + v17;
    v22 = (float)(*(float *)v4 * v5.m128_f32[0]) + (float)(v12 * v6.m128_f32[0]);
    v23 = (float)(*(float *)v4 * v7) + (float)(v12 * v8);
  }
  v24 = 1.0
      / sqrtf_0((float)((float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v20 * v20)) + (float)(v21 * v21));
  *((_DWORD *)v2 + 18) = 71;
  *(float *)v2 = v22 * v24;
  *((float *)v2 + 1) = v23 * v24;
  *((float *)v2 + 2) = v20 * v24;
  *((float *)v2 + 3) = v21 * v24;
  *((_DWORD *)this + 2) -= 2;
  return 0;
}
