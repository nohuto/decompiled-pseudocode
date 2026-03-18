/*
 * XREFs of NtUserToUnicodeEx @ 0x140173450
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     xxxToUnicodeEx @ 0x140097A90 (xxxToUnicodeEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401A8F70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(
        unsigned int a1,
        unsigned int a2,
        const void *a3,
        volatile void *a4,
        int a5,
        char a6,
        __int64 a7)
{
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 UserSessionState; // rsi
  struct _W32THREADNONPAGED *CurrentThreadWin32Thread; // rbx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  SIZE_T v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rax
  struct tagTHREADINFO *v25; // rax
  int v27; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-1B0h] BYREF
  _QWORD *v29; // [rsp+50h] [rbp-1A8h]
  __int64 v30; // [rsp+58h] [rbp-1A0h]
  void *Src; // [rsp+70h] [rbp-188h]
  volatile void *Address; // [rsp+78h] [rbp-180h]
  __int64 v33; // [rsp+88h] [rbp-170h]
  _QWORD v34[2]; // [rsp+A0h] [rbp-158h] BYREF
  char v35[256]; // [rsp+B0h] [rbp-148h] BYREF

  Address = a4;
  v33 = a7;
  v10 = 0LL;
  v34[0] = 0LL;
  Src = 0LL;
  v27 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)&BugCheckParameter2);
  UserSessionState = W32GetUserSessionState(v11);
  CurrentThreadWin32Thread = (struct _W32THREADNONPAGED *)PsGetCurrentThreadWin32Thread();
  KeEnterCriticalRegion();
  _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
    *(struct _FAST_ERESOURCE **)UserSessionState,
    CurrentThreadWin32Thread);
  v14 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread )
    *(_BYTE *)(v14 + 1708) = 1;
  else
    v14 = 0LL;
  *(_QWORD *)(UserSessionState + 24) = v14;
  if ( v14 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19744);
    DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(UserSessionState + 19800));
    DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(UserSessionState + 19784));
  }
  PsGetCurrentThreadWin32Thread();
  if ( a5 > 0 )
  {
    RtlCopyVolatileMemory(v35, a3, 0x100uLL);
    v16 = 2LL * a5;
    ProbeForWrite(Address, v16, 2u);
    if ( a5 >= 4 )
    {
      v18 = (_QWORD *)Win32AllocPoolWithQuotaZInitImpl(v17, v16, 0x62757355u);
      Src = v18;
      if ( !v18 )
        ExRaiseStatus(-1073741801);
      v27 = 1;
      if ( v30 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v19);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)&BugCheckParameter2, (ULONG_PTR)v18, (ULONG_PTR)BugCheckParameter4);
      }
      v21 = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( v21 )
        v22 = *v21;
      else
        v22 = 0LL;
      BugCheckParameter2 = *(_QWORD *)(v22 + 384);
      *(_QWORD *)(v22 + 384) = &BugCheckParameter2;
      v29 = v18;
      v30 = (__int64)GreDeleteFastMutex;
    }
    else
    {
      v18 = v34;
      Src = v34;
    }
    v15 = xxxToUnicodeEx(a1, a2, v35, (__int64)v18, a5, a6, v33);
    memmove((void *)Address, Src, v16);
    if ( v27 )
    {
      if ( v30 == -1 )
      {
        v25 = PtiCurrent(v23);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)&BugCheckParameter2, 0LL, (ULONG_PTR)v25);
      }
      v24 = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( v24 )
        v10 = *v24;
      *(_QWORD *)(v10 + 384) = BugCheckParameter2;
      if ( v29 )
        ((void (*)(void))v30)();
      v30 = -1LL;
    }
  }
  else
  {
    v15 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)&BugCheckParameter2);
  return v15;
}
