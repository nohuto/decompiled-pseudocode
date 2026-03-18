/*
 * XREFs of IopPartialDumpAddProcessesCallback @ 0x14059DC80
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessThreadsToDump @ 0x14059C8DC (IoAddProcessThreadsToDump.c)
 */

__int64 __fastcall IopPartialDumpAddProcessesCallback(__int64 a1, __int64 a2)
{
  return IoAddProcessThreadsToDump(a1, a2);
}
