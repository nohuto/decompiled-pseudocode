/*
 * XREFs of ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x140276480
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x14002BEB0 (EditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x140232410 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetNewForegroundQueue(__int64 a1, __int64 a2)
{
  char v2; // r15
  GroupedProcessForegroundBoost *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  char v8; // bp
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 result; // rax
  const struct tagWND *v14; // rdx

  v2 = a2;
  v4 = 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944);
  if ( a1 == v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2542);
  v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      2,
      85,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
  }
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(W32GetUserSessionState(v7, v5) + 18952) = v6;
  *(_QWORD *)(W32GetUserSessionState(v7, v5) + 18944) = a1;
  result = EditionUpdateRawMouseMode(a1);
  if ( (v2 & 2) != 0 )
    *(_DWORD *)(v6 + 436) |= 1u;
  if ( v6 )
    v4 = *(GroupedProcessForegroundBoost **)(v6 + 128);
  v14 = *(const struct tagWND **)(a1 + 128);
  if ( v4 != v14 )
    return anonymous_namespace_::OnForegroundWindowChanged(v4, v14);
  return result;
}
