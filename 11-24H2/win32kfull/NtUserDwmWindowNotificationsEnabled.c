/*
 * XREFs of NtUserDwmWindowNotificationsEnabled @ 0x1402944A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402B3290 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 */

__int64 __fastcall NtUserDwmWindowNotificationsEnabled(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v14[0] = 0;
  v15 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v14, v3);
  if ( !(unsigned int)IsCurrentProcessDwm(v4)
    || (v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19200),
        v7 != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 62880)) )
  {
    v11 = 5;
    goto LABEL_7;
  }
  v10 = OnDwmWindowNotificationClientRegistered(a1);
  if ( v10 < 0 )
  {
    v11 = v10;
LABEL_7:
    UserSetLastError(v11);
    goto LABEL_8;
  }
  v2 = 1LL;
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v12);
  return v2;
}
