/*
 * XREFs of ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@UEBA_NXZ @ 0x1801EBF80
 * Callers:
 *     ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EBA_NXZ @ 0x1802E1200 (-IsProtected@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA.c)
 *     ?IsProtected@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA_NXZ @ 0x1802E2B00 (-IsProtected@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::IsProtected(__int64 a1)
{
  return (*(_DWORD *)(a1 + 160) & 2) != 0;
}
