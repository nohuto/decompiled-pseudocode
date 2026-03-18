/*
 * XREFs of IopLiveDumpAddProcesses @ 0x140598060
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessesToDump @ 0x1405A0164 (IoAddProcessesToDump.c)
 */

__int64 __fastcall IopLiveDumpAddProcesses(__int64 a1, __int64 a2)
{
  return IoAddProcessesToDump(a2, IopLiveDumpAddProcessesCallback, a1);
}
