/*
 * XREFs of NtUserDeregisterShellHookWindow @ 0x1C0099230
 * Callers:
 *     <none>
 * Callees:
 *     _DeregisterShellHookWindow @ 0x1C00992E4 (_DeregisterShellHookWindow.c)
 */

__int64 __fastcall NtUserDeregisterShellHookWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    v7 = DeregisterShellHookWindow(v8);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
