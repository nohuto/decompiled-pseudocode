/*
 * XREFs of ?RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C5330
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028ED1C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x111u, 0LL);
    if ( v6 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
  }
  else if ( *a3 )
  {
    *((_BYTE *)this + 2803) = 1;
  }
  return v6;
}
