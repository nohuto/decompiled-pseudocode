/*
 * XREFs of MiLockLoadedDataTableEntry @ 0x14036DEDC
 * Callers:
 *     MmLockLoadedDataTableEntryShared @ 0x14036D178 (MmLockLoadedDataTableEntryShared.c)
 *     LdrpKrnGetDataTableEntry @ 0x14036D5C4 (LdrpKrnGetDataTableEntry.c)
 *     MmLockLoadedDataTableEntry @ 0x14036D7C4 (MmLockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3D14 (MmVerifyCallbackFunctionCheckFlags.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6640 (KasaniGetModuleFromAddress.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140C4AB80 (MmDiscardDriverSection.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x14036E590 (MmReleaseLoadLockShared.c)
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
