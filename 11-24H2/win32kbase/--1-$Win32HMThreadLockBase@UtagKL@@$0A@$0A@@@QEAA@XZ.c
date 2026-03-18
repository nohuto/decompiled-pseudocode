/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x1400963B8
 * Callers:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14019F5FC (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009702C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(ULONG_PTR BugCheckParameter3)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent();
  return Win32HM_UnlockFromThread<0>((ULONG_PTR)v2, BugCheckParameter3);
}
