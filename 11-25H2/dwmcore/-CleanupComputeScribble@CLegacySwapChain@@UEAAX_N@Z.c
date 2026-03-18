/*
 * XREFs of ?CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z @ 0x1802D2E50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1802187B4 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::CleanupComputeScribble(CLegacySwapChain *this, char a2)
{
  if ( a2 )
    CScribbleSwapChain::ReleaseComputeScribbleResources((CLegacySwapChain *)((char *)this - 256));
}
