/*
 * XREFs of MiLockLoadedDataTableEntry @ 0x1402BBABC
 * Callers:
 *     MmLockLoadedDataTableEntryShared @ 0x1402BA46C (MmLockLoadedDataTableEntryShared.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402BA56C (LdrpKrnGetDataTableEntry.c)
 *     MmLockLoadedDataTableEntry @ 0x1402BBA08 (MmLockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3DC4 (MmVerifyCallbackFunctionCheckFlags.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6F40 (KasaniGetModuleFromAddress.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140C5E090 (MmDiscardDriverSection.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402BC170 (MmReleaseLoadLockShared.c)
 */

__int64 __fastcall MiLockLoadedDataTableEntry(__int64 a1, int a2)
{
  __int64 DataTableEntryByAddress; // rax
  __int64 v5; // r11
  __int64 v6; // rbx

  MiAcquireLoadLock(0LL);
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v6 = DataTableEntryByAddress;
  if ( DataTableEntryByAddress )
  {
    MiLockLoaderEntry(DataTableEntryByAddress, a2 == 0 ? 2 : 0);
    return v6;
  }
  else
  {
    MmReleaseLoadLockShared(v5);
    return 0LL;
  }
}
