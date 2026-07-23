/*
 * XREFs of SmKmStoreFileOpenVolume @ 0x14079B558
 * Callers:
 *     SmKmEtwAppendProductName @ 0x14060BE04 (SmKmEtwAppendProductName.c)
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 *     SmcCacheStart @ 0x14079D588 (SmcCacheStart.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SmKmStoreFileOpenVolume(__int64 a1, _QWORD *a2, PDEVICE_OBJECT *a3)
{
  BOOLEAN v6; // si
  NTSTATUS NameStringMode; // edi
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v17[528]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = 0;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset_0(v17, 0, 0x208uLL);
  FileHandle = 0LL;
  v6 = IoSetThreadHardErrorMode(0);
  NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a1 + 8), (unsigned int)v17, 520, (unsigned int)&v12, 0);
  if ( NameStringMode >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    NameStringMode = ZwCreateFile(
                       &FileHandle,
                       0x100080u,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0,
                       7u,
                       1u,
                       0x20u,
                       0LL,
                       0);
    if ( NameStringMode >= 0 )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(FileHandle, 3u, 0LL, 0, &Object, 0LL);
      v9 = Object;
      NameStringMode = v8;
      if ( v8 < 0 )
      {
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        *a2 = v9;
        *a3 = RelatedDeviceObject;
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)NameStringMode;
}
