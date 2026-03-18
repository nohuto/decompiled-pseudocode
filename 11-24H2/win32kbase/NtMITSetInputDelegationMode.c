/*
 * XREFs of NtMITSetInputDelegationMode @ 0x14016B1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ProcessInfoFromPID @ 0x140120264 (ProcessInfoFromPID.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     SetInputDelegationModeImpl @ 0x14018980C (SetInputDelegationModeImpl.c)
 *     CitEnableKeyboardDelegation @ 0x1401971A8 (CitEnableKeyboardDelegation.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A9E14 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagPROCESSINFO *ProcessInfo; // rbx
  struct tagPROCESSINFO *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  _BYTE v21[80]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-58h] BYREF

  v5 = a2;
  v7 = (unsigned int)a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !IsInputThread(v10) )
    goto LABEL_4;
  if ( a4 )
  {
    if ( !(_DWORD)v7 || !a3 || (a4 & 0xFFFFFFF8) != 0 )
    {
      v12 = 87;
      goto LABEL_5;
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v11) + 18960)
      || (v15 = W32GetUserSessionState(v14),
          (_DWORD)v7 != ((unsigned int)PsGetThreadProcessId(**(PETHREAD **)(v15 + 18960)) & 0xFFFFFFFC)) )
    {
LABEL_4:
      v12 = 5;
LABEL_5:
      v13 = 0;
      UserSetLastError(v12);
      goto LABEL_18;
    }
  }
  v13 = SetInputDelegationModeImpl((unsigned int)v7, (unsigned int)v5, a3, a4);
  if ( v13 && (_DWORD)v5 )
  {
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      CLockProcessByPid::CLockProcessByPid(v22, v7, 0LL);
      CLockProcessByPid::CLockProcessByPid(v21, v5, 0LL);
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v21);
      v17 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v22);
      CitEnableKeyboardDelegation(a4 & 1, v17, ProcessInfo);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v21);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v22);
    }
    else
    {
      v18 = ProcessInfoFromPID(v5);
      v19 = ProcessInfoFromPID(v7);
      CitEnableKeyboardDelegation(a4 & 1, v19, v18);
    }
  }
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v13;
}
