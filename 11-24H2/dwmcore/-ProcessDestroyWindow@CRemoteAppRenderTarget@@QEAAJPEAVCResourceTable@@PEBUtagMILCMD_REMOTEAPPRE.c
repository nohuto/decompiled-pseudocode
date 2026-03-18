/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1802811E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18021A0F0 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802814CC (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x180281AF8 (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CRemoteAppRenderTarget *v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[10]; // [rsp+28h] [rbp-50h] BYREF

  v6 = 4LL;
  memset_0(v7, 0, 0x40uLL);
  v7[0] = *((_QWORD *)this + 326);
  CRemoteAppRenderTarget::SendMetaData(v4, (const struct _DWMIndirectMetaData *)&v6);
  CRenderTarget::RemoveFromRenderTargetManager(this);
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  *((_QWORD *)this + 326) = 0LL;
  return 0LL;
}
