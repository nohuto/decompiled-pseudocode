/*
 * XREFs of gsl::final_action__lambda_a963e2fac1282037e8b8d37b07854811___::_final_action__lambda_a963e2fac1282037e8b8d37b07854811___ @ 0x180281F34
 * Callers:
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

_BYTE *__fastcall gsl::final_action__lambda_a963e2fac1282037e8b8d37b07854811___::_final_action__lambda_a963e2fac1282037e8b8d37b07854811___(
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
