/*
 * XREFs of ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x140022D88 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140023090 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreMovePointer @ 0x1400240B0 (GreMovePointer.c)
 *     EngpMovePointer @ 0x140024AC8 (EngpMovePointer.c)
 *     GreSetPointer @ 0x1400285BC (GreSetPointer.c)
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     GreOnCURSINFODestroy @ 0x14002CB50 (GreOnCURSINFODestroy.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     EngSetPointerShape @ 0x14016B2D0 (EngSetPointerShape.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x1401D99B8 (--0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z.c)
 *     GreDesktopSwitch @ 0x1401E15CC (GreDesktopSwitch.c)
 *     GreRealizeDefaultPalette @ 0x1401E60CC (GreRealizeDefaultPalette.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1402073C4 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<4>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  result = v1 + 8;
  v4 = (__int64 *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v4 )
  {
    v5 = *v4;
    if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v5 & 0x10) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v5, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, (unsigned int)v10);
    }
    LOBYTE(v5) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xC);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xC) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v4 |= 0x10uLL;
  }
  return result;
}
