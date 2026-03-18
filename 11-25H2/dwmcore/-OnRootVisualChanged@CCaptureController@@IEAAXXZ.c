/*
 * XREFs of ?OnRootVisualChanged@CCaptureController@@IEAAXXZ @ 0x1801F94F0
 * Callers:
 *     ?SetRootVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x180231BC8 (-SetRootVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisua.c)
 * Callees:
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801F9540 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureController::OnRootVisualChanged(CCaptureController *this)
{
  CCaptureRenderTarget **v1; // rsi
  CCaptureRenderTarget **i; // rbx

  v1 = (CCaptureRenderTarget **)*((_QWORD *)this + 20);
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 19); i != v1; ++i )
    CCaptureRenderTarget::SetTargetVisual(*i, *((struct CVisual **)this + 13));
}
