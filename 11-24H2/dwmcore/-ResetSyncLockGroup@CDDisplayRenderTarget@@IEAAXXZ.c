/*
 * XREFs of ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x180188FBC
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180188F50 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18027F5F0 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180247A80 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ResetSyncLockGroup(CDDisplayRenderTarget *this)
{
  CSyncLockGroup **v1; // rbx

  v1 = (CSyncLockGroup **)((char *)this + 33512);
  if ( *((_QWORD *)this + 4189) )
  {
    CSyncLockGroup::RemoveRenderTarget(
      *v1,
      (struct IMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
    *v1 = 0LL;
  }
}
