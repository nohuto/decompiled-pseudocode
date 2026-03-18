/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140458FA8
 * Callers:
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x1405D89F0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405D8A90 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
