/*
 * XREFs of InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x1802ABA70
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004F740 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18017D380 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801B4C10 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801BA340 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18017C5BC (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802B4CFC (-Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802B4E04 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

__int64 __fastcall InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        double *a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  struct _D3DCOLORVALUE v13; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v14[4]; // [rsp+48h] [rbp-49h] BYREF
  CPathData *v15; // [rsp+88h] [rbp-9h] BYREF
  int v16; // [rsp+90h] [rbp-1h]
  _OWORD v17[4]; // [rsp+98h] [rbp+7h] BYREF
  CPathData *v18; // [rsp+D8h] [rbp+47h] BYREF
  int v19; // [rsp+E0h] [rbp+4Fh]

  memset_0(v17, 0, sizeof(v17));
  v18 = 0LL;
  memset_0(v14, 0, sizeof(v14));
  v15 = 0LL;
  v8 = Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v13, a1);
  v19 = 70;
  v17[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v13, a2);
  v16 = 70;
  v14[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::InterpolateHsl(*a4, v10, (float *)v17, (float *)v14, (__int64)a3);
  v11 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(&v13, a3));
  LODWORD(a3[4].b) = 70;
  *(__m128i *)&a3->r = v11;
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v15);
  return Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
}
