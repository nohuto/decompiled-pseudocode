/*
 * XREFs of xxxConsoleControl @ 0x14015D510
 * Callers:
 *     NtUserConsoleControl @ 0x14015D3C0 (NtUserConsoleControl.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x140188D44 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018902C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     LockThreadByClientId @ 0x1401DD878 (LockThreadByClientId.c)
 *     ProcessInfoFromPID @ 0x1401E7DC8 (ProcessInfoFromPID.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1401EFBD8 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x140232374 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027512C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140277A94 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct tagPROCESSINFO *ProcessInfo; // r14
  __int64 v19; // rcx
  PEPROCESS ThreadProcess; // rax
  __int64 v21; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v23; // rcx
  struct tagPROCESSINFO *v24; // rdi
  PETHREAD v25; // rcx
  char v26; // r15
  void *v27; // rcx
  NTSTATUS v28; // eax
  PETHREAD v29; // r13
  int ProcessSessionId; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  bool v34; // r12
  int v35; // ebx
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // r12
  int v40; // ebx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rax
  unsigned int v45; // eax
  _BYTE v47[80]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v48[128]; // [rsp+A0h] [rbp-29h] BYREF
  PETHREAD Thread; // [rsp+148h] [rbp+7Fh] BYREF

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    return (unsigned int)xxxUserNotifyConsoleApplication(a2);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5486LL);
    v45 = -1073741637;
    if ( a3 != 24 )
      return (unsigned int)-1073741811;
    return v45;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 24 )
    {
      xxxSetConsoleCaretInfo(a2);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v44 = ValidateHwnd(*(_QWORD *)a2);
      if ( v44 )
      {
        *(_DWORD *)(*(_QWORD *)(v44 + 16) + 924LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 == 16 )
    {
      v26 = 1;
      v27 = *(void **)a2;
      Thread = 0LL;
      v28 = ObReferenceObjectByHandle(v27, 0x200u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Thread, 0LL);
      v29 = Thread;
      v5 = v28;
      if ( v28 < 0 )
        return v5;
      ProcessSessionId = PsGetProcessSessionIdEx(Thread);
      if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(v29);
        v33 = ProcessWin32Process;
        if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
        {
          if ( *((_DWORD *)a2 + 2) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v26 = 0;
            }
            v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v35 = *(_DWORD *)(ProcessWin32Process + 56);
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
              LOBYTE(v37) = v34;
              LOBYTE(v38) = v26;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v38,
                v37,
                *(_QWORD *)(UserSessionState + 69416),
                4,
                2,
                31,
                (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
                v35);
            }
            *(_DWORD *)(v33 + 12) |= 0x4080000u;
          }
          else
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v26 = 0;
            }
            v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v40 = *(_DWORD *)(ProcessWin32Process + 56);
              v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
              LOBYTE(v42) = v39;
              LOBYTE(v43) = v26;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v43,
                v42,
                *(_QWORD *)(v41 + 69416),
                4,
                2,
                32,
                (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
                v40);
            }
            *(_DWORD *)(v33 + 12) &= 0xFBF7FFFF;
          }
        }
        else
        {
          v5 = -1073741816;
        }
      }
      else
      {
        v5 = -1073741811;
      }
      v25 = v29;
      goto LABEL_34;
    }
    return (unsigned int)-1073741811;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741821;
  v5 = -1073741811;
  if ( a3 == 16 )
  {
    v5 = -1073741790;
    v11 = ValidateHwnd(*(_QWORD *)a2);
    v13 = v11;
    if ( v11 )
    {
      v14 = *(_QWORD *)(v11 + 40);
      if ( *(char *)(v14 + 19) >= 0 && (*(_BYTE *)(v14 + 18) & 4) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        v17 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v17 = v16 & CurrentProcessWin32Process;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 464LL) == v17 )
        {
          if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v16) )
          {
            CLockProcessByPid::CLockProcessByPid(v47, *((int *)a2 + 2), 0LL);
            ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v47);
            CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v47);
          }
          else
          {
            ProcessInfo = (struct tagPROCESSINFO *)ProcessInfoFromPID(*((unsigned int *)a2 + 2));
          }
          if ( ProcessInfo )
          {
            v19 = *((unsigned int *)a2 + 3);
            Thread = 0LL;
            if ( (int)LockThreadByClientId(v19, &Thread) >= 0 )
            {
              ThreadProcess = PsGetThreadProcess(Thread);
              if ( ThreadProcess && ThreadProcess == *(PEPROCESS *)ProcessInfo )
              {
                if ( (*(_DWORD *)(v13 + 380) & 0x8000000) != 0 )
                {
                  IsEnabledDeviceUsageNoInline = Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v21);
                  v23 = *(_QWORD *)(v13 + 40);
                  if ( IsEnabledDeviceUsageNoInline )
                  {
                    CLockProcessByPid::CLockProcessByPid(v48, *(int *)(v23 + 332), 0LL);
                    v24 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v48);
                    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v48);
                  }
                  else
                  {
                    v24 = (struct tagPROCESSINFO *)ProcessInfoFromPID(*(unsigned int *)(v23 + 332));
                  }
                  if ( v24 )
                    tagWND::DwsUnlinkProcess(v13, v24, 1LL);
                }
                if ( *(struct tagPROCESSINFO **)(*(_QWORD *)(v13 + 16) + 464LL) != ProcessInfo && IsTopLevelWindow(v13) )
                  tagWND::DwsLinkProcess(v13, ProcessInfo, 1LL);
                v5 = 0;
                *(_DWORD *)(*(_QWORD *)(v13 + 40) + 328LL) = *((_DWORD *)a2 + 3);
                *(_DWORD *)(*(_QWORD *)(v13 + 40) + 332LL) = *((_DWORD *)a2 + 2);
              }
              v25 = Thread;
LABEL_34:
              ObfDereferenceObject(v25);
            }
          }
        }
      }
    }
  }
  return v5;
}
