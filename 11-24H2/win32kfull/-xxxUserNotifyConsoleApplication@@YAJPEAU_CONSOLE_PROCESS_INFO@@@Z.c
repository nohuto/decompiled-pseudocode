/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x140188D44
 * Callers:
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018902C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1401892C4 (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401897BC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x140275300 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 */

__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  char v4; // si
  bool v5; // di
  bool v6; // bp
  int v7; // ebx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  struct _EPROCESS *v12; // rdx
  int inited; // ebp
  unsigned int v14; // ebx
  bool v16; // bp
  char v17; // bl
  int v18; // edi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // di
  int v23; // ebx
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  int v27; // ebx
  char v28; // [rsp+20h] [rbp-98h]
  __int16 v29; // [rsp+30h] [rbp-88h]
  char v30; // [rsp+40h] [rbp-78h]
  char v31[8]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-60h]
  ForegroundLaunch *v33; // [rsp+68h] [rbp-50h]

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18704) )
  {
    v4 = 1;
    v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = *(_DWORD *)a1;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        3,
        11,
        (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
        v7);
    }
    CLockProcessByPid::CLockProcessByPid(v31, *(int *)a1, 1LL);
    if ( !v33 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v4 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = v32;
        v18 = *(_DWORD *)a1;
        v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        LOBYTE(v20) = v16;
        LOBYTE(v21) = v4;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v21,
          v20,
          *(_QWORD *)(v19 + 69416),
          3,
          3,
          12,
          (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
          v18,
          v17);
      }
      v14 = v32;
      goto LABEL_13;
    }
    inited = xxxSetProcessInitState(v33, 0LL);
    if ( inited < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v4 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v27 = *(_DWORD *)a1;
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      v30 = v27;
      v29 = 14;
      v28 = 3;
    }
    else
    {
      if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
      {
        ForegroundLaunch::ApplyForegroundPolicyConsole(v33, v12);
LABEL_12:
        v14 = inited;
LABEL_13:
        CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v31);
        return v14;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v4 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v23 = *(_DWORD *)a1;
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      v30 = v23;
      v29 = 13;
      v28 = 4;
    }
    LOBYTE(v26) = v22;
    LOBYTE(v25) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v25,
      v26,
      *(_QWORD *)(v24 + 69416),
      v28,
      3,
      v29,
      (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
      v30);
    goto LABEL_12;
  }
  return 3221225506LL;
}
