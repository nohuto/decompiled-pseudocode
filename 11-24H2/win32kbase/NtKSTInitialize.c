/*
 * XREFs of NtKSTInitialize @ 0x1401B7BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsKSTThread @ 0x1400BB410 (IsKSTThread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 */

__int64 __fastcall NtKSTInitialize(void *a1, void *a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // rcx
  HANDLE v12; // rbx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v10 = 0;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( ((unsigned int)IsCurrentProcessDwm(v7, v6, v8, v9)
     || (v12 = *(HANDLE *)(W32GetUserSessionState(v11) + 63584), PsGetCurrentProcessId() == v12))
    && *(_DWORD *)(W32GetUserSessionState(v11) + 19152) )
  {
    if ( !IsKSTThread(v11) )
    {
      v10 = UserKSTInitialize(a1, a2);
      goto LABEL_11;
    }
  }
  else if ( !*(_DWORD *)(W32GetUserSessionState(v11) + 19152) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5049);
  }
  UserSetLastError(5);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v10;
}
