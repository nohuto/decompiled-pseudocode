/*
 * XREFs of ?GetDeviceTransform@CDDARenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180098B30
 * Callers:
 *     ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x180098A10 (-GetOcclusionContext@-$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CDDARenderTarget::GetDeviceTransform(CDDARenderTarget *this)
{
  return (CDDARenderTarget *)((char *)this + 180);
}
