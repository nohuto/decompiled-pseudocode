/*
 * XREFs of ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014861C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402A6618 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D3C64 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014884C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140148CA4 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1402682DC (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 */

__int64 __fastcall NotifyShell::DragSizeInfo(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int16 v4; // r15
  bool v6; // di
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int16 WindowTrackState; // ax

  v4 = a2;
  v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416));
  }
  LOBYTE(a2) = 1;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2);
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           11,
           v4 | ((unsigned __int16)((16 * (a3 & 0x1F)) | WindowTrackState) << 16),
           0,
           0);
}
