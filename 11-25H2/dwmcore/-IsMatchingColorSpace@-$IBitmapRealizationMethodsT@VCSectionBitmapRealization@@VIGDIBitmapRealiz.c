/*
 * XREFs of ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802DFFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::IsMatchingColorSpace(
        __int64 a1,
        int a2)
{
  return IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::IsMatchingColorSpace(a1 - 312, a2);
}
