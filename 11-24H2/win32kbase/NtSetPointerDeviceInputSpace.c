/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1401B9390
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E1C98 (RIMSetPointerDeviceInputSpace.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, void *a2, void *a3)
{
  _QWORD *UserSessionState; // r14
  __int64 v7; // rax
  int v8; // edi
  int **v9; // rsi
  PVOID v10; // rsi
  NTSTATUS v11; // eax
  ULONG v12; // eax
  PVOID Object; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-98h] BYREF
  __int64 v16; // [rsp+38h] [rbp-90h] BYREF
  __int128 v17; // [rsp+50h] [rbp-78h] BYREF
  __int128 v18; // [rsp+70h] [rbp-58h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  v8 = 1;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = (int **)UserSessionState[2471];
      if ( !v9 )
        break;
      UserSessionState[2471] = v9[2];
      v9[2] = 0LL;
      if ( !(*v9)[2] )
      {
        LODWORD(Object) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v9);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  Object = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) >= 0 )
  {
    if ( a2 )
    {
      v15 = 0LL;
      RtlCopyFromUser(&v15, a2, 8uLL);
      v16 = v15;
    }
    if ( a3 )
    {
      v17 = 0LL;
      RtlCopyFromUser(&v17, a3, 0x10uLL);
      v18 = v17;
    }
    v10 = Object;
    v11 = RIMSetPointerDeviceInputSpace(
            Object,
            (unsigned __int64)&v16 & -(__int64)(a2 != 0LL),
            (unsigned __int64)&v18 & -(__int64)(a3 != 0LL));
    if ( v11 < 0 )
    {
      v8 = 0;
      v12 = RtlNtStatusToDosError(v11);
      UserSetLastError(v12);
    }
  }
  else
  {
    v8 = 0;
    UserSetLastError(87);
    v10 = Object;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v8;
}
