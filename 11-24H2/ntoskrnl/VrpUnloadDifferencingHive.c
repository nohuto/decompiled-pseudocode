/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14092AB4C
 * Callers:
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140829A24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092A298 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x14092AAD8 (VrpCleanupNamespace.c)
 * Callees:
 *     ZwUnloadKey @ 0x1406A9F50 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1406A9F70 (ZwUnloadKey2.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14092AA50 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092AA88 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092AC5C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x14092ADE0 (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x14092AE18 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14092AE78 (VrpUnlockDiffHiveEntry.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14092AEB4 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14092AEF4 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(const UNICODE_STRING *a1)
{
  __int64 DiffHiveEntryForMountPoint; // rax
  __int64 v3; // rbx
  char v4; // al
  char v5; // si
  __int64 v6; // rdx
  int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+40h] [rbp-10h]

  v9 = 0LL;
  *(_QWORD *)&v11 = 0LL;
  v10 = 0LL;
  DWORD2(v11) = 0;
  DiffHiveEntryForMountPoint = VrpFindDiffHiveEntryForMountPoint(a1);
  v3 = DiffHiveEntryForMountPoint;
  if ( DiffHiveEntryForMountPoint )
  {
    VrpLockDiffHiveEntry(DiffHiveEntryForMountPoint);
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(v3) )
    {
      v4 = VrpBecomeDiffHiveEntryTransitionOwner(v3);
      *(_DWORD *)(v3 + 56) &= ~1u;
      v5 = v4;
      VrpUnlockDiffHiveEntry(v3);
      *((_QWORD *)&v9 + 1) = 0LL;
      LODWORD(v9) = 48;
      v11 = 0LL;
      DWORD2(v10) = 576;
      *(_QWORD *)&v10 = a1;
      v7 = ZwUnloadKey((__int64)&v9, v6);
      if ( v7 < 0 )
        v7 = ZwUnloadKey2((__int64)&v9, 1LL);
      VrpLockDiffHiveEntry(v3);
      if ( v7 < 0 )
      {
        *(_DWORD *)(v3 + 56) |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(v3);
      }
      if ( v5 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v3);
    }
    else
    {
      v7 = 0;
    }
    VrpUnlockDiffHiveEntry(v3);
    VrpDereferenceDiffHiveEntry((_QWORD *)v3);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v7;
}
