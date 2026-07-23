/*
 * XREFs of VrpFindDiffHiveEntryForMountPoint @ 0x14092CD9C
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14083F834 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpUnlockDiffHiveTable @ 0x14092CDEC (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableShared @ 0x14092CE50 (VrpLockDiffHiveTableShared.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPoint(PCUNICODE_STRING String1)
{
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v3; // rbx

  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v3 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  VrpUnlockDiffHiveTable();
  return v3;
}
