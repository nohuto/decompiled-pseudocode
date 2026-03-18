/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ @ 0x140183910
 * Callers:
 *     xxxTimersProc_Old @ 0x140289ED0 (xxxTimersProc_Old.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32HMThreadLockBase<tagTIMER,1,1>::~Win32HMThreadLockBase<tagTIMER,1,1>(
        _QWORD *BugCheckParameter3,
        __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  if ( *BugCheckParameter3 != -1LL )
  {
    v3 = PtiCurrent((__int64)BugCheckParameter3, a2);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v3, BugCheckParameter3);
  }
}
