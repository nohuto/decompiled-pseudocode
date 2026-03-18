/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WEI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802CD0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  return IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::AddResourceNotifier(a1 - 72, a2);
}
