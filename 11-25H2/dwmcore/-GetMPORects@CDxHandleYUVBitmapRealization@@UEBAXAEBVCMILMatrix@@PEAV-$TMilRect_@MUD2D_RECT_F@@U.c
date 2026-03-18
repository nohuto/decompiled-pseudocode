/*
 * XREFs of ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1802479D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B5F0 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18002C31C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEAA_NXZ @ 0x1802868F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEA.c)
 */

float __fastcall CDxHandleYUVBitmapRealization::GetMPORects(
        __int64 a1,
        __int64 a2,
        float *a3,
        struct D2D_RECT_F *a4,
        float *a5)
{
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  struct D2D_RECT_F *v17; // rsi
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // eax
  float top; // xmm0_4
  __m128i v23; // [rsp+28h] [rbp-21h] BYREF
  __int128 v24; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v25[64]; // [rsp+48h] [rbp-1h] BYREF
  int v26; // [rsp+88h] [rbp+3Fh]

  if ( (*(_DWORD *)(a1 - 88) & 0x4000) != 0 )
  {
    v26 = 0;
    v24 = 0uLL;
    v23 = 0uLL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 328),
      (struct CMILMatrix *)v25,
      (__int64)&v24,
      &v23);
    v9 = (float)v23.m128i_i32[1];
    v10 = v23.m128i_i32[2];
    *a3 = (float)v23.m128i_i32[0];
    v11 = (float)v10;
    v12 = v23.m128i_i32[3];
    a3[1] = v9;
    v13 = (float)v12;
    v14 = v24;
    a3[2] = v11;
    v15 = (float)v14;
    v16 = DWORD1(v24);
    a3[3] = v13;
    v17 = (struct D2D_RECT_F *)a5;
    *a5 = v15;
    v18 = (float)v16;
    v19 = (float)SDWORD2(v24);
    v20 = HIDWORD(v24);
    a5[1] = v18;
    a5[2] = v19;
    a5[3] = (float)v20;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MPOClipRectFix>::GetImpl'::`2'::impl) )
    {
      v24 = 0LL;
      CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(a1, (__int64)&v24);
      *a4 = *(struct D2D_RECT_F *)a5;
      top = a4->top;
      a4->left = a4->left - *(float *)(a1 - 128);
      a4->top = top - *(float *)(a1 - 124);
      a4->right = *(float *)(a1 - 120) + a4->right;
      a4->bottom = *(float *)(a1 - 116) + a4->bottom;
    }
  }
  else
  {
    *a3 = (float)*(int *)(a1 - 172);
    a3[1] = (float)*(int *)(a1 - 168);
    a3[2] = (float)*(int *)(a1 - 164);
    a3[3] = (float)*(int *)(a1 - 160);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MPOClipRectFix>::GetImpl'::`2'::impl) )
    {
      a4->left = 0.0;
      a4->top = 0.0;
      a4->right = (float)*(int *)(a1 - 112);
      a4->bottom = (float)*(int *)(a1 - 108);
    }
    v17 = (struct D2D_RECT_F *)a5;
    *a5 = (float)*(int *)(a1 - 104);
    a5[1] = (float)*(int *)(a1 - 100);
    a5[2] = (float)*(int *)(a1 - 96);
    a5[3] = (float)*(int *)(a1 - 92);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MPOClipRectFix>::GetImpl'::`2'::impl) )
    CMILMatrix::Transform2DBoundsHelper<0>(a2, a4, &a4->left);
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, v17, &v17->left);
}
