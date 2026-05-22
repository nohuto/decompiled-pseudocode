/*
 * XREFs of ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x1801340E8
 * Callers:
 *     ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1801342A0 (-RelativeRectToScreen@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800DFA00 (-RelativePointToScreen@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::RelativeRectToScreen(float *a1, __int64 a2, float *a3)
{
  float v4; // xmm6_4
  float v5; // xmm5_4
  float *v6; // rax
  float v7; // xmm5_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float *v10; // rcx
  __int64 v11; // r11
  float *v12; // rcx
  __int64 v13; // r11
  float v14; // xmm5_4
  float *v15; // rcx
  float *v16; // rcx
  float *v17; // rax
  float *v18; // r10
  float *v19; // r9
  float *v20; // r11
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  __int64 result; // rax
  float v26; // [rsp+20h] [rbp-40h] BYREF
  float v27; // [rsp+28h] [rbp-38h] BYREF
  float v28; // [rsp+78h] [rbp+18h] BYREF
  float v29; // [rsp+7Ch] [rbp+1Ch]
  float v30; // [rsp+80h] [rbp+20h] BYREF
  float v31; // [rsp+88h] [rbp+28h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = *a3;
  v5 = a3[1];
  v28 = (float)(a3[2] * 0.5) + *a3;
  v29 = (float)(a3[3] * 0.5) + v5;
  v6 = CInputTransform::RelativePointToScreen(a1, &v30, &v28);
  v28 = v4;
  v29 = v7;
  v8 = *v6;
  v9 = v6[1];
  CInputTransform::RelativePointToScreen(v10, &v30, &v28);
  v28 = v4 + *(float *)(v11 + 8);
  CInputTransform::RelativePointToScreen(v12, &v31, &v28);
  v29 = v14 + *(float *)(v13 + 12);
  CInputTransform::RelativePointToScreen(v15, &v26, &v28);
  v28 = v4;
  v17 = CInputTransform::RelativePointToScreen(v16, &v27, &v28);
  v21 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - *v19) & _xmm)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - *v18) & _xmm))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - *v20) & _xmm))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - *v17) & _xmm))
      * 0.25;
  v22 = v9 - v17[1];
  v23 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v19[1]) & _xmm)
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v18[1]) & _xmm))
      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v20[1]) & _xmm);
  *(float *)a2 = v8 - v21;
  v24 = (float)(v23 + COERCE_FLOAT(LODWORD(v22) & _xmm)) * 0.25;
  result = a2;
  *(float *)(a2 + 4) = v9 - v24;
  *(float *)(a2 + 12) = v24 + v24;
  *(float *)(a2 + 8) = v21 + v21;
  return result;
}
