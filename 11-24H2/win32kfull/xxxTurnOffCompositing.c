/*
 * XREFs of xxxTurnOffCompositing @ 0x1401FFA68
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalEnumWindow @ 0x14008AD6C (xxxInternalEnumWindow.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x140183E08 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxTurnOffCompositing(struct tagWND **a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  BugCheckParameter3[1] = 0LL;
  v2 = (struct tagWND *)a1;
  BugCheckParameter3[0] = -1LL;
  v3 = 1;
  if ( (_DWORD)a2 )
  {
    v2 = a1[14];
    if ( !v2 )
    {
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, a2);
      return;
    }
    v3 = 3;
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, (__int64)v2);
  }
  xxxInternalEnumWindow(v2, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v3);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v6 = PtiCurrent(v5, v4);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v6, BugCheckParameter3);
  }
}
