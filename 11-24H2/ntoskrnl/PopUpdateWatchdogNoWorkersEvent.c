/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1402BC7E4
 * Callers:
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x1405D5E90 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405D5F30 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
