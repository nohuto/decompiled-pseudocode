/*
 * XREFs of ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278
 * Callers:
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x140013A10 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x140013AC0 (-DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x140023260 (hdevEnumerateDisplayOnly.c)
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1400872DC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngAssertGdiOutput @ 0x140115C20 (DxgkEngAssertGdiOutput.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x140124A90 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1401CD200 (DxgkEngFindViewDesktopPosition.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0BC0 (-DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

PDEV *__fastcall hdevEnumerate<1>(PDEV *this)
{
  __int64 *v2; // rsi
  struct _ERESOURCE *v3; // rbx
  int v4; // r8d
  PDEV *v5; // rbp
  PDEV *v6; // rcx
  struct _ERESOURCE *v7; // rbx
  struct _GRETHREAD *v8; // rax
  PDEV *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 **)(W32GetSessionState(this) + 88);
  v3 = (struct _ERESOURCE *)*v2;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"DriverMgmt", *v2, 0);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<19>();
  v5 = 0LL;
  v11 = this;
  if ( this )
    v6 = *(PDEV **)this;
  else
    v6 = (PDEV *)v2[481];
  while ( v6 )
  {
    if ( (*((_DWORD *)v6 + 10) & 1) != 0 )
    {
      v5 = v6;
      PDEV::IncrementClientReferenceCount(v6);
      break;
    }
    v6 = *(PDEV **)v6;
  }
  if ( this )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *v2);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v11);
      return v5;
    }
    PDEV::DecrementClientReferenceCountFastOpt(this, (struct Gre::Base::SESSION_GLOBALS *)v2);
  }
  v7 = (struct _ERESOURCE *)*v2;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DriverMgmt", *v2, v4);
  v8 = GreGetCurrentThreadCrossSessionCheck();
  if ( v8 )
  {
    if ( (*((_BYTE *)v8 + 27))-- == 1 )
      *(_QWORD *)v8 &= ~0x80000uLL;
  }
  GreReleaseSemaphoreSharedInternal(v7);
  return v5;
}
