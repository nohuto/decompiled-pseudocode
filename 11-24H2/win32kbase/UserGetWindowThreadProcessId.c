/*
 * XREFs of UserGetWindowThreadProcessId @ 0x140198B90
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x14006BFC0 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     NtUserGetWindowThreadProcessId @ 0x1401BB260 (NtUserGetWindowThreadProcessId.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateCatHandleNoRip @ 0x140198C38 (HMValidateCatHandleNoRip.c)
 */

__int64 __fastcall UserGetWindowThreadProcessId(__int64 a1, _DWORD *a2)
{
  unsigned int ThreadId; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  char v8; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  ThreadId = 0;
  v5 = HMValidateCatHandleNoRip(a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v6);
    if ( a2 )
      *a2 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v6 + 464));
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return ThreadId;
}
