/*
 * XREFs of ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x18025962C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::DistanceSquared(CExpressionValueStack *this)
{
  unsigned int v2; // esi
  __m128i *v3; // rbx
  const __m128i *v4; // rax
  __int32 v5; // ecx
  __m128 v6; // xmm4
  __m128 v7; // xmm2
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm1_4
  unsigned int v15; // [rsp+20h] [rbp-38h]

  if ( *((_DWORD *)this + 2) >= 2u )
  {
    v3 = (__m128i *)CExpressionValueStack::PeekStackValue(this, -1);
    v4 = (const __m128i *)CExpressionValueStack::PeekStackValue(this, 0);
    v5 = v3[4].m128i_i32[2];
    v2 = 0;
    if ( v5 == v4[4].m128i_i32[2] )
    {
      switch ( v5 )
      {
        case 18:
          v12 = (float)(*(float *)v3->m128i_i32 - *(float *)v4->m128i_i32)
              * (float)(*(float *)v3->m128i_i32 - *(float *)v4->m128i_i32);
          break;
        case 35:
          v12 = (float)((float)(*(float *)&v3->m128i_i32[1] - *(float *)&v4->m128i_i32[1])
                      * (float)(*(float *)&v3->m128i_i32[1] - *(float *)&v4->m128i_i32[1]))
              + (float)((float)(*(float *)v3->m128i_i32 - *(float *)v4->m128i_i32)
                      * (float)(*(float *)v3->m128i_i32 - *(float *)v4->m128i_i32));
          break;
        case 52:
          v13 = *(float *)&v3->m128i_i32[2] - *(float *)&v4->m128i_i32[2];
          v12 = (float)((float)((float)(COERCE_FLOAT(HIDWORD(v3->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])))
                              * (float)(COERCE_FLOAT(HIDWORD(v3->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))))
                      + (float)((float)(COERCE_FLOAT(v3->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0]))
                              * (float)(COERCE_FLOAT(v3->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0]))))
              + (float)(v13 * v13);
          break;
        case 69:
          v6 = (__m128)_mm_loadu_si128(v3);
          v7 = (__m128)_mm_loadu_si128(v4);
          v8 = v6.m128_f32[0] - v7.m128_f32[0];
          v9 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
          v10 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0] - _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
          v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
          v11 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
          v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
          v12 = (float)((float)((float)(v10 * v10) + (float)(v8 * v8)) + (float)((float)(v9 - v11) * (float)(v9 - v11)))
              + (float)((float)(v6.m128_f32[0] - v7.m128_f32[0]) * (float)(v6.m128_f32[0] - v7.m128_f32[0]));
          break;
        default:
          v15 = 3494;
          goto LABEL_3;
      }
      v3[4].m128i_i32[2] = 18;
      *(float *)v3->m128i_i32 = v12;
      --*((_DWORD *)this + 2);
      return v2;
    }
    v15 = 3434;
  }
  else
  {
    v15 = 3411;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v15,
    0LL);
  return v2;
}
