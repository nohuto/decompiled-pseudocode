/*
 * XREFs of ?IsProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801DAC40
 * Callers:
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 148);
}
