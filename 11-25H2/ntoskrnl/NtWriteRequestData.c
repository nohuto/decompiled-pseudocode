/*
 * XREFs of NtWriteRequestData @ 0x140735680
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 */

__int64 NtWriteRequestData()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return 3221225659LL;
}
