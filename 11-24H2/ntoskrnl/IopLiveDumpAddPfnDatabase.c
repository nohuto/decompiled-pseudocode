/*
 * XREFs of IopLiveDumpAddPfnDatabase @ 0x140597F10
 * Callers:
 *     <none>
 * Callees:
 *     MmAddPrivateDataToCrashDump @ 0x140677874 (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPfnDatabase(__int64 a1, __int64 a2)
{
  return MmAddPrivateDataToCrashDump(a2, 1LL);
}
