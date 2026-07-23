/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x140777250
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  KeGenericProcessorCallback(
    (__int64 *)&KeActiveProcessors,
    (char (__fastcall *)(__int64, __int64))xHalTimerWatchdogStop,
    0LL,
    2);
  return KeSetEvent(Event, 0, 0);
}
