/*
 * XREFs of ?RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800972E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028376C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::RenderTargetDirty(
        CIndirectSwapchainRenderTarget *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = COffScreenRenderTarget::RenderTargetDirty(this, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x10Au, 0LL);
    if ( v6 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
  }
  else if ( *a3 )
  {
    *((_BYTE *)this + 2803) = 1;
  }
  return v6;
}
