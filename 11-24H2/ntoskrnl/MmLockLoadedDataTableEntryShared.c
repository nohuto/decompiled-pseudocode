/*
 * XREFs of MmLockLoadedDataTableEntryShared @ 0x1402C85E8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     RtlPcToFilePath @ 0x140A8F850 (RtlPcToFilePath.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntryShared(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 0);
}
