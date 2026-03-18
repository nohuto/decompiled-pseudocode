/*
 * XREFs of ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1402169E0
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1402175C0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011ACFC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x140215F0C (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardAsyncKeyStatePacket(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  LOBYTE(v5) = *(_BYTE *)a2;
  ApplyKeyStateUpdate(v5, *(_DWORD *)(a2 + 4) != 0);
  v6 = CKeyboardProcessor::HandleLeftRightVKs(*(_BYTE *)a2);
  v7 = v6;
  if ( v6 != *(_WORD *)a2 )
  {
    LOBYTE(v7) = v6;
    ApplyKeyStateUpdate(v7, *(_DWORD *)(a2 + 4) != 0);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return 1LL;
}
