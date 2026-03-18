/*
 * XREFs of ?GetDeviceTransform@CDDARenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1800C68A0
 * Callers:
 *     ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x1800C6780 (-GetOcclusionContext@-$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CDDARenderTarget::GetDeviceTransform(CDDARenderTarget *this)
{
  return (CDDARenderTarget *)((char *)this + 180);
}
