/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x1801FDF30
 * Callers:
 *     ?Release@CD3DSurface@@WHI@EAAKXZ @ 0x1802C8D30 (-Release@CD3DSurface@@WHI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x1802CD6F0 (-Release@CDeviceTextureTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WFA@EAAKXZ @ 0x1802CD700 (-Release@CDeviceTextureTarget@@WFA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WFI@EAAKXZ @ 0x1802CD710 (-Release@CDeviceTextureTarget@@WFI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x1802CD720 (-Release@CDeviceTextureTarget@@WGA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802CDD40 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802CDD60 (-Release@CDeviceTextureTarget@@WBAI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802CDD80 (-Release@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802CDDA0 (-Release@CDeviceTextureTarget@@WPI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(this);
}
