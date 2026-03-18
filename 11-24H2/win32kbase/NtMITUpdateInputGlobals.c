/*
 * XREFs of NtMITUpdateInputGlobals @ 0x140125920
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UpconvertTime @ 0x1400E7650 (UpconvertTime.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v8; // r15d
  _QWORD *UserSessionState; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax

  v8 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v12 = 0LL;
  UserSessionState[3] = v10;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( IsInputThread(v11) )
  {
    v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 3064);
    v15 = UpconvertTime(v8);
    CInputGlobals::UpdateInputGlobals(v14, v15, a2, a3, a4, a5);
    v12 = 1LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v12;
}
