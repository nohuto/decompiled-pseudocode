/*
 * XREFs of KeUpdateTebSchedulingPropertiesCurrentThread @ 0x1402057C8
 * Callers:
 *     PspUserThreadStartup @ 0x1408FEA00 (PspUserThreadStartup.c)
 * Callees:
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140205818 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 */

void KeUpdateTebSchedulingPropertiesCurrentThread()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiUpdateTebSchedulingPropertiesCurrentThread();
  KeLeaveCriticalRegion();
}
