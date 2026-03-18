/*
 * XREFs of MmUnlockLoadedDataTableEntryShared @ 0x14036CEEC
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     RtlPcToFilePath @ 0x140AA3620 (RtlPcToFilePath.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14036E2B0 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntryShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx

  MiUnlockLoaderEntry(a1, 2LL);
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 0LL);
}
