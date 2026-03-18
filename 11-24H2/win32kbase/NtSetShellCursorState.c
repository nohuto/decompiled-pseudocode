/*
 * XREFs of NtSetShellCursorState @ 0x14014E690
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     IsShellProcess @ 0x140126E80 (IsShellProcess.c)
 *     SendOrientationChanged @ 0x140154150 (SendOrientationChanged.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x140157CAC (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x14019EFC4 (-SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A5B30 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtSetShellCursorState(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // r15d
  struct tagRECT *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edi
  ULONG v14; // ecx
  __int64 v15; // rdi
  _QWORD *UserSessionState; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r14d
  __int64 MouseProcessor; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx

  v3 = a3;
  v4 = a1;
  v5 = 0LL;
  if ( !gbOSTestSigningEnabled )
  {
    v6 = UIPrivilegeIsolation::CheckCapability(L"shellExperienceComposer", a2);
    if ( v6 < 0 )
    {
      v8 = v6;
LABEL_35:
      v13 = 0;
      v14 = RtlNtStatusToDosError(v8);
      goto LABEL_36;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      a1 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = a1 & CurrentProcessWin32Process;
    }
    if ( (*(_BYTE *)(v10 + 816) & 0x30) == 0 )
    {
      v11 = PsGetCurrentProcessWin32Process(a1);
      v12 = v11;
      if ( v11 )
        v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
      if ( !(unsigned int)IsShellProcess(v12) )
      {
        v13 = 0;
        v14 = 5;
LABEL_36:
        UserSetLastError(v14);
        goto LABEL_37;
      }
    }
  }
  if ( v4 - 1 > 3 )
  {
LABEL_12:
    v13 = 0;
    v14 = 87;
    goto LABEL_36;
  }
  if ( (_DWORD)v3 )
  {
    v15 = 16 * v3;
    if ( (unsigned __int64)(16 * v3) > 0xFFFFFFFF )
      goto LABEL_12;
    if ( (unsigned int)v15 >= 0x2710000
      || (v5 = (struct tagRECT *)Win32AllocPoolWithQuotaZInitImpl(a1, (unsigned int)v15, 0x63736355u)) == 0LL )
    {
      v13 = 0;
      v14 = 8;
      goto LABEL_36;
    }
    if ( v15 && ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(v5, a2, (unsigned int)v15);
  }
  else if ( a2 )
  {
    goto LABEL_12;
  }
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v13 = 1;
  v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          1LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v17;
  if ( v17 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v17) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v19 = W32GetUserSessionState(v18);
  v21 = CCursorClip::SetShellClip(*(CCursorClip **)(v19 + 36296), v5, v3);
  if ( v21 >= 0 )
  {
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v20);
    if ( MouseProcessor )
    {
      *(_DWORD *)(MouseProcessor + 3016) = v4;
      v24 = v4 - 1;
      if ( v4 != 1 )
      {
        v24 = v4 - 2;
        if ( v4 != 2 )
        {
          v24 = v4 - 3;
          if ( (unsigned int)v24 >= 2 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5601LL);
        }
      }
      SendOrientationChanged(v23, v24);
      InputTraceLogging::Mouse::SetShellContentOrientation(v4);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  if ( v21 < 0 )
  {
    v8 = v21;
    goto LABEL_35;
  }
LABEL_37:
  if ( !v13 && v5 )
    GreDeleteFastMutex((char *)v5);
  return v13;
}
