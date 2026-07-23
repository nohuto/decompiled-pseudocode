/*
 * XREFs of MmUnlockLoadedDataTableEntryShared @ 0x1404AEB90
 * Callers:
 *     RtlPcToFilePath @ 0x140A15C50 (RtlPcToFilePath.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402BBE90 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
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
