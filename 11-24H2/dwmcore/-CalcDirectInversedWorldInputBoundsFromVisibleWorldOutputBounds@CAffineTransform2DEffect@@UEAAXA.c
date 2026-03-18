/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1802A9390
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801E2510 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180249968 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x1802A9A78 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 */

char __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __m128 *a2,
        struct D2D_RECT_F *a3,
        FLOAT *a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6)
{
  FLOAT v7; // xmm1_4
  __int32 v8; // xmm2_4
  __int32 v10; // xmm3_4
  FLOAT v13; // xmm1_4
  __int64 v14; // xmm0_8
  __int128 v15; // xmm1
  char result; // al
  __int64 v17; // rcx
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  FLOAT *p_top; // rdx
  struct D2D_RECT_F v26; // [rsp+20h] [rbp-59h] BYREF
  __int32 v27; // [rsp+30h] [rbp-49h]
  __int32 v28; // [rsp+34h] [rbp-45h]
  __int128 v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h]
  struct D2D_RECT_F v31; // [rsp+50h] [rbp-29h] BYREF
  int v32; // [rsp+60h] [rbp-19h]
  int v33; // [rsp+64h] [rbp-15h]
  D2D1_MATRIX_3X2_F v34; // [rsp+68h] [rbp-11h] BYREF

  v7 = a2->m128_f32[1];
  v8 = a2[3].m128_i32[1];
  v10 = a2[3].m128_i32[0];
  LODWORD(v26.left) = a2->m128_i32[0];
  LODWORD(v26.right) = a2[1].m128_i32[0];
  v26.top = v7;
  v13 = a2[1].m128_f32[1];
  v27 = v10;
  v28 = v8;
  v31 = (struct D2D_RECT_F)_xmm;
  v26.bottom = v13;
  v32 = v10 ^ _xmm;
  v33 = v8 ^ _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v29,
    (const struct D2D1::Matrix3x2F *)&v26,
    (const struct D2D1::Matrix3x2F *)&v31);
  v14 = v30;
  v15 = *(_OWORD *)(a1 + 184);
  *(_OWORD *)(a1 + 220) = v29;
  *(_QWORD *)(a1 + 236) = v14;
  *(_QWORD *)&v34.m[2][0] = *(_QWORD *)(a1 + 200);
  *(_OWORD *)&v34.m11 = v15;
  result = D2D1::Matrix3x2F::Invert(&v34);
  if ( result
    && (*a6 = *a3,
        v26 = 0LL,
        v31 = *a3,
        (result = CFilterEffect::InvertTransformToCalc2DBounds(
                    a2,
                    (__int128 *)&v31,
                    (struct Windows::Foundation::Numerics::float4x4 *)&v26)) != 0) )
  {
    CAffineTransform2DEffect::TransformBounds(v17, &v34, &v26, &v26);
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)a2, &v26, &v31.left);
    left = v31.left;
    top = v31.top;
    right = v31.right;
    bottom = v31.bottom;
    a5->left = v31.left;
    a5->top = top;
    a5->right = right;
    a5->bottom = bottom;
    if ( *a4 > left )
      a5->left = *a4;
    v22 = a4[1];
    if ( v22 > top )
      a5->top = v22;
    v23 = a4[2];
    if ( right > v23 )
      a5->right = v23;
    v24 = a4[3];
    if ( bottom > v24 )
      a5->bottom = v24;
    result = IsEmpty(a5);
    if ( result )
    {
      a5->bottom = 0.0;
      a5->right = 0.0;
      *p_top = 0.0;
      a5->left = 0.0;
    }
  }
  else
  {
    p_top = &a5->top;
    *a5 = *a3;
    *a6 = *a3;
  }
  *(float *)(a1 + 212) = a5->left - a2[3].m128_f32[0];
  *(float *)(a1 + 216) = *p_top - a2[3].m128_f32[1];
  return result;
}
