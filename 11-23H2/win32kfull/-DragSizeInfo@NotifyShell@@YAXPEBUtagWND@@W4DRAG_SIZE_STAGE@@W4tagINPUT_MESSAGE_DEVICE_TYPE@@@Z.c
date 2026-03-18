/*
 * XREFs of ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C021C740
 * Callers:
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01E9C1C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C003DB5C (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C021C900 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021CBA8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall NotifyShell::DragSizeInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int16 v4; // si
  char v6; // dl
  __int16 WindowTrackState; // ax
  int v9; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      a3,
      (__int64)gFullLog,
      v9,
      1u,
      0x12u,
      (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids);
  LOBYTE(a2) = 1;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2, a3);
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           12,
           v4 | ((unsigned __int16)((16 * (v3 & 0x1F)) | WindowTrackState) << 16),
           0,
           0);
}
