/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802CD7C0
 * Callers:
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x18005BA8C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  return IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::AddResourceNotifier(a1 - 240, a2);
}
