/*
 * XREFs of NtUserGetPointerType @ 0x14016D950
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetPointerType@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1400D3FF4 (-GetPointerType@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2)
{
  int PointerType; // ebx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  struct tagTHREADINFO *v9; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  PointerType = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  if ( !a1 || HIWORD(a1) || !a2 )
  {
    PointerType = 0;
    UserSetLastError(87);
    goto LABEL_11;
  }
  if ( a1 == 1 )
  {
    v8 = 4;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v5);
    PointerType = CTouchProcessor::GetPointerType(*(CTouchProcessor **)(UserSessionState + 3264), v9, a1, &v8);
    if ( !PointerType )
      goto LABEL_11;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v8;
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged();
  return PointerType;
}
