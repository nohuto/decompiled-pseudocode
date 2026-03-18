/*
 * XREFs of MiUnlockLoadedDataTableEntry @ 0x1402C6EA4
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x1402C830C (LdrpKrnGetDataTableEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F64C4 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x14067DBF0 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140C5BF00 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402C7310 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
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
