/*
 * XREFs of ?SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z @ 0x1402D3A70
 * Callers:
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D3C64 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 */

_UNKNOWN **__fastcall AdvancedWindowPos::SendShellArrangementCompletionNotification(
        __int64 *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        char a6)
{
  _UNKNOWN **result; // rax
  char v8; // bp
  char v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // di
  char v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (_DWORD)a2 == 3 )
  {
    if ( a3 != 3 || a4 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v8 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v9 = 0;
      }
      if ( v8 || v9 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          4,
          79,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      result = (_UNKNOWN **)NotifyShell::ArrangementCompleted(a1, a5, 1);
      if ( a6 )
      {
        result = (_UNKNOWN **)PtiCurrent(v14, v13);
        v15 = *((_QWORD *)result[62] + 41);
        if ( v15 )
          return (_UNKNOWN **)LastWokenThread::Set(*(_QWORD *)(v15 + 16), 1LL, 0LL);
      }
    }
  }
  else if ( a3 == 3 )
  {
    v16 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v17 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v16 = 0;
    }
    if ( v17 || v16 )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v19) = v16;
      LOBYTE(v20) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69416),
        5,
        4,
        80,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    return (_UNKNOWN **)NotifyShell::ArrangementCompleted(a1, a5, 2);
  }
  return result;
}
