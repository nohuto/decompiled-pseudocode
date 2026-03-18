/*
 * XREFs of ?ProcessUpdateSDRToHDRMultiplier@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x180278010
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180247F2C (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateSDRToHDRMultiplier(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER *a3)
{
  CDDisplayRenderTarget::SetSDRBoost(this, *((float *)a3 + 2));
  return 0LL;
}
