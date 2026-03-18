/*
 * XREFs of ProcessFreezeChangeNotify @ 0x1401A3EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x1401A31C0 (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall ProcessFreezeChangeNotify(struct _EPROCESS **a1, unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rbx
  char v6; // di
  __int64 v7; // rax
  bool v8; // bl
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  _BYTE v13[256]; // [rsp+50h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v13);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v4);
  v6 = 1;
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v6 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 69400),
      4,
      14,
      30,
      (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
      a2);
  }
  tagPROCESSINFO::FreezeChangeNotify(a1, a2);
  UserSessionSwitchLeaveCritWithNonPaged();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v13);
  return 0LL;
}
