/*
 * XREFs of ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180200AC0
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?GetDeviceTransform@CDDisplayRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x180281490 (-GetDeviceTransform@CDDisplayRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CDDisplayRenderTarget::GetDeviceTransform(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this + 19609) != 0 ? 30996LL : 30860LL));
}
