/*
 * XREFs of ?UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800D4510
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?GetInflation@?$CTargetDirtyBase@$07@@IEBAMXZ @ 0x1800F766C (-GetInflation@-$CTargetDirtyBase@$07@@IEBAMXZ.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1802844F0 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::UseSuperSample(CLegacyRenderTarget *this)
{
  return !*((_BYTE *)this + 19217) && *((_BYTE *)this + 30675);
}
