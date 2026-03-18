/*
 * XREFs of ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBA?AU_LUID@@XZ @ 0x1802CD980
 * Callers:
 *     ?GetAdapterLuid@CRenderTargetBitmap@@UEBA?AU_LUID@@XZ @ 0x18005C4E0 (-GetAdapterLuid@CRenderTargetBitmap@@UEBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid((_QWORD *)(a1 - 240), a2);
}
