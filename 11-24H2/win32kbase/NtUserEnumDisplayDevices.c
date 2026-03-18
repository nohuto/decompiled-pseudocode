/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1400187E0
 * Callers:
 *     <none>
 * Callees:
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(int a1, int a2, int a3, int a4)
{
  __int64 UserSessionState; // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    UserSessionState = W32GetUserSessionState();
    v9 = DrvEnumDisplayDevices(
           a1,
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 104LL) + 80LL),
           a2,
           a3,
           a4,
           1);
  }
  else
  {
    v9 = -1073741823;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
