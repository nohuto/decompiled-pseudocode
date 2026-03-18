/*
 * XREFs of NtUserGetMinuserIdForBaseWindow @ 0x1401BADD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetMinuserIdForBaseWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1u);
  v2 = HMValidateHandleNoSecure(a1, 23);
  v3 = 0LL;
  v4 = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 16);
    v6 = *(_QWORD *)(v5 + 464);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( v6 == CurrentProcessWin32Process )
      v3 = *(_QWORD *)(v4 + 56);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}
