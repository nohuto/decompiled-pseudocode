/*
 * XREFs of gsl::final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___::_final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___ @ 0x18021EAEC
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall gsl::final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___::_final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::EndFrame(**(CD3DDevice ****)a1);
  return result;
}
