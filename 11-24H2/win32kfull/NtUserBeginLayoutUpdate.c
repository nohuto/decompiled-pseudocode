/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1401E2570
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E2664 (GreWindowBeginLayoutUpdate.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 TopLevelWindow; // rax
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( (((*(_WORD *)(v4 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
      if ( !IsTopLevelWindow(v6) && *(char *)(*(_QWORD *)(v6 + 40) + 25LL) < 0 )
      {
        TopLevelWindow = GetTopLevelWindow(v6);
        if ( TopLevelWindow )
        {
          v7 = *(_QWORD *)(TopLevelWindow + 40);
          v8 = *(_WORD *)(v7 + 42) & 0x2FFF;
          if ( (_DWORD)v8 != 669 && *(char *)(v7 + 25) < 0 )
            GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow);
        }
      }
      v10 = PtiCurrent(v8, v7);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
      v5 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
