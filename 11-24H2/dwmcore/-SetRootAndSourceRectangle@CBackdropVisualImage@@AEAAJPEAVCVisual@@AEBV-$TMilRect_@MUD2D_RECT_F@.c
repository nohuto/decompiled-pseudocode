/*
 * XREFs of ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B7D4
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000ACA0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000B270 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18018DFF4 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180236A20 (-ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CBackdropVisualImage::SetRootAndSourceRectangle(
        struct D2D_RECT_F *a1,
        __int64 a2,
        D2DMatrixHelper *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  struct D2D_RECT_F *v8; // r9
  float right; // xmm5_4
  __m128 v10; // xmm1
  float bottom; // xmm2_4
  int *v12; // rax
  float v13; // xmm2_4
  float v14; // xmm0_4
  _BYTE v16[32]; // [rsp+20h] [rbp-30h] BYREF
  float v17; // [rsp+40h] [rbp-10h]
  float v18; // [rsp+44h] [rbp-Ch]

  v6 = 0LL;
  if ( IsEmpty((const struct D2D_RECT_F *)a3) )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(&a1[11].right);
  }
  else
  {
    if ( *(_QWORD *)&a1[8].right != v5 )
      *(_QWORD *)&a1[8].right = v5;
    v7 = PixelAlign(v16, a3);
    do
    {
      *(float *)&v16[4 * v6 + 16] = (float)*(int *)(v7 + 4 * v6);
      ++v6;
    }
    while ( v6 < 4 );
    right = a1[134].right;
    v10 = *(__m128 *)&v16[16];
    a1[6] = *(struct D2D_RECT_F *)&v16[16];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(right - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(a1[134].bottom - 1.0) & _xmm) >= 0.000081380211 )
    {
      bottom = a1[134].bottom;
      *(_DWORD *)&v16[24] = 0;
      *(float *)&v16[28] = bottom;
      *(_QWORD *)&v16[16] = LODWORD(right);
      *(_OWORD *)v16 = 0LL;
      v18 = 0.0 - (float)(bottom * 0.0);
      v17 = 0.0 - (float)(right * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        a3,
        (const struct D2D_RECT_F *)&v16[16],
        (const struct D2D_MATRIX_3X2_F *)v16,
        v8);
      *(_OWORD *)&v16[16] = *(_OWORD *)v16;
      v12 = (int *)PixelAlign(v16, &v16[16]);
      v13 = (float)v12[2] - (float)*v12;
      v14 = (float)v12[3] - (float)v12[1];
    }
    else
    {
      v13 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v10.m128_f32[0];
      v14 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0] - _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
    }
    a1[7].right = v13;
    a1[7].bottom = v14;
    CBackdropVisualImage::ValidateRealizationSize(a1, a3);
  }
  return 0LL;
}
