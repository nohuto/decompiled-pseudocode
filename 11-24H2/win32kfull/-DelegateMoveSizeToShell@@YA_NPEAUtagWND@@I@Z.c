/*
 * XREFs of ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402B4E84
 * Callers:
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     _GetMessagePos @ 0x14004A3B8 (_GetMessagePos.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402B5060 (-PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqddd @ 0x1402B5258 (WPP_RECORDER_AND_TRACE_SF_sqddd.c)
 *     DwmAsyncNotifyWindowMoveSizeIntercepted @ 0x1403239F4 (DwmAsyncNotifyWindowMoveSizeIntercepted.c)
 */

char __fastcall DelegateMoveSizeToShell(struct tagWND *a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  int MessagePos; // eax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  void *v15; // rax
  int v17; // [rsp+A0h] [rbp+18h] BYREF
  int v18; // [rsp+A4h] [rbp+1Ch]

  if ( (unsigned int)(a2 - 1) > 8 )
    return 0;
  v3 = 2;
  if ( (_DWORD)a2 != 9 )
    v3 = 4;
  if ( (v3 & *((_DWORD *)a1 + 97)) != v3 )
    return 0;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19200);
  if ( (*(_DWORD *)(v5 + 48) & 0x400) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 361);
  MessagePos = GetMessagePos(v5, v4);
  v18 = SHIWORD(MessagePos);
  v17 = (__int16)MessagePos;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((unsigned int)(__int16)MessagePos);
  LogicalToPhysicalDPIPoint(&v17, &v17, CurrentThreadDpiAwarenessContext, 0LL);
  v9 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_sqddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69416));
  }
  v15 = (void *)ReferenceDwmApiPort(v9, v8);
  DwmAsyncNotifyWindowMoveSizeIntercepted(v15);
  PostButtonUpToWindowForIntercept(a1);
  ForceCapture(3LL, 0LL);
  return 1;
}
