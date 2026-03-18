/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140596858
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1407128DC (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140723460 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A18B7C (MiLogFailedDriverLoad.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1404A26DC (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
