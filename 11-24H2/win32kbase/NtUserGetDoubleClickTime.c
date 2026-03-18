/*
 * XREFs of NtUserGetDoubleClickTime @ 0x14010CEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionAreAllAccessGranted @ 0x14010CF58 (ApiSetEditionAreAllAccessGranted.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v3 = 0;
  v4 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v5 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( *v4 == v5 )
    goto LABEL_7;
  v6 = PsGetCurrentProcessWin32Process(v5);
  if ( v6 )
    v6 &= -(__int64)(*(_QWORD *)v6 != 0LL);
  if ( (unsigned int)ApiSetEditionAreAllAccessGranted(*(unsigned int *)(v6 + 672)) )
LABEL_7:
    v3 = *(_DWORD *)(W32GetUserSessionState(v5) + 14720);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}
