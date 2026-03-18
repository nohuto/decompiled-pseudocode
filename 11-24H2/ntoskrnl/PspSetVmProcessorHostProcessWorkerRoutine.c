/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x140777030
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
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
