/*
 * XREFs of IopLiveDumpAddProcesses @ 0x140594950
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessesToDump @ 0x14059C980 (IoAddProcessesToDump.c)
 */

__int64 __fastcall IopLiveDumpAddProcesses(__int64 a1, __int64 a2)
{
  return IoAddProcessesToDump(a2, IopLiveDumpAddProcessesCallback, a1);
}
