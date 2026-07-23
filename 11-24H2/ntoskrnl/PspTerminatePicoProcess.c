/*
 * XREFs of PspTerminatePicoProcess @ 0x14077A2C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v2;
}
