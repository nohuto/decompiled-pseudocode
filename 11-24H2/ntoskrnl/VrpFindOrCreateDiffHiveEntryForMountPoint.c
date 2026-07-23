/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092C6BC (VrpLoadDifferencingHive.c)
 * Callees:
 *     VrpAllocateDiffHiveEntry @ 0x14083F6D0 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14083F834 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpUnlockDiffHiveTable @ 0x14092CDEC (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableShared @ 0x14092CE50 (VrpLockDiffHiveTableShared.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14092CEBC (VrpLockDiffHiveTableExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  _QWORD *DiffHiveEntry; // rbx
  __int64 DiffHiveEntryForMountPointWithLock; // r9
  unsigned int v8; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+48h] [rbp+20h]

  DiffHiveEntry = 0LL;
  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_4;
  VrpUnlockDiffHiveTable();
  DiffHiveEntry = (_QWORD *)VrpAllocateDiffHiveEntry(&String1->Length, a2);
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  VrpLockDiffHiveTableExclusive();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_4:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    DiffHiveEntryForMountPointWithLock = (__int64)DiffHiveEntry;
    v12 = DiffHiveEntry[1] & (-1LL << (dword_140EF00F4 & 0x1F));
    v10 = qword_140EF00F8;
    v11 = (37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
         + HIBYTE(v12)) & (((unsigned int)dword_140EF00F4 >> 5) - 1);
    *DiffHiveEntry = *(_QWORD *)(qword_140EF00F8 + 8 * v11);
    *(_QWORD *)(v10 + 8 * v11) = DiffHiveEntry;
    ++gLoadedDiffHives;
    DiffHiveEntry = 0LL;
  }
  v8 = 0;
  *a3 = DiffHiveEntryForMountPointWithLock;
  VrpUnlockDiffHiveTable();
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v8;
}
