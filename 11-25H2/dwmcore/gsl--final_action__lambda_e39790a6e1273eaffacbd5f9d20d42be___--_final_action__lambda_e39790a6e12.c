/*
 * XREFs of gsl::final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___::_final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___ @ 0x18028CC84
 * Callers:
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DE74 (-RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingCont.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

_BYTE *__fastcall gsl::final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___::_final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___(
        __int64 a1)
{
  char v1; // r10
  __int64 v2; // r9
  _BYTE *result; // rax

  v1 = 0;
  v2 = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( **(_BYTE **)a1 )
      CDrawingContext::PopRenderOptionsInternal(**(CDrawingContext ***)(a1 + 8), 1);
    result = *(_BYTE **)(v2 + 16);
    if ( *result != v1 )
      return (_BYTE *)CDrawingContext::EndFrame(**(CD3DDevice ****)(v2 + 8));
  }
  return result;
}
