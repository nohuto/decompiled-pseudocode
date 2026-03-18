/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x18020957C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rbx
  struct CExpressionValue *v3; // r14
  struct CExpressionValue *v4; // rax
  int v5; // ecx
  unsigned int v6; // esi
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v11; // xmm0_4
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  __m128 v14; // xmm6
  float v15; // ecx
  __int64 v16; // xmm0_8
  float v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-20h]

  if ( *((_DWORD *)this + 2) < 3u )
  {
    v18 = 2266;
    goto LABEL_10;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -2);
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  v5 = *((_DWORD *)v2 + 18);
  if ( v5 != *((_DWORD *)v3 + 18) || (v6 = 0, v5 != *((_DWORD *)v4 + 18)) )
  {
    v18 = 2291;
    goto LABEL_10;
  }
  if ( v5 != 18 )
  {
    switch ( v5 )
    {
      case '#':
        v11 = fminf(fmaxf(*((float *)v2 + 1), *((float *)v3 + 1)), *((float *)v4 + 1));
        v9 = fminf(fmaxf(*(float *)v2, *(float *)v3), *(float *)v4);
        *((_DWORD *)v2 + 18) = 35;
        *((float *)v2 + 1) = v11;
        goto LABEL_6;
      case '4':
        v15 = *((float *)v3 + 2);
        v19 = *(_QWORD *)v2;
        v20 = *(_QWORD *)v3;
        v16 = *(_QWORD *)v4;
        v17 = *((float *)v4 + 2);
        v22 = v16;
        *(float *)&v16 = fmaxf(COERCE_FLOAT(*(_QWORD *)v2), COERCE_FLOAT(*(_QWORD *)v3));
        *((_DWORD *)v2 + 18) = 52;
        *(float *)v2 = fminf(*(float *)&v16, *(float *)&v22);
        *((float *)v2 + 1) = fminf(fmaxf(*((float *)&v19 + 1), *((float *)&v20 + 1)), *((float *)&v22 + 1));
        *((float *)v2 + 2) = fminf(fmaxf(*((float *)v2 + 2), v15), v17);
        goto LABEL_7;
      case 'E':
        v12 = (__m128)_mm_loadu_si128((const __m128i *)v3);
        v13 = (__m128)_mm_loadu_si128((const __m128i *)v4);
        *((_DWORD *)v2 + 18) = 69;
        v14 = (__m128)_mm_loadu_si128((const __m128i *)v2);
        *(_QWORD *)&v21 = __PAIR64__(
                            COERCE_UNSIGNED_INT(
                              fminf(
                                fmaxf(
                                  _mm_shuffle_ps(v14, v14, 85).m128_f32[0],
                                  _mm_shuffle_ps(v12, v12, 85).m128_f32[0]),
                                _mm_shuffle_ps(v13, v13, 85).m128_f32[0])),
                            COERCE_UNSIGNED_INT(fminf(fmaxf(v14.m128_f32[0], v12.m128_f32[0]), v13.m128_f32[0])));
        *((_QWORD *)&v21 + 1) = __PAIR64__(
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      fmaxf(
                                        _mm_shuffle_ps(v14, v14, 255).m128_f32[0],
                                        _mm_shuffle_ps(v12, v12, 255).m128_f32[0]),
                                      _mm_shuffle_ps(v13, v13, 255).m128_f32[0])),
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      fmaxf(
                                        _mm_shuffle_ps(v14, v14, 170).m128_f32[0],
                                        _mm_shuffle_ps(v12, v12, 170).m128_f32[0]),
                                      _mm_shuffle_ps(v13, v13, 170).m128_f32[0])));
        *(_OWORD *)v2 = v21;
        goto LABEL_7;
    }
    v18 = 2354;
LABEL_10:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18,
      0LL);
    return v6;
  }
  v7 = *(float *)v4;
  v8 = fmaxf(*(float *)v2, *(float *)v3);
  *((_DWORD *)v2 + 18) = 18;
  v9 = fminf(v8, v7);
LABEL_6:
  *(float *)v2 = v9;
LABEL_7:
  *((_DWORD *)this + 2) -= 2;
  return v6;
}
