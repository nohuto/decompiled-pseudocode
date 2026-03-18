/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1400146F8 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCaps @ 0x14001E030 (NtGdiGetDeviceCaps.c)
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1400872DC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1400B79C0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140153090 (DrvFunctionalizeDisplayConfig.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401549C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(HSEMAPHORE *a1)
{
  HSEMAPHORE v2; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  char v8; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v12; // rcx
  int v13; // r8d
  int v14; // eax

  v2 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 624LL);
  *a1 = v2;
  EngAcquireSemaphoreShared(v2);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = (__int64 *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v6 )
  {
    if ( (*v6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v6 & 2) == 0 )
    {
      v12 = 0LL;
      v13 = 37;
      do
      {
        v14 = v12;
        v7 = *v6;
        if ( !_bittest64(&v7, v12) )
          v14 = v13;
        ++v12;
        v13 = v14;
      }
      while ( v12 < 0x40 );
      if ( v14 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v8 = *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 9);
    *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 9) = v8 + 1;
    if ( !v8 )
      *v6 |= 2uLL;
  }
  return a1;
}
