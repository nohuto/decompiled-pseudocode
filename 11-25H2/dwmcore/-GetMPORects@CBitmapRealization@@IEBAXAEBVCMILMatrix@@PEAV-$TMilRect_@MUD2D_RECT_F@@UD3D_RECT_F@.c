/*
 * XREFs of ?GetMPORects@CBitmapRealization@@IEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x180247C34
 * Callers:
 *     ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1802096C0 (-GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18002C920 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25E0 (-GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEAA_NXZ @ 0x1802868F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEA.c)
 */

void __fastcall CBitmapRealization::GetMPORects(unsigned int *a1, __int64 a2, float *a3, float *a4, float *a5)
{
  int *v9; // rax
  float v10; // xmm3_4
  int v11; // r10d
  int v12; // r9d
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  struct D2D_RECT_F v15; // [rsp+40h] [rbp-10h] BYREF

  v9 = (int *)CBitmapRealization::CalcSourceRect(a1);
  v13.left = 0.0;
  v13.top = 0.0;
  v10 = (float)*v9;
  *a3 = v10;
  v11 = v9[1];
  a3[1] = (float)v11;
  v12 = v9[2];
  a3[2] = (float)v12;
  LODWORD(v9) = v9[3];
  v13.right = (float)v12 - v10;
  a3[3] = (float)(int)v9;
  v13.bottom = (float)(int)v9 - (float)v11;
  CMILMatrix::Transform2DBoundsHelper<0>(a2, &v13, a5);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MPOClipRectFix>::GetImpl'::`2'::impl) )
  {
    if ( (a1[60] & 0xC000) == 0xC000 )
    {
      v14 = 0LL;
      CBitmapRealization::GetScaledLetterboxingMargins((__int64)a1, (__int64)&v14);
      v15.left = v13.left - *(float *)&v14;
      v15.top = v13.top - *((float *)&v14 + 1);
      v15.right = *((float *)&v14 + 2) + v13.right;
      v15.bottom = *((float *)&v14 + 3) + v13.bottom;
      CMILMatrix::Transform2DBoundsHelper<0>(a2, &v15, a4);
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a5;
    }
  }
}
