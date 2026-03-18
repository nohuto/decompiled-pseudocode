/*
 * XREFs of NtUserEnableMouseInPointer @ 0x14013A230
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     GetAppCompatFlags2QuadWord @ 0x140110BA4 (GetAppCompatFlags2QuadWord.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // ecx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx

  v1 = (int)a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v5 = 0LL;
  UserSessionState[3] = v3;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( ((_DWORD)v1 != 0) == (_DWORD)v1 )
  {
    if ( !(_DWORD)v1
      || (v7 = PtiCurrent(v4), ((unsigned __int64)GetAppCompatFlags2QuadWord((__int64)v7, v8) & 0x80000000000LL) == 0) )
    {
      v9 = *((_QWORD *)PtiCurrent(v4) + 58);
      v10 = *(_QWORD *)(v9 + 816);
      if ( (_DWORD)v1 == ((v10 >> 2) & 1) || (v10 & 8) == 0 )
      {
        v5 = 1LL;
        *(_QWORD *)(v9 + 816) = (4 * v1) ^ (v10 ^ (4 * v1)) & 0xFFFFFFFFFFFFFFFBuLL | 8;
        goto LABEL_12;
      }
    }
    v6 = 5;
  }
  else
  {
    v6 = 87;
  }
  UserSetLastError(v6);
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
