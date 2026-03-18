/*
 * XREFs of PspTerminatePicoProcess @ 0x14077A1C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x140939700 (PspTerminateProcess.c)
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
