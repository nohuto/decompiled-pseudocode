/*
 * XREFs of NtUserGetSystemMenu @ 0x1C0090FC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 */

__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  struct tagWND *v8; // rdi
  __int64 *SystemMenu; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v2;
    HMLockObject(v2);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v8);
    if ( SystemMenu )
      v7 = *SystemMenu;
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
