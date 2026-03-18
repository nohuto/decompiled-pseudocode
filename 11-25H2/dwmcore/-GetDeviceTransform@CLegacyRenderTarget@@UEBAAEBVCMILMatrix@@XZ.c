/*
 * XREFs of ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180086540
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?GetDeviceTransform@CLegacyRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x1802814A0 (-GetDeviceTransform@CLegacyRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CLegacyRenderTarget::GetDeviceTransform(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this + (*((_BYTE *)this + 19601) != 0 ? 30988LL : 30852LL));
}
