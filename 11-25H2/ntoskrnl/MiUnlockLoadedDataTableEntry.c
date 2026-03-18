/*
 * XREFs of MiUnlockLoadedDataTableEntry @ 0x14036DE44
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x14036D5C4 (LdrpKrnGetDataTableEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3D14 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140C4AB80 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14036E2B0 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
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
