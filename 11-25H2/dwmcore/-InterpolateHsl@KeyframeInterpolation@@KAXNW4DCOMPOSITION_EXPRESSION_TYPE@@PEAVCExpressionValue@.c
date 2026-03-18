/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801FC534
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005B9B0 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800D2190 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C5050 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801CB760 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x1802B5660 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F8A4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801FC988 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801FCB4C (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     fmodf_0 @ 0x1802E88C0 (fmodf_0.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateHsl(double a1, __int64 a2, float *a3, float *a4, __int64 a5)
{
  float v7; // xmm7_4
  ColorSpaceHelpers *v8; // rcx
  ColorSpaceHelpers *v9; // rcx
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm6_4
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  float v16; // xmm0_4
  float *v17; // [rsp+48h] [rbp-51h] BYREF
  float v18; // [rsp+50h] [rbp-49h] BYREF
  float v19; // [rsp+54h] [rbp-45h] BYREF
  float v20; // [rsp+58h] [rbp-41h] BYREF
  float v21; // [rsp+5Ch] [rbp-3Dh] BYREF
  float v22; // [rsp+60h] [rbp-39h] BYREF
  float v23; // [rsp+64h] [rbp-35h] BYREF
  __int128 v24; // [rsp+68h] [rbp-31h] BYREF
  _OWORD v25[4]; // [rsp+78h] [rbp-21h] BYREF
  CPathData *v26; // [rsp+B8h] [rbp+1Fh] BYREF
  int v27; // [rsp+C0h] [rbp+27h]

  v7 = a1;
  memset_0(v25, 0, sizeof(v25));
  v26 = 0LL;
  ColorSpaceHelpers::Color_HSLAfromRGBA(v8, a3[1], a3[2], a3[3], COERCE_FLOAT(&v17), (float *)&v17 + 1, &v18, &v19, v17);
  ColorSpaceHelpers::Color_HSLAfromRGBA(v9, a4[1], a4[2], a4[3], COERCE_FLOAT(&v20), &v21, &v22, &v23, v17);
  v11 = 1.0 - v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v17 - v20) & _xmm) >= 3.1415927 )
  {
    if ( *(float *)&v17 > v20 )
      v16 = (float)((float)(v20 + 6.2831855) * v7) + (float)(v11 * *(float *)&v17);
    else
      v16 = (float)((float)(*(float *)&v17 + 6.2831855) * v11) + (float)(v20 * v7);
    fmodf_0(v16, 6.2831855);
  }
  v24 = 0LL;
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v10,
    (float)(v11 * *((float *)&v17 + 1)) + (float)(v21 * v7),
    (float)(v11 * v18) + (float)(v22 * v7),
    (float)(v11 * v19) + (float)(v23 * v7),
    COERCE_FLOAT(&v24),
    (float *)&v24 + 1,
    (float *)&v24 + 2,
    (float *)&v24 + 3,
    v17);
  v12 = v24;
  v13 = v25[2];
  *(_OWORD *)a5 = v24;
  v27 = 70;
  v25[0] = v12;
  *(_OWORD *)(a5 + 16) = v25[1];
  v14 = v25[3];
  *(_OWORD *)(a5 + 32) = v13;
  *(_OWORD *)(a5 + 48) = v14;
  Microsoft::WRL::ComPtr<CPathData>::operator=((CPathData **)(a5 + 64), &v26);
  *(_DWORD *)(a5 + 72) = 70;
  return Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v26);
}
