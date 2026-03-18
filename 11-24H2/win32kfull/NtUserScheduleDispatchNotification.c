/*
 * XREFs of NtUserScheduleDispatchNotification @ 0x140118BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserScheduleDispatchNotification(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rdi
  struct tagWND *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  const struct tagUIPI_INFO *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  ULONG_PTR *v19; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateReceivingHwnd(a1, 0LL);
  v5 = 0LL;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v2 + 456);
    *(_QWORD *)(v2 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v3;
    HMLockObject(v3);
    v7 = *((_QWORD *)v6 + 2);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v11 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v10 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(v7 + 464) == v12 )
    {
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v11, v10);
      if ( CurrentThreadNonPaged )
        v15 = *CurrentThreadNonPaged;
      else
        v15 = 0LL;
      if ( v7 == v15
        || UIPrivilegeIsolation::CheckAccess(
             (UIPrivilegeIsolation *)(v12 + 872),
             (const struct tagUIPI_INFO *)(*(_QWORD *)(v7 + 472) + 472LL),
             v14) )
      {
        v18 = (unsigned int)PostEventMessageEx(
                              (struct tagTHREADINFO *)v7,
                              *(struct tagQ **)(v7 + 472),
                              9u,
                              v6,
                              0x60u,
                              0LL,
                              0LL,
                              0LL) != 0
            ? 2
            : 0;
      }
      else
      {
        v18 = 1;
      }
    }
    else
    {
      UserSetLastError(5);
      v18 = 0;
    }
    v19 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v17, v16);
    if ( v19 )
      v5 = *v19;
    Win32HM_UnlockFromThread<0>(v5, BugCheckParameter3);
  }
  else
  {
    v18 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v18;
}
