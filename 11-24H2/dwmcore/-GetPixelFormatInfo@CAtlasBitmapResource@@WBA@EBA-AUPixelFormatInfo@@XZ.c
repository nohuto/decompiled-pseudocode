/*
 * XREFs of ?GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA?AUPixelFormatInfo@@XZ @ 0x1802AC950
 * Callers:
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801EFD80 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealizatio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CAtlasBitmapResource::GetPixelFormatInfo((__int64 *)(a1 - 16), a2);
}
