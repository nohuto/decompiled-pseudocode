/*
 * XREFs of NtUserConvertToInterceptWindow @ 0x1402934C0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402C93D4 (-ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserConvertToInterceptWindow(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  WindowActions *v5; // rax
  WindowActions *v6; // rdi
  PETHREAD *v7; // rdx
  bool v8; // bp
  bool v9; // r14
  unsigned __int8 ThreadId; // al
  __int64 v11; // rdi
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bp
  bool v19; // r14
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r9
  struct tagWND *v23; // rdx
  __int64 *v24; // rbx
  bool v25; // bp
  bool v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rcx
  __int16 v34; // [rsp+30h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-28h]
  char v36[8]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v37; // [rsp+58h] [rbp-10h]

  v2 = 0LL;
  v3 = EnterCrit(0LL, 0LL);
  v36[0] = 0;
  v37 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v36, v4);
  v5 = (WindowActions *)ValidateHwndStrict(a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = (PETHREAD *)*((_QWORD *)v5 + 2);
    if ( v7 != (PETHREAD *)v3 )
    {
      v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        ThreadId = (unsigned __int8)PsGetThreadId(*v7);
        v11 = *(_QWORD *)v6;
        v12 = ThreadId;
        UserSessionState = W32GetUserSessionState(v14, v13);
        LOBYTE(v16) = v9;
        LOBYTE(v17) = v8;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69416),
          3,
          4,
          94,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
          v11,
          v12);
      }
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) & 0xF) == 2 )
    {
      if ( IsTopLevelWindow((__int64)v5) )
      {
        v24 = (__int64 *)*((_QWORD *)v6 + 15);
        if ( !v24 || (v24[48] & 0x10) != 0 )
        {
          WindowActions::ConvertToInterceptWindow(v6, v23);
          v2 = 1LL;
          goto LABEL_42;
        }
        v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v27 = *v24;
          v28 = *(_QWORD *)v6;
          v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
          LOBYTE(v30) = v26;
          LOBYTE(v31) = v25;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v30,
            *(_QWORD *)(v29 + 69416),
            3,
            4,
            97,
            (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
            v28,
            v27);
        }
        goto LABEL_11;
      }
      v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_11:
        UserSetLastError(87);
        goto LABEL_42;
      }
      v35 = *(_QWORD *)v6;
      v22 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23) + 69416);
      v34 = 96;
    }
    else
    {
      v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v35 = *(_QWORD *)v5;
      v22 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7) + 69416);
      v34 = 95;
    }
    LOBYTE(v21) = v19;
    LOBYTE(v20) = v18;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v21,
      v22,
      3,
      4,
      v34,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
      v35);
    goto LABEL_11;
  }
LABEL_42:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v36);
  UserSessionSwitchLeaveCrit(v32);
  return v2;
}
