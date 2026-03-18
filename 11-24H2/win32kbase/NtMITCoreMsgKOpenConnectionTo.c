/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x140126F90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x140148F34 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(__int64 a1, void *a2)
{
  unsigned int v3; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+38h] [rbp-80h] BYREF
  __int128 v15; // [rsp+48h] [rbp-70h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int128 v17; // [rsp+68h] [rbp-50h] BYREF
  __int128 v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+88h] [rbp-30h]

  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !(unsigned int)IsCurrentProcessDwm(v7, v6, v8, v9) )
  {
    v10 = -1073741790;
LABEL_8:
    UserSessionSwitchLeaveCritWithNonPaged();
    return v10;
  }
  if ( v3 <= 0x16 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    RtlCopyFromUser(&v14, a2, 0x28uLL);
    v17 = v14;
    v18 = v15;
    v19 = v16;
    v13 = W32GetUserSessionState(v11);
    v10 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(*(_QWORD *)(v13 + 16408), v3, &v17);
    goto LABEL_8;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return 3221225485LL;
}
