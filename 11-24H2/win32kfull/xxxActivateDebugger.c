/*
 * XREFs of xxxActivateDebugger @ 0x140256810
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     LockProcessByClientId @ 0x1400A4000 (LockProcessByClientId.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140277A94 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 UserGdiSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  void *ThreadProcess; // rax
  __int64 ProcessDebugPort; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _BYTE v29[8]; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v31[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+60h] [rbp-A0h]
  HANDLE ProcessId; // [rsp+70h] [rbp-90h]
  HANDLE ThreadId; // [rsp+78h] [rbp-88h]

  memset_0(v31, 0, 0x3B8uLL);
  Object = 0LL;
  if ( (a1 & 2) != 0 )
    return 0LL;
  v4 = a1 & 4;
  if ( v4 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v3);
    if ( !PsGetProcessDebugPort(*(_QWORD *)(UserGdiSessionState + 40)) )
      return 0LL;
    v7 = W32GetUserGdiSessionState(v6);
    ProcessId = PsGetProcessId(*(PEPROCESS *)(v7 + 40));
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v3, v2) + 18944) )
      return 0LL;
    v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18944);
    if ( !*(_QWORD *)(v13 + 104) )
      return 0LL;
    UserSessionState = W32GetUserSessionState(v13, v12);
    ProcessId = PsGetThreadProcessId(**(PETHREAD **)(*(_QWORD *)(UserSessionState + 18944) + 104LL));
    v17 = W32GetUserSessionState(v16, v15);
    ThreadId = PsGetThreadId(**(PETHREAD **)(*(_QWORD *)(v17 + 18944) + 104LL));
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v18) )
    {
      v21 = W32GetUserSessionState(v20, v19);
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(*(_QWORD *)(v21 + 18944) + 104LL));
      Object = ThreadProcess;
    }
    else
    {
      if ( (int)LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
        return 0LL;
      ThreadProcess = Object;
    }
    ProcessDebugPort = PsGetProcessDebugPort(ThreadProcess);
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v24) )
      ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 71544) )
  {
    v31[1] = 0;
    v32 = 0LL;
    v31[0] = 5242920;
    v33 = 197635;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v29, 1);
    v27 = W32GetUserSessionState(v26, v25);
    LpcRequestPort(*(_QWORD *)(v27 + 71544), v31);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v29);
  }
  return v4 != 0;
}
