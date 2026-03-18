/*
 * XREFs of NtUserWindowFromDC @ 0x1401576C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserWindowFromDC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *i; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v5 = 0LL;
  v6 = 0LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 57008);
  for ( i = *(__int64 **)(v9 + 24); ; i = (__int64 *)*i )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 57008) + 24LL;
    if ( i == (__int64 *)v10 )
      break;
    if ( i[2] == a1 )
    {
      if ( (i[6] & 0x80C01000) == 0x1000 )
        v6 = (__int64 *)i[10];
      break;
    }
  }
  v12 = W32GetUserSessionState(v10, v9);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 57008) + 48LL));
  if ( v6 )
    v5 = *v6;
  UserSessionSwitchLeaveCrit(v13);
  return v5;
}
