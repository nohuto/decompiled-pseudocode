/*
 * XREFs of PostShellHookMessagesEx @ 0x140067280
 * Callers:
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     EditionPostShellHookMessages @ 0x140067680 (EditionPostShellHookMessages.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1400690E0 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     RemoveWindowFullScreen @ 0x14020EDBC (RemoveWindowFullScreen.c)
 *     xxxRedrawFrameAndHook @ 0x140217A58 (xxxRedrawFrameAndHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x14021E1C0 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x140255FF0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140270660 (-RotationLockTogglePressed@CRotationMgr@@UEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ @ 0x140270980 (-xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ.c)
 *     ?PTPEnableHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140273860 (-PTPEnableHotkeyCallback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?WinlogonWinSpaceCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140273C20 (-WinlogonWinSpaceCallback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140066E58 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall PostShellHookMessagesEx(LastWokenThread *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rax
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v2 = (unsigned int)a1;
  if ( (_DWORD)a1 == 12 )
  {
    v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        2,
        14,
        (__int64)&WPP_e9119d9aba1231428d621ec28dbeb9a6_Traceguids);
    }
    LastWokenThread::Clear(a1);
  }
  v4 = W32GetUserSessionState(a1, a2);
  _PostShellHookMsgWorker(*(unsigned int *)(*(_QWORD *)(v4 + 19928) + 928LL), v2, a2, 0LL);
}
