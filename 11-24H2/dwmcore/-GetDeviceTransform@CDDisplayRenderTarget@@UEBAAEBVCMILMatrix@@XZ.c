/*
 * XREFs of ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1801F41A0
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?GetDeviceTransform@CDDisplayRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x1802767C0 (-GetDeviceTransform@CDDisplayRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CDDisplayRenderTarget::GetDeviceTransform(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this + 19225) != 0 ? 30612LL : 30476LL));
}
