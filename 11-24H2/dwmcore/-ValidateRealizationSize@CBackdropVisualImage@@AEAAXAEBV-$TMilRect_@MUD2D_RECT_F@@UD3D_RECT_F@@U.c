/*
 * XREFs of ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180236A20
 * Callers:
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B7D4 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000B270 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

float *__fastcall CBackdropVisualImage::ValidateRealizationSize(struct D2D_RECT_F *a1, D2DMatrixHelper *this)
{
  float right; // xmm1_4
  float right_low; // xmm2_4
  float *result; // rax
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  __int64 v10; // r9
  float v11; // [rsp+20h] [rbp-40h]
  struct D2D_MATRIX_3X2_F v12; // [rsp+28h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-20h]
  float v14; // [rsp+44h] [rbp-1Ch]
  float v15; // [rsp+48h] [rbp-18h]
  float v16; // [rsp+4Ch] [rbp-14h]

  right = a1[7].right;
  right_low = (float)SLODWORD(a1[135].right);
  result = &a1[7].bottom;
  if ( right > right_low || *result > right_low )
  {
    if ( right <= *result )
      v5 = right_low / *result;
    else
      v5 = right_low / right;
    v6 = v5 * a1[134].right;
    v7 = v5 * a1[134].bottom;
    a1[134].right = v6;
    a1[134].bottom = v7;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.000081380211 )
    {
      v13 = 0;
      *(_QWORD *)&v12.m[2][0] = LODWORD(v6);
      v14 = v7;
      *(_OWORD *)&v12.m11 = 0LL;
      v15 = 0.0 - (float)(v6 * 0.0);
      v16 = 0.0 - (float)(v7 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(this, (const struct D2D_RECT_F *)v12.m[2], &v12, a1);
      v8 = (float)(v12.m21 - v12.m11) + 6291456.25;
      v11 = v8;
      v9 = (float)(v12.m22 - v12.m12) + 6291456.25;
      *(float *)(v10 + 120) = (float)((int)(LODWORD(v11) << 10) >> 11);
      result = (float *)(unsigned int)((int)(LODWORD(v9) << 10) >> 11);
      *(float *)(v10 + 124) = (float)((int)(LODWORD(v9) << 10) >> 11);
    }
  }
  return result;
}
