/*
 * XREFs of VrpLoadDifferencingHive @ 0x14092C6BC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140829F14 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092C3D8 (VrpHandleIoctlLoadDifferencingHive.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14092CB90 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092CBC8 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x14092CF20 (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x14092CF58 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14092CFB8 (VrpUnlockDiffHiveEntry.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14092CFF4 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14092D034 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AA83D0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        const UNICODE_STRING *a1,
        __int64 a2,
        UNICODE_STRING *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v9; // r15
  HANDLE v10; // r14
  _DWORD *v11; // rbx
  NTSTATUS DiffHiveEntryForMountPoint; // edi
  char v14; // si
  unsigned int i; // edi
  HANDLE v16; // rdx
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  OBJECT_ATTRIBUTES v20; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  int v22[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v23; // [rsp+F8h] [rbp-8h]
  __int128 v24; // [rsp+108h] [rbp+8h]
  int v25[4]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v26; // [rsp+128h] [rbp+28h]
  __int128 v27; // [rsp+138h] [rbp+38h]

  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v24 = 0LL;
  v9 = 0;
  DWORD2(v24) = 0;
  v10 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DWORD2(v27) = 0;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  KeyHandle = 0LL;
  memset(&v20, 0, 44);
  if ( a7 && a5 )
    return (unsigned int)-1073741811;
  v11 = P;
  DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(a1);
  if ( DiffHiveEntryForMountPoint >= 0 )
  {
    VrpLockDiffHiveEntry(P);
    VrpIncrementDiffHiveEntryHardRefCount(P);
    v14 = 1;
    if ( (*((_DWORD *)P + 14) & 1) != 0 )
    {
      DiffHiveEntryForMountPoint = 0;
      goto LABEL_24;
    }
    for ( i = 0; i < 2; ++i )
    {
      if ( (*((_DWORD *)P + 14) & 1) != 0 )
        break;
      v9 = VrpBecomeDiffHiveEntryTransitionOwner(P);
      if ( v9 )
        goto LABEL_12;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(P);
    }
    if ( (*((_DWORD *)P + 14) & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = *((_DWORD *)P + 15);
LABEL_28:
      VrpDecrementDiffHiveEntryHardRefCount(v11);
      goto LABEL_24;
    }
LABEL_12:
    if ( (*((_DWORD *)P + 14) & 1) != 0 )
    {
LABEL_36:
      DiffHiveEntryForMountPoint = 0;
      v14 = 0;
LABEL_21:
      if ( v9 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v11);
      if ( v14 )
        goto LABEL_28;
LABEL_24:
      VrpUnlockDiffHiveEntry(v11);
      goto LABEL_3;
    }
    VrpUnlockDiffHiveEntry(P);
    if ( a7 )
    {
      v20.RootDirectory = 0LL;
      v20.Length = 48;
      v20.ObjectName = (PUNICODE_STRING)L"\"$";
      v20.Attributes = 576;
      *(_OWORD *)&v20.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &v20);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_20;
      v10 = KeyHandle;
    }
    if ( a3->Length )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_20;
      v16 = Handle;
      if ( a5 )
        v10 = Handle;
    }
    else
    {
      v16 = Handle;
    }
    *(_QWORD *)&v26 = a1;
    v25[0] = 48;
    v22[0] = 48;
    *(_QWORD *)&v23 = a2;
    DWORD2(v26) = 576;
    DWORD2(v23) = 576;
    *(_QWORD *)&v25[2] = 0LL;
    v27 = 0LL;
    *(_QWORD *)&v22[2] = 0LL;
    v24 = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (int)v25,
                                   (int)v22,
                                   a4,
                                   0,
                                   (__int64)v10,
                                   0LL,
                                   0,
                                   0LL,
                                   0,
                                   (__int64)v16,
                                   a6 != 0,
                                   a8,
                                   0);
    if ( DiffHiveEntryForMountPoint >= 0 )
      DiffHiveEntryForMountPoint = 0;
LABEL_20:
    VrpLockDiffHiveEntry(v11);
    v11[14] = v11[14] & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    v11[15] = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_21;
    goto LABEL_36;
  }
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
