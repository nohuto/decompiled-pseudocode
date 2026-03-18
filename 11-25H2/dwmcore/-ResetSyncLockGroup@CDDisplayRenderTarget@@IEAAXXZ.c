/*
 * XREFs of ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x18020F47C
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18028A410 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ResetSyncLockGroup(CDDisplayRenderTarget *this)
{
  CSyncLockGroup **v1; // rbx

  v1 = (CSyncLockGroup **)((char *)this + 33896);
  if ( *((_QWORD *)this + 4237) )
  {
    CSyncLockGroup::RemoveRenderTarget(
      *v1,
      (struct IMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
    *v1 = 0LL;
  }
}
