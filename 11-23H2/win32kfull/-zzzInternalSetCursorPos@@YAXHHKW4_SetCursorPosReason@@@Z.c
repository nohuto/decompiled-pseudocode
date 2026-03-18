/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001CEA8
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C001CC80 (zzzResetSharedDesktops.c)
 *     EditionInternalSetCursorPos @ 0x1C001CE90 (EditionInternalSetCursorPos.c)
 *     zzzEnableDwmPointerSupport @ 0x1C001FFBC (zzzEnableDwmPointerSupport.c)
 *     xxxUserResetDisplayDevice @ 0x1C0135180 (xxxUserResetDisplayDevice.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A82B8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01B6B90 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BAF2C (xxxCallJournalPlaybackHook.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C001CF84 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001D69C (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C00A3310 (IsCurrentDesktopComposed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(v7, v7, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v7[0];
  CCursorClip::BoundPoint(gpCursorClip, v7[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  CursorApiRouter::MovePointer(
    gpsi,
    *(HDEV *)(gpDispInfo + 40LL),
    *(_DWORD *)(gpsi + 4960LL),
    *(_DWORD *)(gpsi + 4964LL),
    1u);
  CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
