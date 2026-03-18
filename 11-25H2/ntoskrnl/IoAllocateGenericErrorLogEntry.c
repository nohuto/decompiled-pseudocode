/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1405931A8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1407067DC (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140717360 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A1375C (MiLogFailedDriverLoad.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1404A2CDC (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
