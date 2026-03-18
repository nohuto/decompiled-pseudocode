/*
 * XREFs of NtUserShellRegisterHotKey @ 0x1400F6F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1400F7338 (IsShellProcess.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall NtUserShellRegisterHotKey(__int64 a1, int a2, int a3, unsigned int a4, HWND a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  struct tagWND *v12; // rdi
  bool v13; // al
  BOOL v14; // ebx
  __int64 v15; // rcx
  bool v17; // bl
  bool v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  _BYTE v23[24]; // [rsp+40h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  if ( (a3 & 0xFFFF9FF0) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_11;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( !(unsigned int)IsShellProcess(CurrentProcessWin32Process) )
  {
    v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        20,
        93,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v22 = 5;
    goto LABEL_26;
  }
  if ( a1 )
  {
    v12 = (struct tagWND *)ValidateHwnd(a1);
    if ( v12 )
      goto LABEL_7;
LABEL_11:
    v14 = 0;
    goto LABEL_9;
  }
  v12 = 0LL;
LABEL_7:
  if ( a5 && !ValidateHwnd(a5) )
    goto LABEL_11;
  v13 = _RegisterHotKey(v12, 0LL, a2, a3 | 0x80, a4, a5);
  v14 = v13;
  if ( !v13 )
  {
    v22 = 5023;
LABEL_26:
    v14 = 0;
    UserSetLastError(v22);
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23);
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}
