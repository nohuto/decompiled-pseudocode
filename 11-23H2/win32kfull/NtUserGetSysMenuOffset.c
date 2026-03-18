/*
 * XREFs of NtUserGetSysMenuOffset @ 0x1C01D3580
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C00E4960 (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall NtUserGetSysMenuOffset(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 SysMenuPtr; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v2;
    HMLockObject(v2);
    SysMenuPtr = xxxGetSysMenuPtr(v8);
    if ( SysMenuPtr )
      v7 = *(_QWORD *)(SysMenuPtr + 48);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
