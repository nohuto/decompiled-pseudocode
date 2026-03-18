/*
 * XREFs of ?GetSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801E06D0
 * Callers:
 *     ?GetSize@CD2DBitmap@@WBA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D67B0 (-GetSize@CD2DBitmap@@WBA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD2DBitmap::GetSize(CD2DBitmap *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 18);
  a2[1] = *((_DWORD *)this + 19);
  return (struct D2D_SIZE_U)a2;
}
