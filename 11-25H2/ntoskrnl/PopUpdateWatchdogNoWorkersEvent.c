/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14045831C
 * Callers:
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x1405D3FA0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405D4040 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
