/*
 * XREFs of _anonymous_namespace_::WindowSizingUpdate @ 0x1402C134C
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x140067B0C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402C0238 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

unsigned int *__fastcall anonymous_namespace_::WindowSizingUpdate(const struct tagWND *a1)
{
  char v1; // di
  unsigned int *result; // rax
  __int64 v3; // rdx
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v1 = (char)a1;
  result = (unsigned int *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) + 380LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, 0, 1, 6);
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                               v8,
                               v7,
                               *(_QWORD *)(UserSessionState + 69416),
                               4,
                               1,
                               10,
                               (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids,
                               v1);
    }
  }
  return result;
}
