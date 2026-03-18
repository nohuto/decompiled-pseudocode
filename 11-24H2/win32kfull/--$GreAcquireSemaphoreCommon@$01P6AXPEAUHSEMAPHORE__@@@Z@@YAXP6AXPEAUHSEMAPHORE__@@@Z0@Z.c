/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8
 * Callers:
 *     GreOnCURSINFODestroy @ 0x14002CB50 (GreOnCURSINFODestroy.c)
 *     GreCreateSprite @ 0x140030280 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x140030374 (GreDeleteSprite.c)
 *     GreWindowLayoutComplete @ 0x1400873CC (GreWindowLayoutComplete.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14010A148 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015AA00 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401BCA70 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreIsWindowResizeInProgress @ 0x1401C90F0 (GreIsWindowResizeInProgress.c)
 *     bSetDevPreviewRect @ 0x1401D713C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     GreWindowResizeComplete @ 0x1401DA938 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401DAAE0 (GreWindowResizeStarted.c)
 *     bMoveDevPreviewRect @ 0x1401E09F0 (bMoveDevPreviewRect.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E2664 (GreWindowBeginLayoutUpdate.c)
 *     bMoveDevDragRect @ 0x1401E7398 (bMoveDevDragRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     GreEnableWindowResizeOptimization @ 0x1401F258C (GreEnableWindowResizeOptimization.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140060E40 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<2>();
}
