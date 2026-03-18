/*
 * XREFs of ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EBA_NXZ @ 0x1802E1200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::IsProtected(__int64 a1)
{
  return IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::IsProtected(a1 - 256);
}
