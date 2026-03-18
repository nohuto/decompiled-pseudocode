/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x140171460
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        char *Src,
        void *Srca,
        int a6)
{
  __int64 v7; // r15
  __int64 v10; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  int v18; // ecx
  char *v19; // rcx
  __int64 v20; // rcx
  void *v21; // rdi
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-198h] BYREF
  void (__fastcall *v28)(char *); // [rsp+60h] [rbp-188h]
  void *v29; // [rsp+70h] [rbp-178h]
  _OWORD v30[9]; // [rsp+80h] [rbp-168h] BYREF
  _OWORD v31[9]; // [rsp+110h] [rbp-D8h] BYREF

  v7 = a3;
  memset(v31, 0, sizeof(v31));
  UserSessionState = (_QWORD *)W32GetUserSessionState(v10);
  v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v12;
  v17 = 0;
  if ( v12 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !(unsigned int)IsCurrentProcessDwm(v14, v13, v15, v16) )
  {
    v18 = 5;
LABEL_5:
    UserSetLastError(v18);
    goto LABEL_17;
  }
  if ( !(_DWORD)v7 )
  {
    v18 = 87;
    goto LABEL_5;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  memset(v30, 0, sizeof(v30));
  RtlCopyFromUser(v30, Srca, 0x90uLL);
  v19 = (char *)v31;
  v31[0] = v30[0];
  v31[1] = v30[1];
  v31[2] = v30[2];
  v31[3] = v30[3];
  v31[4] = v30[4];
  v31[5] = v30[5];
  v31[6] = v30[6];
  v31[7] = v30[7];
  v31[8] = v30[8];
  if ( 4 * v7 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = &Src[4 * v7];
  }
  v21 = (void *)Win32AllocPoolWithQuotaZInitImpl((__int64)v19, 4 * v7, 0x6E616D55u);
  v29 = v21;
  if ( v21 )
  {
    if ( v28 != (void (__fastcall *)(char *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v20);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v21, (ULONG_PTR)BugCheckParameter4);
    }
    v23 = PtiCurrent(v20);
    BugCheckParameter2[0] = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v21;
    v28 = GreDeleteFastMutex;
    RtlCopyVolatileMemory(v21, Src, 4 * v7);
    v25 = W32GetUserSessionState(v24);
    v17 = CTouchProcessor::SetManipulationInputTarget(
            *(CTouchProcessor **)(v25 + 3264),
            a1,
            v7,
            (unsigned int *)v21,
            a2,
            (struct TELEMETRY_POINTER_FRAME_TIMES *)v31,
            a6);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    UserSetLastError(8);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v17;
}
