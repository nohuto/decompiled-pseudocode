/*
 * XREFs of NtUserLayoutCompleted @ 0x1400874F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1400873CC (GreWindowLayoutComplete.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     EtwTraceLayoutChangeStop @ 0x140087828 (EtwTraceLayoutChangeStop.c)
 *     HandleAsyncResizeComplete @ 0x14022515C (HandleAsyncResizeComplete.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     DwmAsyncCancelRotationDelay @ 0x140323204 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  Gre::Base *v14; // rcx
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+48h] [rbp+10h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateReceivingHwnd(a1, 0LL);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    EtwTraceLayoutChangeStop(v2, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v8 = (void *)ReferenceDwmApiPort(v7, v6);
      DwmAsyncCancelRotationDelay(v8);
    }
    PostIAMShellHookMessage(0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      v13 = TopLevelWindow;
      if ( TopLevelWindow )
      {
        v10 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v10 + 42) & 0x2FFF;
        if ( (_DWORD)v9 != 669 )
        {
          v14 = *(Gre::Base **)TopLevelWindow;
          v18 = 0;
          GreWindowLayoutComplete(v14, v9, v12, &v18);
          if ( v18 )
            HandleAsyncResizeComplete(v13);
        }
      }
    }
    v15 = PtiCurrent(v10, v9);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
