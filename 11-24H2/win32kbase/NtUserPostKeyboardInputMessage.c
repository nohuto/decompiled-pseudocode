/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1401BCB10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011ACFC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x1402220B8 (ApiSetEditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(__int64 a1, void *a2, __int64 a3)
{
  int v5; // r14d
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  char v14; // al
  int **v15; // rbx
  int v17; // edx
  int v18; // r8d
  __int16 v19; // r9
  __int16 v20; // r10
  __int16 v21; // r11
  unsigned int v22; // ebx
  ULONG v23; // eax
  __int128 v24; // [rsp+60h] [rbp-68h] BYREF
  int v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+80h] [rbp-48h]
  int v27; // [rsp+90h] [rbp-38h]

  v5 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v11 = v7;
  UserSessionState[3] = v7;
  if ( !v7 )
    goto LABEL_16;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x1000000) != 0
    && *(char *)(v7 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( !CurrentProcessWin32Process )
      goto LABEL_16;
    v11 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v13 = v8 & CurrentProcessWin32Process;
    if ( !v13 )
      goto LABEL_16;
    v14 = *(_BYTE *)(v13 + 1208);
    if ( v14 != 1 )
      goto LABEL_16;
  }
  else
  {
    v14 = 0;
  }
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = (int **)UserSessionState[2471];
      if ( !v15 )
        break;
      UserSessionState[2471] = v15[2];
      v15[2] = 0LL;
      if ( !(*v15)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v15);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
LABEL_16:
  v26 = 0LL;
  v27 = 0;
  if ( (unsigned int)IsCurrentProcessDwm(v11, v8, v9, v10) )
  {
    v24 = 0LL;
    v25 = 0;
    RtlCopyFromUser(&v24, a2, 0x14uLL);
    v26 = v24;
    v27 = v25;
    LOBYTE(v17) = CKeyboardProcessor::HandleLeftRightVKs(BYTE8(v24));
    v22 = ApiSetEditionPostKeyboardInputMessage(v5, v17, v18, (unsigned __int16)v24, v21, v19, v25, v18, v20, a3);
    v23 = RtlNtStatusToDosError(v22);
    UserSetLastError(v23);
    UserSessionSwitchLeaveCritWithNonPaged();
    return v22;
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged();
    return 3221225506LL;
  }
}
