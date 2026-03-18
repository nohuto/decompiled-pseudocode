/*
 * XREFs of InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802ABB5C
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004F740 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18017D380 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801B4C10 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801BA340 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18017D6E0 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802B4CFC (-Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802B4E04 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

__int64 __fastcall InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        __int64 a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  int v10; // ecx
  float v11; // xmm1_4
  __m128i v12; // xmm0
  struct _D3DCOLORVALUE v14; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp-69h] BYREF
  CPathData *v16; // [rsp+80h] [rbp-29h] BYREF
  int v17; // [rsp+88h] [rbp-21h]
  _OWORD v18[4]; // [rsp+90h] [rbp-19h] BYREF
  CPathData *v19; // [rsp+D0h] [rbp+27h] BYREF
  int v20; // [rsp+D8h] [rbp+2Fh]

  memset_0(v18, 0, sizeof(v18));
  v19 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v16 = 0LL;
  v8 = Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v14, a1);
  v20 = 70;
  v18[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v14, a2);
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(double *)a4;
  v17 = 70;
  v15[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::ExpressionValueLerp(v10, v11, (__int64)v18, (unsigned int *)v15, (__int64)a3);
  v12 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(&v14, a3));
  LODWORD(a3[4].b) = 70;
  *(__m128i *)&a3->r = v12;
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v16);
  return Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v19);
}
