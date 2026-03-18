/*
 * XREFs of ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x1802836D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028376C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUnregister(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER *a3)
{
  CIndirectSwapchainRenderTarget::Unregister(this);
  return 0LL;
}
