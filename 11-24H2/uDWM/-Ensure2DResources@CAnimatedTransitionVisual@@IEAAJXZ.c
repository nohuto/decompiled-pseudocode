/*
 * XREFs of ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017580
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800176CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180015B98 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure2DResources(struct CMatrixTransformProxy **this)
{
  unsigned int v1; // ebx
  int MatrixTransformProxy; // eax

  v1 = 0;
  if ( !this[36] )
  {
    MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             this + 36);
    v1 = MatrixTransformProxy;
    if ( MatrixTransformProxy < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MatrixTransformProxy, 0x41Du, 0LL);
  }
  return v1;
}
