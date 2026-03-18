/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x18024DFA8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(CExpressionValueStack *this)
{
  unsigned int v2; // esi
  __m128i *v3; // rbx
  const __m128i *v4; // rax
  __int32 v5; // ecx
  __m128 v6; // xmm5
  __m128 v7; // xmm2
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  unsigned int v17; // [rsp+20h] [rbp-38h]

  if ( *((_DWORD *)this + 2) >= 2u )
  {
    v3 = (__m128i *)CExpressionValueStack::PeekStackValue(this, -1);
    v4 = (const __m128i *)CExpressionValueStack::PeekStackValue(this, 0);
    v5 = v3[4].m128i_i32[2];
    v2 = 0;
    if ( v5 == v4[4].m128i_i32[2] )
    {
      if ( v5 == 18 )
      {
        v15 = *(float *)v3->m128i_i32 - *(float *)v4->m128i_i32;
        v3[4].m128i_i32[2] = 18;
        LODWORD(v13) = LODWORD(v15) & _xmm;
      }
      else
      {
        switch ( v5 )
        {
          case '#':
            v12 = (float)((float)(*(float *)&v3->m128i_i32[1] - *(float *)&v4->m128i_i32[1])
                        * (float)(*(float *)&v3->m128i_i32[1] - *(float *)&v4->m128i_i32[1]))
                + (float)((float)(*(float *)v3->m128i_i32 - *(float *)v4->m128i_i32)
                        * (float)(*(float *)v3->m128i_i32 - *(float *)v4->m128i_i32));
            break;
          case '4':
            v14 = *(float *)&v3->m128i_i32[2] - *(float *)&v4->m128i_i32[2];
            v12 = (float)((float)((float)(COERCE_FLOAT(HIDWORD(v3->m128i_i64[0]))
                                        - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])))
                                * (float)(COERCE_FLOAT(HIDWORD(v3->m128i_i64[0]))
                                        - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))))
                        + (float)((float)(COERCE_FLOAT(v3->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0]))
                                * (float)(COERCE_FLOAT(v3->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0]))))
                + (float)(v14 * v14);
            break;
          case 'E':
            v6 = (__m128)_mm_loadu_si128(v3);
            v7 = (__m128)_mm_loadu_si128(v4);
            v8 = v6.m128_f32[0] - v7.m128_f32[0];
            v9 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0] - _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
            v10 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
            v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
            v11 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
            v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
            v12 = (float)((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)((float)(v10 - v11) * (float)(v10 - v11)))
                + (float)((float)(v6.m128_f32[0] - v7.m128_f32[0]) * (float)(v6.m128_f32[0] - v7.m128_f32[0]));
            break;
          default:
            v17 = 3378;
            goto LABEL_3;
        }
        v3[4].m128i_i32[2] = 18;
        v13 = sqrtf_0(v12);
      }
      *(float *)v3->m128i_i32 = v13;
      --*((_DWORD *)this + 2);
      return v2;
    }
    v17 = 3318;
  }
  else
  {
    v17 = 3295;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17,
    0LL);
  return v2;
}
