/*
 * XREFs of MmLockLoadedDataTableEntryShared @ 0x14036D178
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     RtlPcToFilePath @ 0x140AA3620 (RtlPcToFilePath.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntryShared(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 0LL);
}
