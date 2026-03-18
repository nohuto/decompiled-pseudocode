/*
 * XREFs of ?CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z @ 0x18028A0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z @ 0x1802C7D10 (-CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z.c)
 */

void __fastcall CDDisplayRenderTarget::CleanupComputeScribble(CDDisplayRenderTarget *this, bool a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    CDDisplaySwapChain::CleanupComputeScribble((CDDisplaySwapChain *)(v2 + 256), a2);
}
