/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1802A2CB0
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802311E0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180038440 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802BE784 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  const struct CExpressionValue *v5; // rdx
  CExpressionValue *v6; // rcx
  _OWORD *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  unsigned int v13; // ebx
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  unsigned int v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+30h] [rbp-58h]
  _BYTE v23[72]; // [rsp+40h] [rbp-48h] BYREF

  CExpressionValueStack::PeekStackValue(a3, 0);
  if ( !CExpressionValue::HasValue(a2) )
  {
    CExpressionValue::CopyFrom(v6, v5);
LABEL_21:
    --*((_DWORD *)a3 + 2);
    return 0;
  }
  switch ( *((_DWORD *)v5 + 18) )
  {
    case 0x12:
      v8 = *(float *)v5;
      *((_DWORD *)a2 + 18) = 18;
      goto LABEL_20;
    case 0x23:
      v18 = (__m128)*(unsigned int *)v5;
      v19 = (__m128)*((unsigned int *)v5 + 1);
      v18.m128_f32[0] = v18.m128_f32[0] + *(float *)a2;
      v19.m128_f32[0] = v19.m128_f32[0] + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
      goto LABEL_21;
    case 0x34:
      v8 = *(float *)v5;
      v16 = *((float *)v5 + 1) + *((float *)a2 + 1);
      v17 = *((float *)v5 + 2) + *((float *)a2 + 2);
      *((_DWORD *)a2 + 18) = 52;
      *((float *)a2 + 1) = v16;
      *((float *)a2 + 2) = v17;
      goto LABEL_20;
    case 0x45:
      *(float *)&v22 = *(float *)v5 + *(float *)a2;
      *(float *)&v14 = *((float *)v5 + 2) + *((float *)a2 + 2);
      *((float *)&v22 + 1) = *((float *)v5 + 1) + *((float *)a2 + 1);
      *(float *)&v15 = *((float *)v5 + 3) + *((float *)a2 + 3);
      *((_DWORD *)a2 + 18) = 69;
      *((_QWORD *)&v22 + 1) = __PAIR64__(v15, v14);
      *(_OWORD *)a2 = v22;
      goto LABEL_21;
    case 0x46:
    case 0x47:
      v21 = 420;
      goto LABEL_15;
    case 0x68:
      v8 = *(float *)v5;
      v9 = *((float *)v5 + 2) + *((float *)a2 + 2);
      v10 = *((float *)v5 + 3) + *((float *)a2 + 3);
      v11 = *((float *)v5 + 4) + *((float *)a2 + 4);
      v12 = *((float *)v5 + 5) + *((float *)a2 + 5);
      *((float *)a2 + 1) = *((float *)v5 + 1) + *((float *)a2 + 1);
      *((float *)a2 + 2) = v9;
      *((float *)a2 + 3) = v10;
      *((float *)a2 + 4) = v11;
      *((float *)a2 + 5) = v12;
      *((_DWORD *)a2 + 18) = 104;
LABEL_20:
      *(float *)a2 = v8 + *(float *)a2;
      goto LABEL_21;
    case 0x109:
      v7 = (_OWORD *)D2DMatrix::operator+(a2, v23, v5);
      *((_DWORD *)a2 + 18) = 265;
      *(_OWORD *)a2 = *v7;
      *((_OWORD *)a2 + 1) = v7[1];
      *((_OWORD *)a2 + 2) = v7[2];
      *((_OWORD *)a2 + 3) = v7[3];
      goto LABEL_21;
  }
  v21 = 439;
LABEL_15:
  v13 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v21, 0LL);
  return v13;
}
