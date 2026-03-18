/*
 * XREFs of ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x14021AE18
 * Callers:
 *     NtUserGetDCompositionHwndBitmap @ 0x14021AD20 (NtUserGetDCompositionHwndBitmap.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140168E9C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall GetWindowCompositionVisualBitmap(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  unsigned int WindowCompositionVisualBitmap; // ebx
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    if ( *(_QWORD *)(v4 + 464) == *(_QWORD *)(*((_QWORD *)v7 + 2) + 464LL) )
    {
      WindowCompositionVisualBitmap = _GetWindowCompositionVisualBitmap(v7, a2);
    }
    else
    {
      WindowCompositionVisualBitmap = -1073741811;
      UserSetLastError(5);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  else
  {
    WindowCompositionVisualBitmap = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return WindowCompositionVisualBitmap;
}
