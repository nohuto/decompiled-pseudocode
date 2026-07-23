/*
 * XREFs of MmLockLoadedDataTableEntryShared @ 0x1402BA46C
 * Callers:
 *     RtlPcToFilePath @ 0x140A15C50 (RtlPcToFilePath.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntryShared(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 0LL);
}
