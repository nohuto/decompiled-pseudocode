/*
 * XREFs of ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AVDisplayId@@XZ @ 0x1801CD310
 * Callers:
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBA@EBA?AVDisplayId@@XZ @ 0x1802CD500 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBA@EBA-AVDisplayId.c)
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AVDisplayId@@XZ @ 0x1802CDA20 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AVDisplayId.c)
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AVDisplayId@@XZ @ 0x1802CDA40 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AVDisplayId.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 156);
  return a2;
}
