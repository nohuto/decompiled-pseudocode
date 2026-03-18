/*
 * XREFs of ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C008F300
 * Callers:
 *     DwmSyncCaptureSurfaceBits @ 0x1C000887C (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C000C49C (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncNotifyMinimizing @ 0x1C001382C (DwmSyncNotifyMinimizing.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0013C90 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncDesktopSwitch @ 0x1C008F218 (DwmSyncDesktopSwitch.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C026D620 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncFlushWindowChanges @ 0x1C026D710 (DwmSyncFlushWindowChanges.c)
 *     DwmSyncHitTestQuery @ 0x1C026D7A0 (DwmSyncHitTestQuery.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C026D8D0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     DwmSyncSignalGhost @ 0x1C026DAE0 (DwmSyncSignalGhost.c)
 * Callees:
 *     <none>
 */

__int64 DwmSyncLPCAllowed(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned __int8)UserIsInVideoPnpCallout() )
    return (unsigned int)-1073741823;
  return v0;
}
