/*
 * XREFs of ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18021B950
 * Callers:
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802CD730 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EAAXPEBVIDev.c)
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802CDDC0 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAA.c)
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802CDDE0 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAX.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__fastcall IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::RemoveResourceNotifier(__int64 a1, __int64 a2)
{
  return CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
           a1,
           a2);
}
