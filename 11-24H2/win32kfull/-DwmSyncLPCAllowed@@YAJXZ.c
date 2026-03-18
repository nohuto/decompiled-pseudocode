/*
 * XREFs of ?DwmSyncLPCAllowed@@YAJXZ @ 0x14010B4C0
 * Callers:
 *     DwmSyncFlushWindowChanges @ 0x14010AAB0 (DwmSyncFlushWindowChanges.c)
 *     DwmSyncDesktopSwitch @ 0x14010AB40 (DwmSyncDesktopSwitch.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x14010AC48 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     DwmSyncCaptureSurfaceBits @ 0x14010AE70 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x14010B188 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncHitTestQuery @ 0x14010B378 (DwmSyncHitTestQuery.c)
 *     DwmSyncNotifyMinimizing @ 0x14010B7E8 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x14010B8E0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x14025C770 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncSignalGhost @ 0x1403243D0 (DwmSyncSignalGhost.c)
 * Callees:
 *     <none>
 */

__int64 DwmSyncLPCAllowed(void)
{
  return (unsigned __int8)UserIsInVideoPnpCallout() != 0 ? 0xC0000001 : 0;
}
