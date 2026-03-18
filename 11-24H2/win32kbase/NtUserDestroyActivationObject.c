/*
 * XREFs of NtUserDestroyActivationObject @ 0x140149090
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E09E4 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserDestroyActivationObject(void *Src)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  NTSTATUS v7; // eax
  ULONG v8; // eax
  struct _LUID v10; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v11; // [rsp+60h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  v4 = 0;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v11 = 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src, 8uLL);
  v11 = v10;
  v6 = W32GetUserSessionState(v5);
  v7 = CActivationObjectManager::DestroyActivationObject(*(CActivationObjectManager **)(v6 + 18920), &v11);
  if ( v7 < 0 )
  {
    v8 = RtlNtStatusToDosError(v7);
    UserSetLastError(v8);
  }
  else
  {
    v4 = 1;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
