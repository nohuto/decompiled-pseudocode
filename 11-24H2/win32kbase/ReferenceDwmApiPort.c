/*
 * XREFs of ReferenceDwmApiPort @ 0x140041C90
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1400A3780 (UserNotifyDisplayChange.c)
 *     SetConnectCompletedState @ 0x14014C390 (SetConnectCompletedState.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 ReferenceDwmApiPort()
{
  __int64 v0; // rcx
  __int64 UserSessionState; // rax
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( IS_USERCRIT_OWNED_AT_ALL() )
  {
    UserSessionState = W32GetUserSessionState(v0);
    v2 = *(_QWORD *)(UserSessionState + 70824);
    if ( v2 )
      ObfReferenceObject(*(PVOID *)(UserSessionState + 70824));
  }
  else
  {
    EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
    v5 = W32GetUserSessionState(v4);
    v2 = *(_QWORD *)(v5 + 70824);
    if ( v2 )
      ObfReferenceObject(*(PVOID *)(v5 + 70824));
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  return v2;
}
