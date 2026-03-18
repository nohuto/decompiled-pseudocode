/*
 * XREFs of ?GetDisplayId@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@UEBA?AVDisplayId@@XZ @ 0x1801E5710
 * Callers:
 *     ?GetDisplayId@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA?AVDisplayId@@XZ @ 0x1802E10E0 (-GetDisplayId@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@.c)
 *     ?GetDisplayId@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AVDisplayId@@XZ @ 0x1802E2A00 (-GetDisplayId@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmap_ea_1802E2A00.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::GetDisplayId(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 216);
  return a2;
}
