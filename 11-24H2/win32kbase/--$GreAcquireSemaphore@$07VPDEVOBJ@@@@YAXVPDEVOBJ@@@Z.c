/*
 * XREFs of ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x140013A10 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     GreLockDisplayDevice @ 0x140013BF0 (GreLockDisplayDevice.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140013C30 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B000 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140130840 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013926C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreAcquireSemaphore<8,PDEVOBJ>(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 48);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"DevLock", v1, 0LL);
  return GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v1);
}
