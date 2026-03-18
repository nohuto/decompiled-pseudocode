/*
 * XREFs of NtUserSetSysColors @ 0x140171750
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x14009F5A0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400D1188 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z @ 0x140150EE0 (--0-$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??1?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ @ 0x14019E454 (--1-$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetSysColors(__int64 a1, const void *a2, const void *a3, unsigned int a4)
{
  __int64 v6; // r13
  char *v7; // rdi
  char *v8; // rsi
  _QWORD *UserSessionState; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r14
  bool v13; // r9
  bool v14; // r9
  __int64 v15; // rcx
  int v16; // r14d
  int v18; // eax
  __int64 v19; // r14
  char *v20; // rax
  __int64 v21; // rcx
  char *v22; // rax
  __int64 v23; // rcx
  _DWORD v24[8]; // [rsp+48h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v26[3]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v27[3]; // [rsp+98h] [rbp-40h] BYREF

  v6 = (unsigned int)a1;
  v7 = 0LL;
  v8 = 0LL;
  v24[0] = 0x2000;
  v24[1] = -1;
  v24[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v12 = PtiCurrent(v11);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v12 + 58), 8u)
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v12 + 58) + 872LL),
            (const struct tagUIPI_INFO *)v24,
            0LL,
            v14) )
    {
LABEL_6:
      v16 = 0;
      UserSetLastError(5);
      goto LABEL_7;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 0x20000000) != 0 )
      v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 58) + 760LL) + 32LL) & 8;
    else
      v18 = 0;
    if ( v18
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v12 + 58) + 872LL),
            (const struct tagUIPI_INFO *)v24,
            0LL,
            v13) )
    {
      goto LABEL_6;
    }
    v7 = 0LL;
    v8 = 0LL;
  }
  if ( (_DWORD)v6 )
  {
    v19 = 4 * v6;
    if ( 4 * v6 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (__int64)a2 + v19;
      if ( v19 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (__int64)a3 + v19;
      }
    }
    v20 = (char *)Win32AllocPoolWithQuotaZInitImpl(v15, 4 * v6, 0x72637355u);
    v7 = v20;
    if ( !v20 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v20, a2, 4 * v6);
    v22 = (char *)Win32AllocPoolWithQuotaZInitImpl(v21, 4 * v6, 0x76637355u);
    v8 = v22;
    if ( !v22 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v22, a3, 4 * v6);
  }
  Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(v27, (__int64)v7);
  Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(v26, (__int64)v8);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  CreateProfileUserName(BugCheckParameter2);
  v16 = xxxSetSysColors(v23, (unsigned int)v6, v7, v8, a4);
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
  Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(v26);
  Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(v27);
  if ( v7 )
    GreDeleteFastMutex(v7);
  if ( v8 )
    GreDeleteFastMutex(v8);
LABEL_7:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v16;
}
