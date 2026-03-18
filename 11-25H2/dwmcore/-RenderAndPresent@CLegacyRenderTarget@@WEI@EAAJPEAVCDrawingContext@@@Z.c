/*
 * XREFs of ?RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180282E30
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::RenderAndPresent(__int64 a1, struct CDrawingContext *a2)
{
  return CLegacyRenderTarget::RenderAndPresent((__m128i *)(a1 - 72), a2);
}
