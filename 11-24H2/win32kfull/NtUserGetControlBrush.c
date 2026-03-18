/*
 * XREFs of NtUserGetControlBrush @ 0x14003A730
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlBrush @ 0x14003A374 (xxxGetControlBrush.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, HWND a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 ControlBrush; // rdi
  __int64 v9; // rsi
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateReceivingHwnd(a1, 1LL);
  ControlBrush = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    if ( a2 && a3 - 306 <= 6 )
      ControlBrush = xxxGetControlBrush(v9, a2, a3);
    v10 = PtiCurrent();
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit();
  return ControlBrush;
}
