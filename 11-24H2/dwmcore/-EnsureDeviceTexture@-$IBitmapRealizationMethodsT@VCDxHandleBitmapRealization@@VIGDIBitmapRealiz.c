/*
 * XREFs of ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801DE410
 * Callers:
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D6BD0 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealiza.c)
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D7AC0 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@.c)
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D96B0 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGD_ea_1802D96B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::EnsureDeviceTexture(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
}
