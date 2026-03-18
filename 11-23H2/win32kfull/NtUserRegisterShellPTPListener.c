/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C00A3CA0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterShellPTPListener @ 0x1C00A3C1C (_RegisterShellPTPListener.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // r8
  __int64 v16; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( !a2 || (v12 = *(_QWORD *)(v10 + 40), *(char *)(v12 + 20) >= 0) && *(char *)(v12 + 19) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
        v14 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == v14 )
        {
          v9 = RegisterShellPTPListener(v10, a2);
          goto LABEL_10;
        }
      }
      UserSetLastError(87LL);
      v16 = 87LL;
    }
    else
    {
      v16 = 5LL;
    }
    UserSetLastError(v16);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
