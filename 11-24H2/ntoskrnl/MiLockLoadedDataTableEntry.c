/*
 * XREFs of MiLockLoadedDataTableEntry @ 0x1402C6F3C
 * Callers:
 *     MmLockLoadedDataTableEntry @ 0x1402C6E88 (MmLockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402C830C (LdrpKrnGetDataTableEntry.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1402C85E8 (MmLockLoadedDataTableEntryShared.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F64C4 (MmVerifyCallbackFunctionCheckFlags.c)
 *     KasaniGetModuleFromAddress @ 0x1405A9FD0 (KasaniGetModuleFromAddress.c)
 *     MmWriteSystemImageTracepoint @ 0x14067DBF0 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140C5BF00 (MmDiscardDriverSection.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     MiLockLoaderEntry @ 0x1402C7520 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402C75F0 (MmReleaseLoadLockShared.c)
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
