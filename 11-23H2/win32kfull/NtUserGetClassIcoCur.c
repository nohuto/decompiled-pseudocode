/*
 * XREFs of NtUserGetClassIcoCur @ 0x1C0087DF0
 * Callers:
 *     <none>
 * Callees:
 *     GetClassIcoCur @ 0x1C0087EBC (GetClassIcoCur.c)
 */

__int64 __fastcall NtUserGetClassIcoCur(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 *ClassIcoCur; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    ClassIcoCur = (__int64 *)GetClassIcoCur(v10, a2);
    if ( ClassIcoCur )
      v9 = *ClassIcoCur;
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
