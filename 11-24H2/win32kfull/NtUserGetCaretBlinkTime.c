/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1401743B0
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x140174598 (CheckGrantedAccess.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v3 = 0;
  v4 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v6 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( *v4 == v6 )
    goto LABEL_7;
  v7 = PsGetCurrentProcessWin32Process(v6);
  if ( v7 )
    v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
  if ( (unsigned int)CheckGrantedAccess(*(unsigned int *)(v7 + 672), 2LL) )
  {
LABEL_7:
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928);
    v3 = *(_DWORD *)(v6 + 4984);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
