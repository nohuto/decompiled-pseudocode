/*
 * XREFs of ??9@YA_NAEBUtagRECT@@0@Z @ 0x180068578
 * Callers:
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180068270 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180068430 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180132160 (-IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?SetExtendedBounds@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180278974 (-SetExtendedBounds@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV-$TMilRect_@HUtagRECT.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
