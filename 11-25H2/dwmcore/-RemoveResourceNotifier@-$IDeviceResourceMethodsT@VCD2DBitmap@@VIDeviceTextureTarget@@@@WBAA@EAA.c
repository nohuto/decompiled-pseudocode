/*
 * XREFs of ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802D7030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  return IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::RemoveResourceNotifier(a1 - 256, a2);
}
