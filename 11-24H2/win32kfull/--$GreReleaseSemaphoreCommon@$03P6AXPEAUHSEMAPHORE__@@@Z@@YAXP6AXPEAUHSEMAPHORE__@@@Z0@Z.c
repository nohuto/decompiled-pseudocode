/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x140022D88 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     GreMovePointer @ 0x1400240B0 (GreMovePointer.c)
 *     EngpMovePointer @ 0x140024AC8 (EngpMovePointer.c)
 *     GreSetPointer @ 0x1400285BC (GreSetPointer.c)
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x14002AE50 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     GreOnCURSINFODestroy @ 0x14002CB50 (GreOnCURSINFODestroy.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     EngSetPointerShape @ 0x14016B2D0 (EngSetPointerShape.c)
 *     GreRealizeDefaultPalette @ 0x1401E60CC (GreRealizeDefaultPalette.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1402073C4 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     bDrvReconnect @ 0x1402693DC (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026A1E0 (bDrvShadowDisconnect.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x14030F080 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140310FB4 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140324550 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     GreDrvReconnect @ 0x14033D068 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033D750 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033D970 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033DBD0 (vDrvInvalidateRect.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"Pointer", a2);
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
    if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xC))-- == 1 )
      *v9 &= ~0x10uLL;
    if ( !*v9 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
