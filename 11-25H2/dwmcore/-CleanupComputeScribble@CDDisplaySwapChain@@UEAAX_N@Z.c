/*
 * XREFs of ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z @ 0x1802C7D10
 * Callers:
 *     ?CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z @ 0x18028A0C0 (-CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDisplaySwapChain::CleanupComputeScribble(CDDisplaySwapChain *this, char a2)
{
  if ( !a2 && *((_BYTE *)this + 410) )
  {
    *((_BYTE *)this + 410) = 0;
    *((_BYTE *)this + 408) = 1;
  }
  CScribbleSwapChain::ReleaseComputeScribbleResources((CDDisplaySwapChain *)((char *)this - 256));
}
