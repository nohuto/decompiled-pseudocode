/*
 * XREFs of ?IsProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801E5DC0
 * Callers:
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 148);
}
