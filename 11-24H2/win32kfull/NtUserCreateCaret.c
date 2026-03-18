/*
 * XREFs of NtUserCreateCaret @ 0x1401D2340
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxCreateCaret @ 0x140091710 (xxxCreateCaret.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, Gre::Base *a2, int a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int Caret; // edi
  struct tagWND *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a1, 1LL);
  Caret = 0;
  v12 = (struct tagWND *)v9;
  if ( v9 )
  {
    Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
    Caret = xxxCreateCaret(v12, a2, a3, a4);
    v15 = PtiCurrent(v14, v13);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v10);
  return Caret;
}
