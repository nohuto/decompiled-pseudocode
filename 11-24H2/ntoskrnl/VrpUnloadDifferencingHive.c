/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14092CC8C
 * Callers:
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14082A254 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092C3D8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x14092CC18 (VrpCleanupNamespace.c)
 * Callees:
 *     ZwUnloadKey @ 0x1406AAEF0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1406AAF10 (ZwUnloadKey2.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14092CB90 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092CBC8 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092CD9C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x14092CF20 (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x14092CF58 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14092CFB8 (VrpUnlockDiffHiveEntry.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14092CFF4 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14092D034 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *a1)
{
  __int64 DiffHiveEntryForMountPoint; // rax
  __int64 v3; // rbx
  char v4; // al
  char v5; // si
  NTSTATUS v6; // edi
  OBJECT_ATTRIBUTES TargetKey; // [rsp+20h] [rbp-30h] BYREF

  memset(&TargetKey, 0, 44);
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
      TargetKey.RootDirectory = 0LL;
      TargetKey.Length = 48;
      *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
      TargetKey.Attributes = 576;
      TargetKey.ObjectName = a1;
      v6 = ZwUnloadKey(&TargetKey);
      if ( v6 < 0 )
        v6 = ZwUnloadKey2(&TargetKey, 1u);
      VrpLockDiffHiveEntry(v3);
      if ( v6 < 0 )
      {
        *(_DWORD *)(v3 + 56) |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(v3);
      }
      if ( v5 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v3);
    }
    else
    {
      v6 = 0;
    }
    VrpUnlockDiffHiveEntry(v3);
    VrpDereferenceDiffHiveEntry((_QWORD *)v3);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v6;
}
