/*
 * XREFs of PspTerminatePicoProcess @ 0x14076A510
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x14091D668 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
  return v2;
}
