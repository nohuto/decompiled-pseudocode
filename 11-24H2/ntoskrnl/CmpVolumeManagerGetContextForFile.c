/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x14094F848
 * Callers:
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407D90D8 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpVolumeContextCreate @ 0x1407D8D60 (CmpVolumeContextCreate.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IoVolumeDeviceToGuid @ 0x14094FD30 (IoVolumeDeviceToGuid.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F6640 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x140A47324 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140A52CDC (CmpVolumeManagerLockContextListShared.c)
 *     CmpVolumeContextFree @ 0x140A97230 (CmpVolumeContextFree.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  struct _OBJECT_TYPE *v5; // r8
  int v6; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  PPRIVILEGE_SET ContextForGuidUnsafe; // rbx
  __int64 v12; // rcx
  struct _PRIVILEGE_SET *v13; // rdi
  __int64 v15; // rcx
  PPRIVILEGE_SET *v16; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  Object = 0LL;
  v5 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v19 = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_16;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v8 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v19);
  v6 = v8;
  if ( v8 == -1073741811 || v8 == -1073741637 || v8 == -1073741808 )
  {
    v6 = CmpVolumeContextCreate(v9, 0LL, &Privileges);
    if ( v6 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      goto LABEL_24;
    }
LABEL_27:
    v13 = Privileges;
LABEL_12:
    if ( v13 )
      CmpVolumeContextFree(v13);
    goto LABEL_14;
  }
  if ( v8 >= 0 )
  {
    CmpVolumeManagerLockContextListShared();
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v10, &v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
    {
      v13 = Privileges;
LABEL_11:
      *a4 = ContextForGuidUnsafe;
      v6 = 0;
      goto LABEL_12;
    }
    v6 = CmpVolumeContextCreate(v12, (__int64)AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v15, &v19);
      if ( ContextForGuidUnsafe )
      {
        v13 = Privileges;
LABEL_10:
        CmSiRWLockReleaseExclusive((ULONG_PTR)&CmpVolumeManager);
        goto LABEL_11;
      }
LABEL_24:
      v16 = (PPRIVILEGE_SET *)qword_140FDA418;
      if ( *(__int64 **)qword_140FDA418 != &qword_140FDA410 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      v13 = 0LL;
      *(_QWORD *)&Privileges->PrivilegeCount = &qword_140FDA410;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v16;
      *v16 = ContextForGuidUnsafe;
      qword_140FDA418 = (__int64)ContextForGuidUnsafe;
      goto LABEL_10;
    }
    goto LABEL_27;
  }
LABEL_14:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_16:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
