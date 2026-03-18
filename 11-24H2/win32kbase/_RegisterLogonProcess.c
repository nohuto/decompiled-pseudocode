/*
 * XREFs of _RegisterLogonProcess @ 0x140167C90
 * Callers:
 *     NtUserRegisterLogonProcess @ 0x140146AC0 (NtUserRegisterLogonProcess.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     IVStartupWorkerThread @ 0x1400D04C8 (IVStartupWorkerThread.c)
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140132F64 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     ImSessionStart @ 0x140133EB4 (ImSessionStart.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Win32ProcessFromPID @ 0x14019DCC4 (Win32ProcessFromPID.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A9E14 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     HasPrivilege @ 0x1401AD4C0 (HasPrivilege.c)
 *     WmsgpConnect @ 0x1402C4794 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  HANDLE v6; // rbx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 UserGdiSessionState; // rax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int CurrentWin32kSessionId; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  struct tagPROCESSINFO *ProcessInfo; // rax
  _BYTE v32[8]; // [rsp+30h] [rbp-58h] BYREF
  int v33; // [rsp+38h] [rbp-50h]

  v2 = a1;
  v4 = (int)a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 63584) )
  {
    v6 = *(HANDLE *)(W32GetUserSessionState(v5) + 63584);
    if ( PsGetCurrentProcessId() != v6 )
    {
      v8 = 0x2000000;
LABEL_4:
      UserSetLastError(v8);
      return 0LL;
    }
    *(_QWORD *)(W32GetUserSessionState(v7) + 63592) = v4;
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = Win32ProcessFromPID(v4);
      if ( v10 )
        *(_DWORD *)(v10 + 276) |= 0xC0u;
    }
    Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
    if ( *(_DWORD *)(W32GetUserSessionState(v11) + 42616)
      || (unsigned int)IsCurrentSessionServiceSession()
      || (UserGdiSessionState = W32GetUserGdiSessionState(v12),
          v14 = ImSessionStart(*(PVOID *)(UserGdiSessionState + 40)),
          v14 < 0) )
    {
      v14 = 0;
    }
    else
    {
      *(_DWORD *)(W32GetUserSessionState(v12) + 42616) = 1;
    }
  }
  else
  {
    if ( !(unsigned __int8)HasPrivilege(7LL) )
    {
      v8 = 5;
      goto LABEL_4;
    }
    if ( (int)IVStartupWorkerThread() < 0 )
      return 0LL;
    *(_QWORD *)(W32GetUserSessionState(v15) + 63584) = v4;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v16) + 19928) + 2268LL) = v2;
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      v18 = Win32ProcessFromPID(v4);
      *(_DWORD *)(v18 + 276) |= 0xC0u;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v17) + 69392) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 148LL);
      UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v20);
      ExReInitializeRundownProtection(UserSessionState + 8673);
    }
    else
    {
      v23 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v19);
      ExInitializeRundownProtection(v23 + 8673);
    }
    *(_DWORD *)(W32GetUserSessionState(v22) + 69392) = 0;
    v25 = W32GetUserSessionState(v24);
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    v14 = WmsgpConnect(a2, CurrentWin32kSessionId, v25 + 69376);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v12) + 36448) && *(_QWORD *)(W32GetUserGdiSessionState(v27) + 40) )
  {
    v29 = W32GetUserSessionState(v28);
    ZwClose(*(HANDLE *)(v29 + 36448));
    *(_QWORD *)(W32GetUserSessionState(v30) + 36448) = 0LL;
  }
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() && v14 >= 0 )
  {
    CLockProcessByPid::CLockProcessByPid(v32, v4, 512LL);
    v14 = v33;
    if ( v33 >= 0 )
    {
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v32);
      *((_DWORD *)ProcessInfo + 69) |= 0xC0u;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v32);
  }
  return v14 >= 0;
}
