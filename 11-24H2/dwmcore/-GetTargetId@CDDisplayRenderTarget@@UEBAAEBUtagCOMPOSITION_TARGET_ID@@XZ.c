/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1800EDFC0
 * Callers:
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1800EDAB0 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180277090 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802770A0 (-GetTargetId@CDDisplayRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CDDisplayRenderTarget::GetTargetId(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + 33048);
}
