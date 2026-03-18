/*
 * XREFs of ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802D7050
 * Callers:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1801C76BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  return IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::RemoveResourceNotifier(a1 - 240, a2);
}
