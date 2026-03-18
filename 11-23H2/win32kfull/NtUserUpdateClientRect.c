/*
 * XREFs of NtUserUpdateClientRect @ 0x1C01DEAC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 */

__int64 __fastcall NtUserUpdateClientRect(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (__int64 *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v2;
    HMLockObject(v2);
    v13 = *(_OWORD *)(v8[5] + 88);
    xxxCalcClientRect(v8, &v13, 0);
    *(_OWORD *)(v8[5] + 104) = v13;
    ThreadUnlock1(v10, v9, v11);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
