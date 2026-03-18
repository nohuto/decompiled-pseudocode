/*
 * XREFs of ?ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE@@@Z @ 0x180282978
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18028BCC0 (-ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetAlphaMode(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 33) )
  {
    *((_DWORD *)this + 33) = v3;
    CRemoteAppRenderTarget::ForceFullDirty((CRemoteAppRenderTarget *)((char *)this + 96));
  }
  return 0LL;
}
