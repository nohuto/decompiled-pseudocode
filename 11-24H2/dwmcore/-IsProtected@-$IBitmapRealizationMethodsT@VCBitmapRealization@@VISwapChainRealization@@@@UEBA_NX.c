/*
 * XREFs of ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@UEBA_NXZ @ 0x1801E2270
 * Callers:
 *     ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EBA_NXZ @ 0x1802D7F60 (-IsProtected@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA.c)
 *     ?IsProtected@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA_NXZ @ 0x1802D9860 (-IsProtected@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::IsProtected(__int64 a1)
{
  return (*(_DWORD *)(a1 + 160) & 2) != 0;
}
