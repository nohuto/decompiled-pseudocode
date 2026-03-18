/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C0035AC0
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0035CC0 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = (int)a2;
  Object = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v9);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v4, &Object, v12, v13) >= 0 )
    {
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process && *ProcessWin32Process )
        LOBYTE(v3) = GetDesktopView(ProcessWin32Process, *(_QWORD *)(v8 + 24)) != 0;
      else
        UserSetLastError(5LL);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v3;
}
