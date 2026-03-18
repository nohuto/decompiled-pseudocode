/*
 * XREFs of ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009702C
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x1400960F0 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x140096354 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x1400963B8 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     xxxActivateKeyboardLayout @ 0x140096850 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 */

int *__fastcall Win32HM_UnlockFromThread<0>(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(BugCheckParameter2 + 456);
  if ( v2 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 456) = *(_QWORD *)v2;
  return HMUnlockObject(*(int **)(v2 + 8));
}
