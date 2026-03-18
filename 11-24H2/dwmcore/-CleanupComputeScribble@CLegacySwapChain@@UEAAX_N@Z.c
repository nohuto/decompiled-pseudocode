/*
 * XREFs of ?CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z @ 0x1802C9BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x18020F1AC (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::CleanupComputeScribble(CLegacySwapChain *this, char a2)
{
  if ( a2 )
    CScribbleSwapChain::ReleaseComputeScribbleResources((CLegacySwapChain *)((char *)this - 256));
}
