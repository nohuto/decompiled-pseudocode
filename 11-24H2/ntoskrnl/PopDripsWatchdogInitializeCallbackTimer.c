/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140C337FC
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140C3371C (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x140749388 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx

  v0 = PopDripsCallbackInterval;
  if ( PopDripsCallbackInterval || (v0 = PopDirectedDripsTimeout) != 0 )
  {
    dword_140F071A0 = v0;
    PopInitializeTimer(
      (__int64)&unk_140F070F0,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogCallbackWorker,
      (__int64)&PopDripsWatchdogContext);
    if ( PopDripsWatchdogDebounceInterval )
      PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
    if ( PopDripsWatchdogDebounceTickInterval == 1 )
      PopDripsWatchdogDebounceTickInterval = 2;
    dword_140F071A4 |= 1u;
  }
  return 0LL;
}
