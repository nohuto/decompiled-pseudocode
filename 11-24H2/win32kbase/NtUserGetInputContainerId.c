/*
 * XREFs of NtUserGetInputContainerId @ 0x1401BAB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ValidateHbwnd @ 0x14011F5D0 (ValidateHbwnd.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ResolveContainerId @ 0x14019C88C (ResolveContainerId.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetInputContainerId(void *Src, __int64 a2, __int64 a3, void *a4)
{
  _QWORD *UserSessionState; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // rsi
  __int16 v17; // cx
  char v18; // al
  char v19; // al
  _OWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // al
  char v24; // al
  _DWORD Srca[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v27; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+60h] [rbp-48h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  v11 = 0;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v28 = 0LL;
  Srca[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v13 = -*(_QWORD *)CurrentProcessWin32Process;
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( isChildPartition(v13) )
    goto LABEL_6;
  v27 = 0LL;
  RtlCopyFromUser(&v27, Src, 0x10uLL);
  v28 = v27;
  if ( !ResolveContainerId((__int64)&v28, (__int64)Srca) || (v16 = ValidateHbwnd(a2)) == 0 || !a3 )
  {
    v15 = 87;
    goto LABEL_7;
  }
  v17 = *(_WORD *)(v14 + 1080);
  if ( v17 || (v18 = 1, *(_WORD *)(v14 + 1082)) )
    v18 = 0;
  if ( !v18 )
  {
    if ( v17 != LOWORD(Srca[0]) || (v19 = 1, *(_WORD *)(v14 + 1082) != HIWORD(Srca[0])) )
      v19 = 0;
    if ( !v19 )
      goto LABEL_6;
  }
  if ( !*(_QWORD *)(v16 + 136) )
  {
    v20 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x14uLL, 0x64636755u);
    *(_QWORD *)(v16 + 136) = v20;
    if ( !v20 )
    {
      v15 = 8;
      goto LABEL_7;
    }
    *v20 = 0LL;
  }
  v21 = *(_QWORD *)(v16 + 136);
  v22 = *(_QWORD *)(v21 + 8);
  if ( v22 )
  {
    if ( v22 != a3 )
      goto LABEL_6;
  }
  if ( *(_WORD *)v21 || (v23 = 1, *(_WORD *)(v21 + 2)) )
    v23 = 0;
  if ( !v23 )
  {
    if ( *(_WORD *)v21 != LOWORD(Srca[0]) || (v24 = 1, *(_WORD *)(v21 + 2) != HIWORD(Srca[0])) )
      v24 = 0;
    if ( !v24 )
    {
LABEL_6:
      v15 = 5;
LABEL_7:
      UserSetLastError(v15);
      goto LABEL_37;
    }
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a4, Srca, 4uLL);
  **(_DWORD **)(v16 + 136) = Srca[0];
  *(_QWORD *)(*(_QWORD *)(v16 + 136) + 8LL) = a3;
  *(_DWORD *)(v14 + 1080) = Srca[0];
  v11 = 1;
LABEL_37:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v11;
}
