/*
 * XREFs of ?SetColorSpace@CD2DBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18022D300
 * Callers:
 *     ?SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802D7090 (-SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::SetColorSpace(CD2DBitmap *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  *((_DWORD *)this + 38) = a2;
}
