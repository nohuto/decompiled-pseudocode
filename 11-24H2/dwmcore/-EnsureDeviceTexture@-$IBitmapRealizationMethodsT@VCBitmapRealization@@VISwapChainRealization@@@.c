/*
 * XREFs of ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D7AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::EnsureDeviceTexture(
        __int64 a1)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::EnsureDeviceTexture(a1 - 256);
}
