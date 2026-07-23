/*
 * XREFs of KeForceAttachProcess @ 0x140424E30
 * Callers:
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MmQueryCommitReleaseState @ 0x140478DE4 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066BCEC (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall KeForceAttachProcess(_KPROCESS *BugCheckParameter1, _OWORD *a2, char a3)
{
  _OWORD *v4; // r8
  struct _KTHREAD *CurrentThread; // r8
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  memset(v7, 0, sizeof(v7));
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex )
      KeBugCheckEx(
        5u,
        (ULONG_PTR)BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        0LL);
    v4 = v7;
  }
  return KiStackAttachProcess(BugCheckParameter1, 2 * (a3 & 1) + 1, (__int64)v4);
}
