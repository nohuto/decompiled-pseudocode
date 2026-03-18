/*
 * XREFs of ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140152C40
 * Callers:
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x140152C18 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 * Callees:
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 */

int *__fastcall Win32HM_UnlockFromThread<1>(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r8
  int *result; // rax

  v2 = *(_QWORD *)(BugCheckParameter2 + 456);
  if ( v2 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 456) = *(_QWORD *)v2;
  result = *(int **)(v2 + 8);
  if ( result )
    return HMUnlockObject(*(int **)(v2 + 8));
  return result;
}
