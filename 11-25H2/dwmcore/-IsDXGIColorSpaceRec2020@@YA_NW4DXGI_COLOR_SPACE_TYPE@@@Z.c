/*
 * XREFs of ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180177490
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180176E04 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18017741C (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180189EF0 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1802742F8 (-BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDXGIColorSpaceRec2020(enum DXGI_COLOR_SPACE_TYPE a1)
{
  bool result; // al

  result = 0;
  switch ( a1 )
  {
    case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
    case DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020:
    case DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P2020:
    case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
    case DXGI_COLOR_SPACE_YCBCR_STUDIO_G2084_LEFT_P2020:
    case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
    case DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_TOPLEFT_P2020:
    case DXGI_COLOR_SPACE_YCBCR_STUDIO_G2084_TOPLEFT_P2020:
    case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020:
    case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
    case DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P2020:
    case DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}
