/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x140822324
 * Callers:
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C9398 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x14041DD00 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpVolumeContextCreate @ 0x1407C9020 (CmpVolumeContextCreate.c)
 *     IoVolumeDeviceToGuid @ 0x140822800 (IoVolumeDeviceToGuid.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x1408230A8 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     CmpVolumeManagerLockContextListShared @ 0x14082310C (CmpVolumeManagerLockContextListShared.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeContextFree @ 0x1409F4DE0 (CmpVolumeContextFree.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
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
  __int64 v13; // rcx
  struct _PRIVILEGE_SET *v14; // rdi
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
    goto LABEL_18;
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
    v14 = Privileges;
LABEL_14:
    if ( v14 )
      CmpVolumeContextFree(v14);
    goto LABEL_16;
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
      v14 = Privileges;
      goto LABEL_13;
    }
    v6 = CmpVolumeContextCreate(v12, (__int64)AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v13, &v19);
      if ( ContextForGuidUnsafe )
      {
        v14 = Privileges;
LABEL_12:
        CmSiRWLockReleaseExclusive((ULONG_PTR)&CmpVolumeManager);
LABEL_13:
        *a4 = ContextForGuidUnsafe;
        v6 = 0;
        goto LABEL_14;
      }
LABEL_24:
      v16 = (PPRIVILEGE_SET *)qword_140FD9430;
      if ( *(__int64 **)qword_140FD9430 != &qword_140FD9428 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      v14 = 0LL;
      *(_QWORD *)&Privileges->PrivilegeCount = &qword_140FD9428;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v16;
      *v16 = ContextForGuidUnsafe;
      qword_140FD9430 = (__int64)ContextForGuidUnsafe;
      goto LABEL_12;
    }
    goto LABEL_27;
  }
LABEL_16:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_18:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
