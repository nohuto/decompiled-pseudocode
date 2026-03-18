/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x14002AE50 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     GreAdjustSpriteDirtyAccum @ 0x140039684 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x140039920 (GreNotifyDirtySprite.c)
 *     GreWindowLayoutComplete @ 0x1400873CC (GreWindowLayoutComplete.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1400CE900 (GreAddBitmapD3DDirtyRgn.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015AA00 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
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
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x1403216AC (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140321770 (GreConfirmWindowResizeCommit.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x140321980 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreGetHwndUpdateIds @ 0x140321B48 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetPresentFlags @ 0x140321CA0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140321DA4 (GreHLsurfSetUpdateId.c)
 *     GreSetHwndPresentFlags @ 0x140321F68 (GreSetHwndPresentFlags.c)
 *     GreSfmGenerateMoveData @ 0x140330FDC (GreSfmGenerateMoveData.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"DwmState", a2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = v5 + 8;
  v8 = -v5;
  v9 = (_QWORD *)(v7 & -(__int64)(v8 != 0));
  if ( v9 )
  {
    if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xF))-- == 1 )
      *v9 &= ~0x80uLL;
    if ( !*v9 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
