/*
 * XREFs of NtUserConfigureActivationObject @ 0x14013A410
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0BA0 (-ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REA.c)
 *     ValidateHbwnd @ 0x14011F5D0 (ValidateHbwnd.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1401A6B80 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1401A6D48 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(void *Src, unsigned int a2, unsigned int a3, int a4, int a5)
{
  _QWORD *UserSessionState; // rdi
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  ULONG v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int CurrentProcessId; // eax
  unsigned int v21; // edx
  NTSTATUS v22; // eax
  struct _LUID v24; // [rsp+40h] [rbp-58h] BYREF
  struct _LUID v25; // [rsp+48h] [rbp-50h] BYREF
  __int128 v26; // [rsp+58h] [rbp-40h] BYREF
  __int128 v27; // [rsp+68h] [rbp-30h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  v11 = 0;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v25 = 0LL;
  RtlCopyFromUser(&v25, Src, 8uLL);
  v24 = v25;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v16 = (unsigned int)IsCurrentProcessDwm(v13, v12, v14, v15) == 0;
      goto LABEL_6;
    }
LABEL_15:
    v17 = 87;
    goto LABEL_8;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v26 = 0LL;
  v27 = 0LL;
  v18 = W32GetUserSessionState(v13);
  if ( (int)CActivationObjectManager::QueryActivationObjectData(
              *(CActivationObjectManager **)(v18 + 18920),
              &v24,
              (struct _tagActivationObjectData *)&v26) < 0 )
    goto LABEL_15;
  if ( HIDWORD(v27) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_7;
  v19 = ValidateHbwnd(*((__int64 *)&v26 + 1));
  if ( !v19 )
    goto LABEL_15;
  if ( *(_QWORD *)(v19 + 136) )
    goto LABEL_17;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v16 = !ForegroundManagement::CheckProcessForeground((ForegroundManagement *)(CurrentProcessId & 0xFFFFFFFC), v21);
LABEL_6:
  if ( v16 )
  {
LABEL_7:
    v17 = 5;
    goto LABEL_8;
  }
LABEL_17:
  v22 = ForegroundManagement::ConfigureActivationObject((__int64)&v24, a2, a3, a4, a5);
  if ( v22 >= 0 )
  {
    v11 = 1;
    goto LABEL_20;
  }
  v17 = RtlNtStatusToDosError(v22);
LABEL_8:
  UserSetLastError(v17);
LABEL_20:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v11;
}
