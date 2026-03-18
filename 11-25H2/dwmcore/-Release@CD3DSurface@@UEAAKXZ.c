/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x18020A8D0
 * Callers:
 *     ?Release@CD3DSurface@@WHI@EAAKXZ @ 0x1802D1FB0 (-Release@CD3DSurface@@WHI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x1802D6960 (-Release@CDeviceTextureTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WFA@EAAKXZ @ 0x1802D6970 (-Release@CDeviceTextureTarget@@WFA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WFI@EAAKXZ @ 0x1802D6980 (-Release@CDeviceTextureTarget@@WFI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x1802D6990 (-Release@CDeviceTextureTarget@@WGA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802D6FD0 (-Release@CDeviceTextureTarget@@WBAI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802D6FF0 (-Release@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802D7010 (-Release@CDeviceTextureTarget@@WPI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(this);
}
