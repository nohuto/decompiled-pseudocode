/*
 * XREFs of ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180249968
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18021A870 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1802A9390 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CFilterEffect::InvertTransformToCalc2DBounds(
        __m128 *a1,
        __int128 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __m128 v3; // xmm1
  __int32 v4; // eax
  char v6; // bl
  __int128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  bool v10; // al
  __m128 v12[4]; // [rsp+20h] [rbp-39h] BYREF
  __int32 v13; // [rsp+60h] [rbp+7h]
  __int128 v14; // [rsp+70h] [rbp+17h] BYREF
  int v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+84h] [rbp+2Bh]
  __int128 v17; // [rsp+88h] [rbp+2Fh] BYREF
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  v3 = a1[1];
  v4 = a1[4].m128_i32[0];
  v18 = 0;
  v19 = 0;
  v6 = 1;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  v13 = v4;
  v7 = *a2;
  v12[1] = v3;
  v8 = a1[3];
  v14 = v7;
  v9 = *a1;
  v12[3] = v8;
  v12[0] = v9;
  v12[2] = a1[2];
  v10 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v12, v12, a3);
  LOWORD(v13) = v13 & 0xC003;
  if ( !v10 )
    return 0;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v12, (float *)&v14, (float *)&v17);
  *(_OWORD *)a3 = v17;
  return v6;
}
