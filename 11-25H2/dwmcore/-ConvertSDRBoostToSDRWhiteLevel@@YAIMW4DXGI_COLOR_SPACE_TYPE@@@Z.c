/*
 * XREFs of ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C1D88
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C1AE0 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertSDRBoostToSDRWhiteLevel(float a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  bool v6; // zf
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 1.0) & _xmm) < 0.0000011920929 || a2 == 1 )
    return 0LL;
  if ( a2 <= 15 )
  {
    if ( a2 == 15 )
      return 0LL;
    v8 = a2 - 3;
    if ( !v8 )
      return 0LL;
    v9 = v8 - 7;
    if ( !v9 )
      return 0LL;
    v10 = v9 - 1;
    if ( !v10 )
      return 0LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 0LL;
    v7 = v11 - 1;
    v6 = v7 == 0;
  }
  else
  {
    v3 = a2 - 16;
    if ( !v3 )
      return 0LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 0LL;
    v5 = v4 - 4;
    if ( !v5 )
      return 0LL;
    v7 = v5 - 2;
    v6 = v7 == 0;
  }
  if ( v6 || v7 == 1 )
    return 0LL;
  return (unsigned int)(int)(float)(a1 * 80.0);
}
