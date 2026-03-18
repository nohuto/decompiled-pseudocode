/*
 * XREFs of NtUserPaintMenuBar @ 0x1401D8040
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateReceivingHwnd(a1, 1LL);
  v13 = 0;
  v14 = v11;
  if ( v11 )
  {
    Win32HM_LockIntoThread<0>(v10, v11, BugCheckParameter3);
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0xC0) == 0x40 )
      goto LABEL_3;
    if ( (a6 & 0xFFFFFFFE) != 0 )
    {
      UserSetLastError(1004);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
      goto LABEL_5;
    }
    if ( a3 < 0 || a4 < 0 || a5 < 0 )
LABEL_3:
      UserSetLastError(87);
    else
      v13 = xxxPaintMenuBar(v14, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
    v17 = PtiCurrent(v16, v15);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v17, BugCheckParameter3);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
