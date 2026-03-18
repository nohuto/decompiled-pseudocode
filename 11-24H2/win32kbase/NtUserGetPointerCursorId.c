/*
 * XREFs of NtUserGetPointerCursorId @ 0x14016D200
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1400D5FD0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int PointerCursorId; // edi
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  struct tagTHREADINFO *v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  if ( a1 && !HIWORD(a1) && a2 )
  {
    UserSessionState = W32GetUserSessionState(v4);
    PointerCursorId = CTouchProcessor::GetPointerCursorId(*(CTouchProcessor **)(UserSessionState + 3264), v9, a1, &v8);
    if ( PointerCursorId )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v8;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return PointerCursorId;
}
