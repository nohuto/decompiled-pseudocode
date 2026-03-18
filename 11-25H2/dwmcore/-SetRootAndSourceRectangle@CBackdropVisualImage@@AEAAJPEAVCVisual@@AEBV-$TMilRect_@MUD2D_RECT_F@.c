/*
 * XREFs of ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C2F0
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000B240 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180185404 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CBackdropVisualImage::SetRootAndSourceRectangle(__int64 a1, __int64 a2, D2DMatrixHelper *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  struct D2D_RECT_F *v8; // r9
  float v9; // xmm2_4
  __m128 v10; // xmm1
  float v11; // xmm6_4
  int *v12; // rax
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  int *v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  _BYTE v24[32]; // [rsp+28h] [rbp-39h] BYREF
  float v25; // [rsp+48h] [rbp-19h]
  float v26; // [rsp+4Ch] [rbp-15h]

  v6 = 0LL;
  if ( IsEmpty((const struct D2D_RECT_F *)a3) )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(a1 + 184);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 136) != v5 )
      *(_QWORD *)(a1 + 136) = v5;
    v7 = PixelAlign(v24, a3);
    do
    {
      *(float *)&v24[4 * v6 + 16] = (float)*(int *)(v7 + 4 * v6);
      ++v6;
    }
    while ( v6 < 4 );
    v9 = *(float *)(a1 + 2152);
    v10 = *(__m128 *)&v24[16];
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v24[16];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.000081380211
      || (v11 = *(float *)(a1 + 2156), COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.000081380211) )
    {
      v11 = *(float *)(a1 + 2156);
      *(_DWORD *)&v24[24] = 0;
      *(_OWORD *)v24 = 0LL;
      *(_QWORD *)&v24[16] = LODWORD(v9);
      *(float *)&v24[28] = v11;
      v25 = 0.0 - (float)(v9 * 0.0);
      v26 = 0.0 - (float)(v11 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        a3,
        (const struct D2D_RECT_F *)&v24[16],
        (const struct D2D_MATRIX_3X2_F *)v24,
        v8);
      *(_OWORD *)&v24[16] = *(_OWORD *)v24;
      v12 = (int *)PixelAlign(v24, &v24[16]);
      v13 = (float)v12[2] - (float)*v12;
      v14 = (float)v12[3] - (float)v12[1];
    }
    else
    {
      v13 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v10.m128_f32[0];
      v14 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0] - _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
    }
    *(float *)(a1 + 120) = v13;
    *(float *)(a1 + 124) = v14;
    v15 = *(float *)(a1 + 120);
    v16 = (float)*(int *)(a1 + 2168);
    if ( v15 > v16 || *(float *)(a1 + 124) > v16 )
    {
      if ( v15 <= *(float *)(a1 + 124) )
        v18 = v16 / *(float *)(a1 + 124);
      else
        v18 = v16 / v15;
      v19 = v11 * v18;
      v20 = v18 * *(float *)(a1 + 2152);
      *(float *)(a1 + 2156) = v19;
      *(float *)(a1 + 2152) = v20;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - 1.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.000081380211 )
      {
        *(_DWORD *)&v24[24] = 0;
        *(_QWORD *)&v24[16] = LODWORD(v20);
        *(float *)&v24[28] = v19;
        *(_OWORD *)v24 = 0LL;
        v25 = 0.0 - (float)(v20 * 0.0);
        v26 = 0.0 - (float)(v19 * 0.0);
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          a3,
          (const struct D2D_RECT_F *)&v24[16],
          (const struct D2D_MATRIX_3X2_F *)v24,
          v8);
        *(_OWORD *)&v24[16] = *(_OWORD *)v24;
        v21 = (int *)PixelAlign(v24, &v24[16]);
        v22 = (float)v21[3];
        v23 = (float)v21[1];
        *(float *)(a1 + 120) = (float)v21[2] - (float)*v21;
        *(float *)(a1 + 124) = v22 - v23;
      }
    }
  }
  return 0LL;
}
