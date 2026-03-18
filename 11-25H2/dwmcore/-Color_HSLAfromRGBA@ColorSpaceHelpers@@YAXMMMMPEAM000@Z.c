/*
 * XREFs of ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801FCB4C
 * Callers:
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801FC534 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801FC760 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     fmodf_0 @ 0x1802E88C0 (fmodf_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_HSLAfromRGBA(
        ColorSpaceHelpers *this,
        float a2,
        float a3,
        float a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float v8; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  double v18; // xmm1_8

  v10 = fmaxf(fmaxf(v8, a2), a3);
  v11 = fminf(fminf(v8, a2), a3);
  v12 = v10 + v11;
  v13 = (float)(v10 + v11) * 0.5;
  if ( v10 == v11 )
  {
    v14 = 0.0;
    v15 = 0.0;
    goto LABEL_3;
  }
  v16 = v10 - v11;
  if ( v10 == v8 )
  {
    v17 = fmodf_0((float)(a2 - a3) / v16, 6.0);
  }
  else
  {
    if ( v10 == a2 )
    {
      v18 = (float)((float)((float)(a3 - v8) / v16) + 2.0);
      goto LABEL_7;
    }
    v17 = (float)((float)(v8 - a2) / v16) + 4.0;
  }
  v18 = v17;
LABEL_7:
  v14 = v18 * 1.047197551196598;
  if ( v14 < 0.0 )
    v14 = v14 + 6.2831855;
  v15 = v16 / (float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm));
LABEL_3:
  *a5 = v14;
  *a6 = v15;
  *a7 = v13;
  *a8 = a4;
}
