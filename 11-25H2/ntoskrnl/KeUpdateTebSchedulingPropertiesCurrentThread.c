/*
 * XREFs of KeUpdateTebSchedulingPropertiesCurrentThread @ 0x140206238
 * Callers:
 *     PspUserThreadStartup @ 0x14090AF50 (PspUserThreadStartup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140207198 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

void KeUpdateTebSchedulingPropertiesCurrentThread()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiUpdateTebSchedulingPropertiesCurrentThread();
  KeLeaveCriticalRegion();
}
