/*
 * XREFs of gsl::final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___::_final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___ @ 0x18028CCCC
 * Callers:
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall gsl::final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___::_final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___(
        __int64 a1)
{
  __int64 v1; // r9
  char v2; // r10
  __int64 result; // rax

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( **(_BYTE **)a1 )
    {
      CDrawingContext::PopRenderOptionsInternal(**(CDrawingContext ***)(a1 + 8), 1);
      **(_BYTE **)v1 = v2;
    }
    return CDrawingContext::EndFrame(**(CD3DDevice ****)(v1 + 8));
  }
  return result;
}
