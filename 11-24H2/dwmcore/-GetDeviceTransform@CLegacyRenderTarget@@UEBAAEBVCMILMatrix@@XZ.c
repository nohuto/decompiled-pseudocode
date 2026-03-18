/*
 * XREFs of ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180058460
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?GetDeviceTransform@CLegacyRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x1802767D0 (-GetDeviceTransform@CLegacyRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CLegacyRenderTarget::GetDeviceTransform(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this + (*((_BYTE *)this + 19217) != 0 ? 30604LL : 30468LL));
}
