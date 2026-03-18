/*
 * XREFs of ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801F9540
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F8F24 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F9120 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?OnRootVisualChanged@CCaptureController@@IEAAXXZ @ 0x1801F94F0 (-OnRootVisualChanged@CCaptureController@@IEAAXXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1801AC95C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetTargetVisual(struct CMILPoolResource **this, struct CVisual *a2)
{
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 394, a2);
  CCaptureRenderTarget::ReevaluateRootVisual((CCaptureRenderTarget *)this);
}
