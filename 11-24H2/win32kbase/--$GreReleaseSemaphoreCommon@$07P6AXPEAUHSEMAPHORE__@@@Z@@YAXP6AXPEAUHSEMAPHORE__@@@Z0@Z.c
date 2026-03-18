/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     DrvEnableMDEV @ 0x140012A70 (DrvEnableMDEV.c)
 *     ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x140013AC0 (-DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z.c)
 *     GreUnlockDisplayDevice @ 0x140013C10 (GreUnlockDisplayDevice.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012AB08 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013926C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140159430 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401CB0F0 (DrvGetRenderAdapterLuidFromHDEV.c)
 *     EngDeleteDriverObj @ 0x1401CD5B0 (EngDeleteDriverObj.c)
 *     HDXDrvEscape @ 0x1401CE760 (HDXDrvEscape.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _GRETHREAD *v4; // rax

  EtwTraceGreLockReleaseSemaphore(L"DevLock", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 16))-- == 1 )
      *(_QWORD *)v4 &= ~0x100uLL;
  }
  return a1(a2);
}
