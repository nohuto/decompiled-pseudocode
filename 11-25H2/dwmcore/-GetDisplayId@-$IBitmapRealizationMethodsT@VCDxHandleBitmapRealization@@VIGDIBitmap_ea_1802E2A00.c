/*
 * XREFs of ?GetDisplayId@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AVDisplayId@@XZ @ 0x1802E2A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetDisplayId(
        __int64 a1,
        _DWORD *a2)
{
  return IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::GetDisplayId(a1 - 320, a2);
}
