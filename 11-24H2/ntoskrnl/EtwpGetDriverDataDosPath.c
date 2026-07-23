/*
 * XREFs of EtwpGetDriverDataDosPath @ 0x1404CD494
 * Callers:
 *     EtwpExpandFileName @ 0x1409D5FA4 (EtwpExpandFileName.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IoQueryFileDosDeviceName @ 0x140950990 (IoQueryFileDosDeviceName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetDriverDataDosPath(_QWORD *a1)
{
  NTSTATUS v3; // ebx
  PVOID v4; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+38h] BYREF

  ObjectNameInformation = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( EtwpDriverDataDosPath )
  {
    *a1 = EtwpDriverDataDosPath;
    return 0LL;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\DriverData\\");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    if ( v3 >= 0 )
    {
      Object = 0LL;
      v3 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( v3 >= 0 )
      {
        v4 = Object;
        v3 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
        if ( v3 >= 0 )
        {
          if ( _InterlockedCompareExchange64(&EtwpDriverDataDosPath, (signed __int64)ObjectNameInformation, 0LL) )
            ExFreePoolWithTag(ObjectNameInformation, 0);
          v4 = Object;
          *a1 = EtwpDriverDataDosPath;
        }
        ObfDereferenceObjectWithTag(v4, 0x746C6644u);
      }
      ZwClose(FileHandle);
    }
    return (unsigned int)v3;
  }
}
