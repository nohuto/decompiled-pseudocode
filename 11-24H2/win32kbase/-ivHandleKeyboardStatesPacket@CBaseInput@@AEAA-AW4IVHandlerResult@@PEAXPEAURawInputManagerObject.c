/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216B40
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1402175C0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x140199A48 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x140215E14 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, void **a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  void **v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  CIVDeserializer::Deserialize((CIVDeserializer *)&v8, a2);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v8, (void **)(v3 + 8));
  UserSessionState = (_QWORD *)W32GetUserSessionState(v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  ApplyFullKeyboardStates(*a2, a2[1]);
  UserSessionSwitchLeaveCritWithNonPaged();
  return 1LL;
}
