/*
 * XREFs of NtSetCursorInputSpace @ 0x1401B91E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x140054FA0 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14012CAC4 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A5B30 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtSetCursorInputSpace(__int64 a1)
{
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  int *v9; // rax
  __int64 v10; // rbx
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  ULONG v15; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8 = 0LL;
  UserSessionState[3] = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      v10 = UserSessionState[2471];
      if ( !v10 )
        break;
      UserSessionState[2471] = *(_QWORD *)(v10 + 16);
      v9 = *(int **)v10;
      *(_QWORD *)(v10 + 16) = 0LL;
      if ( !v9[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*(int **)v10);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v5, v4, v6, v7) )
    goto LABEL_16;
  v13 = UIPrivilegeIsolation::CheckCapability(L"shellExperienceComposer", v11);
  if ( v13 >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
    {
      v12 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    if ( (*(_BYTE *)(CurrentProcessWin32Process + 816) & 0x30) == 0 )
    {
      v15 = 5;
      goto LABEL_11;
    }
LABEL_16:
    v17 = *(_QWORD *)(W32GetUserSessionState(v12) + 18688);
    v19 = W32GetUserSessionState(v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v19 + 18696));
    *(_QWORD *)(v17 + 16) = a1;
    CInputConfig::CMouseConfig::FindInputSpace((CInputConfig::CMouseConfig *)(v17 + 16));
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v19 + 18696));
    LOBYTE(v19) = *(_BYTE *)(v17 + 1505);
    v21 = W32GetUserSessionState(v20);
    LOBYTE(v8) = (_BYTE)v19 != 0;
    CCursorClip::OnDisplayStateChange(*(_QWORD *)(v21 + 36296), v8);
    v8 = 1LL;
    goto LABEL_17;
  }
  v15 = RtlNtStatusToDosError(v13);
LABEL_11:
  UserSetLastError(v15);
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v8;
}
