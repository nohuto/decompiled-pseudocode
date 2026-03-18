/*
 * XREFs of MmUnlockLoadedDataTableEntryShared @ 0x1404B4344
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     RtlPcToFilePath @ 0x140A8F850 (RtlPcToFilePath.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402C7310 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntryShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx

  MiUnlockLoaderEntry(a1, 2);
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock((__int64)CurrentThread, 0);
}
