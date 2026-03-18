/*
 * XREFs of PiDrvDbEnumDriverStoreNodes @ 0x140736CA8
 * Callers:
 *     PiDrvDbInit @ 0x1407370BC (PiDrvDbInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A6F10 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A8DD0 (ZwQueryDirectoryObject.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407388B0 (PiDrvDbRegisterNodeCallback.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 PiDrvDbEnumDriverStoreNodes()
{
  PCWSTR *Pool2; // rbx
  NTSTATUS v1; // edi
  int DirectoryObject; // eax
  PCWSTR *i; // rdi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+C8h] [rbp+48h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    Pool2 = (PCWSTR *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      while ( 1 )
      {
        DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
        v1 = DirectoryObject;
        if ( DirectoryObject == -2147483622 )
          break;
        if ( DirectoryObject < 0 )
          goto LABEL_11;
        for ( i = Pool2; *(_WORD *)i; i += 4 )
        {
          if ( !(unsigned __int8)PiDrvDbRegisterNodeCallback(i[1]) )
            break;
        }
      }
      v1 = 0;
    }
    else
    {
      v1 = -1073741670;
    }
  }
LABEL_11:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v1;
}
