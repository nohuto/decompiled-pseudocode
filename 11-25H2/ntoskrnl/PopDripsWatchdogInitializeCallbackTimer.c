/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140C225C0
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140C224E0 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x14073D378 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx

  v0 = PopDripsCallbackInterval;
  if ( PopDripsCallbackInterval || (v0 = PopDirectedDripsTimeout) != 0 )
  {
    dword_140F06B20 = v0;
    PopInitializeTimer(
      (__int64)&unk_140F06A70,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogCallbackWorker,
      (__int64)&PopDripsWatchdogContext);
    if ( PopDripsWatchdogDebounceInterval )
      PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
    if ( PopDripsWatchdogDebounceTickInterval == 1 )
      PopDripsWatchdogDebounceTickInterval = 2;
    dword_140F06B24 |= 1u;
  }
  return 0LL;
}
