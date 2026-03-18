/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x140B94E00
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x140613F08 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140B94E80 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimer(&ViShutdownWatchdogTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
