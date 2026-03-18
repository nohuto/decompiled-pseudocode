/*
 * XREFs of ?ProcessCreate@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_CREATE@@@Z @ 0x18028B2EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::ProcessCreate(
        CRemoteRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_CREATE *a3)
{
  *(_QWORD *)((char *)this + 308) = *((_QWORD *)a3 + 1);
  return 0LL;
}
