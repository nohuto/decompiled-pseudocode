/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x140B96E00
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x1406124C8 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140B96E80 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimer(&ViShutdownWatchdogTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
