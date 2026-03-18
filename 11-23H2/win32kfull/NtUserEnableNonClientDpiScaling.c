/*
 * XREFs of NtUserEnableNonClientDpiScaling @ 0x1C0016120
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C00161D4 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserEnableNonClientDpiScaling(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _BOOL8 v7; // rbx
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
  v7 = 0LL;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    v7 = xxxEnableNonClientDpiScaling(v8);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
