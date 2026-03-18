/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C001C510 (GreSuspendDirectDraw.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C005E410 (GreCreatePatternBrushInternal.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00A67F0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0050 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD50 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C015F5F0 (NtGdiGetDeviceCapsAll.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0167204 (DrvFunctionalizeDisplayConfig.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C130 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreSetMagicColors @ 0x1C016C72C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v1 + 80));
  v2 = *(struct _ERESOURCE **)(v1 + 80);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion();
  }
}
