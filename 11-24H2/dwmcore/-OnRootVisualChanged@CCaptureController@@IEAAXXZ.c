/*
 * XREFs of ?OnRootVisualChanged@CCaptureController@@IEAAXXZ @ 0x1801ECA50
 * Callers:
 *     ?SetRootVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x180225F58 (-SetRootVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisua.c)
 * Callees:
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801ECAA0 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureController::OnRootVisualChanged(CCaptureController *this)
{
  CCaptureRenderTarget **v1; // rsi
  CCaptureRenderTarget **i; // rbx

  v1 = (CCaptureRenderTarget **)*((_QWORD *)this + 20);
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 19); i != v1; ++i )
    CCaptureRenderTarget::SetTargetVisual(*i, *((struct CVisual **)this + 13));
}
