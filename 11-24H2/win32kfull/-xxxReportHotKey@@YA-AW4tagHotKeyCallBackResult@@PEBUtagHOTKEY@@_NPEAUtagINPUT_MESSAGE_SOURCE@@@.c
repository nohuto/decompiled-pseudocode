/*
 * XREFs of ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140289078
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessageExtended @ 0x14006649C (_PostMessageExtended.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012B2E0 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x140215B74 (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     ?GetDestination@CHILDHOTKEY@@QEBA?AUDestination@1@XZ @ 0x14021DD30 (-GetDestination@CHILDHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x140224318 (-HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z.c)
 *     ?GetDestination@tagHOTKEY@@QEBA?AUDestination@1@XZ @ 0x14023E7CC (-GetDestination@tagHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x140289480 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402895C8 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1402B6A00 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxReportHotKey(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  _QWORD *i; // rcx
  __int64 v12; // r8
  struct tagWND *v13; // r14
  unsigned __int64 v14; // rbx
  char v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  char v18; // si
  __int64 (__fastcall *v19)(_QWORD, unsigned __int64); // r12
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rsi
  unsigned int v24; // edx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct tagTHREADINFO *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagTHREADINFO *v35; // rax
  struct tagWND *ShellWindow; // rax
  __int16 v37; // [rsp+30h] [rbp-48h]
  __int64 (__fastcall *v38)(_QWORD, unsigned __int64); // [rsp+38h] [rbp-40h]
  _QWORD v39[2]; // [rsp+40h] [rbp-38h] BYREF
  struct tagTHREADINFO *v40; // [rsp+50h] [rbp-28h] BYREF
  struct tagWND *v41; // [rsp+58h] [rbp-20h]
  __int64 v42; // [rsp+60h] [rbp-18h] BYREF
  struct tagWND *v43; // [rsp+68h] [rbp-10h]
  char v44; // [rsp+C0h] [rbp+48h]
  bool v46; // [rsp+D8h] [rbp+60h]

  v4 = *(_DWORD *)(a1 + 40);
  v46 = *(_DWORD *)(a3 + 4) == 1;
  v5 = v46 | 2;
  if ( *(_DWORD *)(a1 + 36) )
    v5 = *(_DWORD *)(a3 + 4) == 1;
  if ( v4 == -7 || v4 == 61744 )
  {
    v35 = PtiCurrent(a1, a2);
    ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v35 + 62));
    if ( ShellWindow )
      xxxReportWindowHotKey(a1, ShellWindow, v5);
    return 0LL;
  }
  v37 = *(_WORD *)(a1 + 34);
  if ( (v37 & 0x100) != 0 )
    return 0LL;
  tagHOTKEY::GetDestination(a1, &v42);
  if ( !(_DWORD)v42 )
    return 0LL;
  v8 = *(unsigned __int8 *)(a1 + 36);
  v44 = *(_BYTE *)(a1 + 36);
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = *(unsigned __int16 *)(a1 + 34);
  i = (_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = v43;
  v14 = ((unsigned __int64)v8 << 16) | *(unsigned __int16 *)(UserSessionState + 14040);
  v15 = (unsigned __int8)*(_WORD *)(a1 + 34) >> 7;
  v38 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))(a1 + 8);
  v40 = *(struct tagTHREADINFO **)a1;
  v16 = *(_QWORD *)(a1 + 56);
  v39[0] = v12;
  if ( v16 != a1 + 56 )
  {
    if ( (v10 & 0x1000) != 0 )
    {
      v17 = v16 - 32;
      v18 = 1;
      CHILDHOTKEY::GetDestination(v16 - 32, (__int64)v39);
      i = 0LL;
      if ( !LODWORD(v39[0]) )
        return 0LL;
      v19 = 0LL;
      v13 = (struct tagWND *)v39[1];
      v4 = *(_DWORD *)(v17 + 20);
      v39[0] = *(_QWORD *)(v17 + 24);
      v20 = *(_WORD *)(v17 + 16);
      v42 = 2LL;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(i, v10) + 18944) )
    {
      v18 = v15;
      i = *(_QWORD **)(W32GetUserSessionState(i, v10) + 18944);
      if ( !i[16] )
        goto LABEL_25;
      if ( (*(_DWORD *)(W32GetUserSessionState(i, v10) + 67064) & 0x200) != 0 )
      {
        v21 = W32GetUserSessionState(i, v10);
        if ( IsPenQuickLaunchHotKey(*(_DWORD *)(v21 + 14040), v44) )
          goto LABEL_25;
      }
      v22 = W32GetUserSessionState(i, v10);
      v10 = a1 + 56;
      for ( i = *(_QWORD **)(a1 + 56); i != (_QWORD *)v10; i = (_QWORD *)*i )
      {
        v23 = i - 4;
        if ( *(_QWORD *)(*(i - 4) + 472LL) == *(_QWORD *)(v22 + 18944) )
        {
          CHILDHOTKEY::GetDestination((__int64)(i - 4), (__int64)&v40);
          if ( !(_DWORD)v40 )
            return 0LL;
          v13 = v41;
          v43 = v41;
          v42 = 2LL;
          if ( !v41 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1893);
          v24 = *(_DWORD *)(a1 + 36);
          v4 = *((_DWORD *)v23 + 5);
          v40 = (struct tagTHREADINFO *)*v23;
          v38 = 0LL;
          v37 = *((_WORD *)v23 + 8);
          TraceLoggingYieldedHotkey(*(unsigned __int16 *)(a1 + 32), v24);
          break;
        }
      }
    }
  }
  v18 = v15;
LABEL_25:
  v19 = v38;
  v20 = v37;
LABEL_26:
  v25 = v42;
  if ( (v20 & 0x4000) != 0 && v14 == *(_QWORD *)(W32GetUserSessionState(i, v10) + 14000) )
    return 0LL;
  if ( v18 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(i, v10) + 14000) != v14 )
      *(_QWORD *)(W32GetUserSessionState(v27, v26) + 14000) = v14;
    xxxReportHotKeyToShell(v13, v14, v4, v39[0], v5);
    return 0LL;
  }
  if ( v25 == 1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(i, v10) + 14000) != v14 )
      *(_QWORD *)(W32GetUserSessionState(v33, v32) + 14000) = v14;
    W32GetUserSessionState(v33, v32);
    InputTraceLogging::Keyboard::HotkeyInvoked();
    if ( v19 )
      return v19(v4, v14);
    PostThreadMessageEx(v40, 0x312u, v4, v14, (struct tagINPUT_MESSAGE_SOURCE *)a3);
    v31 = v40;
    goto LABEL_42;
  }
  if ( v13 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(i, v10) + 14000) != v14 )
      *(_QWORD *)(W32GetUserSessionState(v29, v28) + 14000) = v14;
    W32GetUserSessionState(v29, v28);
    InputTraceLogging::Keyboard::HotkeyInvoked();
    PostMessageExtended(v13, 0x312u, v4, v14, (struct tagINPUT_MESSAGE_SOURCE *)a3);
    v31 = (struct tagTHREADINFO *)*((_QWORD *)v13 + 2);
LABEL_42:
    LOBYTE(v30) = v46;
    LastWokenThread::Set(v31, 1LL, v30);
  }
  return 0LL;
}
