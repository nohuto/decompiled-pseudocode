/*
 * XREFs of NtUserCreateActivationObject @ 0x14012F500
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E0E88 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserCreateActivationObject(HWND a1, void *Src, void *a3)
{
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  int v8; // ebx
  ULONG v9; // ecx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _OBJECT_ATTRIBUTES *v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // eax
  char v18; // [rsp+20h] [rbp-68h]
  unsigned __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  struct _LUID Srca; // [rsp+A8h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  v8 = 0;
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  Srca = 0LL;
  if ( !a1 )
  {
    v9 = 87;
LABEL_5:
    UserSetLastError(v9);
    goto LABEL_11;
  }
  v19 = 0LL;
  RtlCopyFromUser(&v19, Src, 8uLL);
  v10 = v19;
  v12 = W32GetUserSessionState(v11);
  v16 = CActivationObjectManager::CreateActivationObject(
          *(CActivationObjectManager **)(v12 + 18920),
          v13,
          v14,
          v15,
          v18,
          a1,
          v10,
          &Srca);
  if ( v16 < 0 )
  {
    v9 = RtlNtStatusToDosError(v16);
    goto LABEL_5;
  }
  v8 = 1;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a3, &Srca, 8uLL);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v8;
}
