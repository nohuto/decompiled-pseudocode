/*
 * XREFs of ?GetDeviceTransform@CRemoteRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1802767F0
 * Callers:
 *     ?GetDeviceTransform@CRemoteRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x180276800 (-GetDeviceTransform@CRemoteRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CRemoteRenderTarget::GetDeviceTransform(CRemoteRenderTarget *this)
{
  return (CRemoteRenderTarget *)((char *)this + 152);
}
