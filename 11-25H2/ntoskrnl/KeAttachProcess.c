/*
 * XREFs of KeAttachProcess @ 0x140203A10
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405C2CE0 (KiExecuteDpcDelegate.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAttachProcess @ 0x1402891A0 (KiAttachProcess.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // edi
  struct _KPROCESS *v3; // r8
  int v4; // r8d
  char v5; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (int)Process;
  v5 = 0;
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
    KiAcquireThreadLockRaiseToDpc(CurrentThread, &v5);
    LOBYTE(v4) = v5;
    KiAttachProcess((_DWORD)CurrentThread, v2, v4, 0, (__int64)&CurrentThread->600);
  }
}
