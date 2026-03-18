/*
 * XREFs of ?GetD2DBitmap@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802CD9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetD2DBitmap(
        __int64 a1,
        struct ID2D1Bitmap1 **a2,
        char a3)
{
  return CD2DBitmap::GetD2DBitmap((CD2DBitmap *)(a1 - 168), a2, a3);
}
