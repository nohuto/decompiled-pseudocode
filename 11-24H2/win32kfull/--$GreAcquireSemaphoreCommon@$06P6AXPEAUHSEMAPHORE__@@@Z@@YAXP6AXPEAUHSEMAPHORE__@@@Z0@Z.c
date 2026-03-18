/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C
 * Callers:
 *     GreZorderSprite @ 0x140025478 (GreZorderSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x14002A590 (vCleanupUMWindowlessSprite.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x140039684 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x140039920 (GreNotifyDirtySprite.c)
 *     GreWindowLayoutComplete @ 0x1400873CC (GreWindowLayoutComplete.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015AA00 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     GreSfmOpenCompositorRef @ 0x14019C97C (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x14019CA8C (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x14019CCB8 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401BCA70 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C83CC (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1401C90F0 (GreIsWindowResizeInProgress.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E2664 (GreWindowBeginLayoutUpdate.c)
 *     GreEnableWindowResizeOptimization @ 0x1401F258C (GreEnableWindowResizeOptimization.c)
 *     GreSfmDwmStartup @ 0x1402157FC (GreSfmDwmStartup.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<7>();
}
