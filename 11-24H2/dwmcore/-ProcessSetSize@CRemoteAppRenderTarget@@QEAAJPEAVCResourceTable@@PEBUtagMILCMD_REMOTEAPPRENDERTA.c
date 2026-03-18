/*
 * XREFs of ?ProcessSetSize@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETSIZE@@@Z @ 0x180277ED0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x180281C48 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetSize(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct D2D_SIZE_U *a3)
{
  CRemoteAppRenderTarget::SetSize(this, a3 + 1);
  return 0LL;
}
