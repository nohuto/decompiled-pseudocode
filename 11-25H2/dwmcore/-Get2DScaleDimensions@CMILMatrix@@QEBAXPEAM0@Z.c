/*
 * XREFs of ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180115540
 * Callers:
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180114778 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180115728 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1801774E8 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180298130 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 *     ?GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z @ 0x1802BC608 (-GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

void __fastcall CMILMatrix::Get2DScaleDimensions(CMILMatrix *this, float *a2, float *a3)
{
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm0_4

  v6 = (float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1));
  if ( v6 < 0.0 )
    v7 = sqrtf_0(v6);
  else
    v7 = fsqrt(v6);
  v8 = (float)(*((float *)this + 4) * *((float *)this + 4)) + (float)(*((float *)this + 5) * *((float *)this + 5));
  if ( v8 < 0.0 )
    v9 = sqrtf_0(v8);
  else
    v9 = fsqrt(v8);
  *a2 = v7;
  *a3 = v9;
}
