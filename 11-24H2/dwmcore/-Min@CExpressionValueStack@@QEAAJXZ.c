/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x18015B244
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rbx
  struct CExpressionValue *v3; // rax
  int v4; // ecx
  unsigned int v5; // esi
  float v6; // xmm0_4
  __int64 v8; // xmm0_8
  float v9; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  unsigned int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)this + 2) < 2u )
  {
    v14 = 2040;
    goto LABEL_8;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -1);
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = *((_DWORD *)v2 + 18);
  v5 = 0;
  if ( v4 != *((_DWORD *)v3 + 18) )
  {
    v14 = 2064;
    goto LABEL_8;
  }
  if ( v4 != 18 )
  {
    switch ( v4 )
    {
      case '#':
        v10 = fminf(*(float *)v2, *(float *)v3);
        v11 = fminf(*((float *)v2 + 1), *((float *)v3 + 1));
        *((_DWORD *)v2 + 18) = 35;
        *(float *)v2 = v10;
        *((float *)v2 + 1) = v11;
        goto LABEL_5;
      case '4':
        v15 = *(_QWORD *)v2;
        v8 = *(_QWORD *)v3;
        v9 = *((float *)v3 + 2);
        *(float *)&v8 = fminf(COERCE_FLOAT(*(_QWORD *)v2), *(float *)&v8);
        *((_DWORD *)v2 + 18) = 52;
        *(_DWORD *)v2 = v8;
        *((float *)v2 + 1) = fminf(*((float *)&v15 + 1), *((float *)&v8 + 1));
        *((float *)v2 + 2) = fminf(*((float *)v2 + 2), v9);
        goto LABEL_5;
      case 'E':
        v12 = (__m128)_mm_loadu_si128((const __m128i *)v3);
        *((_DWORD *)v2 + 18) = 69;
        v13 = (__m128)_mm_loadu_si128((const __m128i *)v2);
        *(_QWORD *)&v16 = __PAIR64__(
                            COERCE_UNSIGNED_INT(fminf(_mm_shuffle_ps(v13, v13, 85).m128_f32[0], _mm_shuffle_ps(
                                                                                                  v12,
                                                                                                  v12,
                                                                                                  85).m128_f32[0])),
                            COERCE_UNSIGNED_INT(fminf(v13.m128_f32[0], v12.m128_f32[0])));
        *((_QWORD *)&v16 + 1) = __PAIR64__(
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      _mm_shuffle_ps(v13, v13, 255).m128_f32[0],
                                      _mm_shuffle_ps(v12, v12, 255).m128_f32[0])),
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      _mm_shuffle_ps(v13, v13, 170).m128_f32[0],
                                      _mm_shuffle_ps(v12, v12, 170).m128_f32[0])));
        *(_OWORD *)v2 = v16;
        goto LABEL_5;
    }
    v14 = 2120;
LABEL_8:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v14,
      0LL);
    return v5;
  }
  v6 = fminf(*(float *)v2, *(float *)v3);
  *((_DWORD *)v2 + 18) = 18;
  *(float *)v2 = v6;
LABEL_5:
  --*((_DWORD *)this + 2);
  return v5;
}
