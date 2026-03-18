/*
 * XREFs of NtUserGetControlColor @ 0x1401FFEC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1400385D0 (xxxGetControlColor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, HWND a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 ControlColor; // rdi
  struct tagWND *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagDRAWITEMSTRUCT **v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  struct tagTHREADINFO *v19; // rax
  ULONG_PTR v21[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a1, 1LL);
  ControlColor = 0LL;
  v12 = (struct tagWND *)v9;
  if ( v9 )
  {
    Win32HM_LockIntoThread<0>(v8, v9, v21);
    v15 = (struct tagDRAWITEMSTRUCT **)ValidateHwnd(a2);
    if ( v15 && a3 && a4 - 306 <= 6 )
    {
      Win32HM_LockIntoThread<0>(v8, (__int64)v15, BugCheckParameter3);
      ControlColor = xxxGetControlColor(v12, v15, a3, a4);
      v18 = PtiCurrent(v17, v16);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, BugCheckParameter3);
    }
    v19 = PtiCurrent(v14, v13);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v19, v21);
  }
  UserSessionSwitchLeaveCrit(v10);
  return ControlColor;
}
