/*
 * XREFs of ?GetDeviceTransform@CRemoteRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1802814C0
 * Callers:
 *     ?GetDeviceTransform@CRemoteRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x1802814D0 (-GetDeviceTransform@CRemoteRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CRemoteRenderTarget::GetDeviceTransform(CRemoteRenderTarget *this)
{
  return (CRemoteRenderTarget *)((char *)this + 152);
}
