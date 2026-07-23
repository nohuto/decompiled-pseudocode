/*
 * XREFs of KeUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDA8
 * Callers:
 *     PspUserThreadStartup @ 0x1409212E0 (PspUserThreadStartup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDF8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

void KeUpdateTebSchedulingPropertiesCurrentThread()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiUpdateTebSchedulingPropertiesCurrentThread();
  KeLeaveCriticalRegion();
}
