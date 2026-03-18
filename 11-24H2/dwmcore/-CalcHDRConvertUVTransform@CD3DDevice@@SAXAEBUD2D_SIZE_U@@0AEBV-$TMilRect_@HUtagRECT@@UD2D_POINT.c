/*
 * XREFs of ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180066060
 * Callers:
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180065808 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180065B20 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 * Callees:
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1800A820C (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800FE738 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_ea_1800FE738.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CD3DDevice::CalcHDRConvertUVTransform(
        int *a1,
        int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        CMILMatrix *a6)
{
  int v6; // eax
  __m128i v7; // xmm9
  __m128i v8; // xmm10
  __m128i v9; // xmm7
  __m128i v10; // xmm6
  __m128i v11; // xmm5
  __m128i v12; // xmm4
  unsigned int v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  __m128i v17; // xmm0
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  enum DXGI_MODE_ROTATION v22; // r11d
  float v23; // xmm4_4
  float v24; // xmm5_4
  const struct CMILMatrix *v25; // rdx
  _DWORD v26[4]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v27[4]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v28[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v30[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+A8h] [rbp-60h]
  _OWORD v32[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v33; // [rsp+F8h] [rbp-10h]
  _BYTE v34[64]; // [rsp+108h] [rbp+0h] BYREF
  int v35; // [rsp+148h] [rbp+40h]
  __int128 v36; // [rsp+158h] [rbp+50h] BYREF

  v6 = *a1;
  v7 = _mm_cvtsi32_si128(*a3);
  v8 = _mm_cvtsi32_si128(a3[1]);
  v9 = _mm_cvtsi32_si128(a3[2]);
  v10 = _mm_cvtsi32_si128(a3[3]);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)a5);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
  *(_QWORD *)&v36 = 0LL;
  v28[0] = 0;
  v28[1] = 0;
  v27[0] = 0;
  v27[1] = 0;
  v35 = 0;
  v29 = _xmm;
  *(float *)&v13 = (float)v6;
  v14 = *a2;
  *((_QWORD *)&v36 + 1) = __PAIR64__((float)a1[1], v13);
  v15 = (float)v14;
  v16 = a2[1];
  *(float *)&v28[2] = v15;
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 8));
  *(float *)&v28[3] = (float)v16;
  LODWORD(v18) = _mm_cvtepi32_ps(v7).m128_u32[0];
  LODWORD(v19) = _mm_cvtepi32_ps(v8).m128_u32[0];
  LODWORD(v20) = _mm_cvtepi32_ps(v9).m128_u32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v10).m128_u32[0];
  *(float *)&v27[3] = (float)*(int *)(a5 + 12) - _mm_cvtepi32_ps(v12).m128_f32[0];
  *(float *)v26 = v18;
  *(float *)&v26[1] = v19;
  *(float *)&v26[2] = v20;
  *(float *)&v26[3] = v21;
  *(float *)&v27[2] = _mm_cvtepi32_ps(v17).m128_f32[0] - _mm_cvtepi32_ps(v11).m128_f32[0];
  CMILMatrix::InferAffineMatrix(a6, &v29, &v36);
  if ( v24 != 0.0 || v23 != 0.0 )
    CMILMatrix::Translate(a6, COERCE_FLOAT(LODWORD(v24) ^ _xmm), COERCE_FLOAT(LODWORD(v23) ^ _xmm));
  if ( v22 == DXGI_MODE_ROTATION_IDENTITY )
  {
    CMILMatrix::InferAffineMatrix(v34, v27, v26);
    v25 = (const struct CMILMatrix *)v34;
  }
  else
  {
    v31 = 0;
    v36 = 0LL;
    CMILMatrix::SetToRotation((CMILMatrix *)v30, v20 - v18, v21 - v19, v22);
    CMILMatrix::Transform2DBoundsHelper<0>(v30, v26, &v36);
    CMILMatrix::InferAffineMatrix(v34, v27, &v36);
    CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v34);
    v32[0] = v30[0];
    v32[1] = v30[1];
    v32[2] = v30[2];
    v32[3] = v30[3];
    v33 = v31;
    CMILMatrix::Invert((CMILMatrix *)v32);
    v25 = (const struct CMILMatrix *)v32;
  }
  CMILMatrix::Multiply(a6, v25);
  CMILMatrix::InferAffineMatrix(v34, v28, &v29);
  CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v34);
}
