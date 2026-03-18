/*
 * XREFs of ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801E7F70
 * Callers:
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802DFE70 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealiza.c)
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E0D60 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@.c)
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E2950 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGD_ea_1802E2950.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::EnsureDeviceTexture(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
}
