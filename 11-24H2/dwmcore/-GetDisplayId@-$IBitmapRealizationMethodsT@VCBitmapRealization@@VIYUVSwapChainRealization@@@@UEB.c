/*
 * XREFs of ?GetDisplayId@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@UEBA?AVDisplayId@@XZ @ 0x1801D9AB0
 * Callers:
 *     ?GetDisplayId@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA?AVDisplayId@@XZ @ 0x1802D7E40 (-GetDisplayId@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@.c)
 *     ?GetDisplayId@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AVDisplayId@@XZ @ 0x1802D9760 (-GetDisplayId@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmap_ea_1802D9760.c)
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
