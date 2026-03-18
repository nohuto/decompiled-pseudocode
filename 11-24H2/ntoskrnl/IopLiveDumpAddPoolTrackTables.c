/*
 * XREFs of IopLiveDumpAddPoolTrackTables @ 0x140597F30
 * Callers:
 *     <none>
 * Callees:
 *     ExAddPrivateDataToCrashDump @ 0x140653D7C (ExAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPoolTrackTables(__int64 a1, __int64 a2)
{
  return ExAddPrivateDataToCrashDump(a2);
}
