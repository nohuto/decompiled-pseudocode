/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801C0CE0
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x18013F210 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281D70 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281D80 (-GetTargetId@CDDisplayRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CDDisplayRenderTarget::GetTargetId(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + 33432);
}
