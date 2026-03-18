/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x140108650
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140045D30 (IsValidKernelDpiAwarenessContext.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x140046CE4 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, int a2)
{
  unsigned int v3; // esi
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 i; // rsi

  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v3) )
    goto LABEL_18;
  if ( (v3 & 0xF) == 1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v6 = 511LL;
    if ( ((v3 >> 8) & 0x1FF) != *(_WORD *)(v8 + 272) )
    {
LABEL_18:
      UserSetLastError(87);
LABEL_19:
      v11 = 0LL;
      goto LABEL_20;
    }
  }
  v9 = *((_QWORD *)PtiCurrent(v6) + 58);
  v10 = *(_QWORD *)(v9 + 816);
  if ( (v10 & 0x400000) != 0 && (!a2 || (v3 & 0xF) == 0 || *(_DWORD *)(v9 + 268) != 18) )
    goto LABEL_19;
  v11 = 1LL;
  *(_QWORD *)(v9 + 816) = v10 | 0x400000;
  if ( *(_DWORD *)(v9 + 268) != v3 )
  {
    *(_DWORD *)(v9 + 268) = v3;
    v12 = *(_QWORD *)(v9 + 656);
    if ( v12 )
    {
      for ( i = *(_QWORD *)(v12 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v9, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v9, *(struct tagWND **)(i + 112));
      }
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v11;
}
