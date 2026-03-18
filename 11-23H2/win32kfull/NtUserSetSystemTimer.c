/*
 * XREFs of NtUserSetSystemTimer @ 0x1C01DC410
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C0006474 (_SetSystemTimer.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      v11 = SetSystemTimer(v6, a2, a3, 0, 0);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
