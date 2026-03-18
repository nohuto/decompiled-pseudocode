/*
 * XREFs of KeForceAttachProcess @ 0x14042D8D0
 * Callers:
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MmQueryCommitReleaseState @ 0x14047DB54 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066AB1C (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
