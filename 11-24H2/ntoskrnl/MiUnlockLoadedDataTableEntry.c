/*
 * XREFs of MiUnlockLoadedDataTableEntry @ 0x1402BBA24
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x1402BA56C (LdrpKrnGetDataTableEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3DC4 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140C5E090 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402BBE90 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 */

__int64 __fastcall MiUnlockLoadedDataTableEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rcx

  MiUnlockLoaderEntry(a1, a2 == 0 ? 2 : 0);
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 0LL);
}
