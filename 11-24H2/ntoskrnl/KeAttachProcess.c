/*
 * XREFs of KeAttachProcess @ 0x14047B6B0
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405C7080 (KiExecuteDpcDelegate.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAttachProcess @ 0x140322460 (KiAttachProcess.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v3; // r8
  unsigned __int8 v4; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    if ( CurrentThread->ApcStateIndex
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
      || (*(_DWORD *)&Process->0 & 0x800) != 0 )
    {
      KeBugCheckEx(
        5u,
        (ULONG_PTR)Process,
        (ULONG_PTR)v3,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    }
    KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, &v4);
    KiAttachProcess((ULONG_PTR)CurrentThread, (__int64)Process, v4, 0, (__int64)&CurrentThread->600);
  }
}
