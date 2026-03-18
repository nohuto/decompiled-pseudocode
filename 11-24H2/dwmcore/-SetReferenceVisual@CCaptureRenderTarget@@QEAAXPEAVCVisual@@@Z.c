/*
 * XREFs of ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801EC920
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC484 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC680 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?SetReferenceVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x180279D38 (-SetReferenceVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVC.c)
 * Callees:
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x18018E67C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetReferenceVisual(
        struct CMILPoolResource **this,
        struct CVisual *a2,
        __int64 a3)
{
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 370, (__int64)a2, a3);
  CCaptureRenderTarget::ReevaluateRootVisual((CCaptureRenderTarget *)this);
}
