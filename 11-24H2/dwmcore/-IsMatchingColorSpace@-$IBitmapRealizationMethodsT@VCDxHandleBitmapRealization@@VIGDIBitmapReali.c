/*
 * XREFs of ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802D7F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::IsMatchingColorSpace(
        __int64 a1,
        int a2)
{
  return IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::IsMatchingColorSpace(a1 - 256, a2);
}
