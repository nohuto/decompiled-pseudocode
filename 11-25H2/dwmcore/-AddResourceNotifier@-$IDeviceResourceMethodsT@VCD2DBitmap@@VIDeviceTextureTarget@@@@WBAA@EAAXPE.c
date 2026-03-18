/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802D6A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  return IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::AddResourceNotifier(a1 - 256, a2);
}
