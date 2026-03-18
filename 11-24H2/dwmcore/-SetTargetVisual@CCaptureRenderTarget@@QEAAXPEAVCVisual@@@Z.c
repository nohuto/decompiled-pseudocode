/*
 * XREFs of ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801ECAA0
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC484 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC680 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?OnRootVisualChanged@CCaptureController@@IEAAXXZ @ 0x1801ECA50 (-OnRootVisualChanged@CCaptureController@@IEAAXXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x18018E67C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetTargetVisual(struct CMILPoolResource **this, struct CVisual *a2, __int64 a3)
{
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 394, (__int64)a2, a3);
  CCaptureRenderTarget::ReevaluateRootVisual((CCaptureRenderTarget *)this);
}
