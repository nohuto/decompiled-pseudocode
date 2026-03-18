/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18015F004
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     fmod_0 @ 0x1802E88B4 (fmod_0.c)
 *     fmodf_0 @ 0x1802E88C0 (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rsi
  struct CExpressionValue *v3; // rbp
  struct CExpressionValue *v4; // rax
  unsigned int v5; // edi
  float v6; // xmm8_4
  float v7; // xmm7_4
  double v8; // xmm10_8
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-88h]
  float v16[28]; // [rsp+30h] [rbp-78h]

  if ( *((_DWORD *)this + 2) < 3u )
  {
    v15 = 5115;
    goto LABEL_18;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -2);
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v2 + 18) != 18 || *((_DWORD *)v3 + 18) != 18 || (v5 = 0, *((_DWORD *)v4 + 18) != 18) )
  {
    v15 = 5131;
LABEL_18:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v5;
  }
  v6 = fmaxf(fminf(*(float *)v4, 1.0), 0.0);
  v7 = (float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v6 + v6) - 1.0) & _xmm))
     * fmaxf(fminf(*(float *)v3, 1.0), 0.0);
  v8 = fmodf_0(*(float *)v2, 6.2831855);
  v9 = v6 - (float)(v7 * 0.5);
  v10 = v9 + v7;
  v11 = (float)((1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmod_0(v8 / 1.047197551196598, 2.0) - 1.0) & _xmm)) * v7)
      + v9;
  if ( v8 >= 1.047197551196598 )
  {
    if ( v8 < 2.094395102393195 )
    {
      v12 = v9 + v7;
      v16[0] = v11;
      v16[1] = v9 + v7;
      v13 = v11;
      v16[2] = v9;
      goto LABEL_9;
    }
    if ( v8 < 3.141592653589793 )
    {
      v12 = v9 + v7;
      v16[2] = v11;
      v13 = v9;
      v16[1] = v9 + v7;
      v9 = v11;
      goto LABEL_8;
    }
    if ( v8 < 4.188790204786391 )
    {
      v13 = v9;
      *(_QWORD *)&v16[1] = __PAIR64__(LODWORD(v10), LODWORD(v11));
      v9 = v9 + v7;
      v12 = v11;
      goto LABEL_8;
    }
    v12 = v9;
    v16[1] = v9;
    if ( v8 < 5.235987755982989 )
    {
      v16[0] = v11;
      v13 = v11;
      v16[2] = v9 + v7;
      v9 = v9 + v7;
      goto LABEL_9;
    }
    v16[2] = v11;
    v9 = v11;
  }
  else
  {
    *(_QWORD *)&v16[1] = __PAIR64__(LODWORD(v9), LODWORD(v11));
    v12 = v11;
  }
  v13 = v10;
LABEL_8:
  v16[0] = v13;
LABEL_9:
  if ( v13 < 0.0 )
    v16[0] = 0.0;
  if ( v12 < 0.0 )
    v16[1] = 0.0;
  if ( v9 < 0.0 )
    v16[2] = 0.0;
  v16[3] = 1.0;
  *((_DWORD *)v2 + 18) = 70;
  *(_OWORD *)v2 = *(_OWORD *)v16;
  *((_DWORD *)this + 2) -= 2;
  return v5;
}
