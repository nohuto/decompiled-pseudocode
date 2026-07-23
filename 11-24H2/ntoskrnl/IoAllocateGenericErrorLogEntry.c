/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140593838
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14071046C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140720FF0 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A11CEC (MiLogFailedDriverLoad.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14049D66C (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
