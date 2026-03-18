/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006FD0 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00081A8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C0009364 (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00097F8 (GreBeginGdiRenderingToDxSurface.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C000BD90 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiGetMonitorID @ 0x1C0010750 (NtGdiGetMonitorID.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C00140D4 (GreCreateBitmapFromDxSurface.c)
 *     GreEnableEUDC @ 0x1C001BD38 (GreEnableEUDC.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00476E0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C005ACD0 (GreLddmProcessDesktopSwitch.c)
 *     GreRealizeDefaultPalette @ 0x1C0093BC4 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0097B90 (GreGetSystemPaletteUse.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C00A0D98 (GreDxgkPreSessionDisconnected.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00B3D90 (vCleanupUMWindowlessSprite.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C00C2598 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     GreAccNotifyWindow @ 0x1C00C293C (GreAccNotifyWindow.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00CCB94 (GreSetRedirectionSurfaceSignaling.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0104C40 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C010916C (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C011B9CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011C144 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C02651C0 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02657B0 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02658F8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026724C (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C02673B4 (GreHLsurfSetUpdateId.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026B1C4 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C026DDCC (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C026E150 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C026E9F0 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C026F620 (GreDxDwmShutdown.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02AD744 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     GreCreateHalftonePalette @ 0x1C02D0A00 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02D0C60 (GreGetSystemPaletteEntries.c)
 *     GreRealizePalette @ 0x1C02D0D2C (GreRealizePalette.c)
 *     GreSetSystemPaletteUse @ 0x1C02D1694 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02D1F70 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D3A10 (NtGdiExtFloodFill.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D48B0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02D808C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DD32C (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     GreGetBitmapDimension @ 0x1C02DDB0C (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02DDC2C (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  v1 = Gre::Base::Globals(this);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 10));
}
