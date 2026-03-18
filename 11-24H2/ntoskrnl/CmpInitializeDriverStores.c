/*
 * XREFs of CmpInitializeDriverStores @ 0x140C471E0
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1406A7990 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A7D10 (ZwCreateSymbolicLinkObject.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140C47160 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializeDriverStores(__int64 a1)
{
  int SymbolicLinkObject; // ebx
  wchar_t *Pool; // rax
  wchar_t *v4; // rsi
  __int64 **v5; // rax
  __int64 *v6; // rdi
  const wchar_t *SystemRelativeRegistryHiveFilePath; // rax
  unsigned __int64 v8; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE v15; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  Destination = 0LL;
  v15 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  SymbolicLinkObject = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Nodes");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
    ObjectAttributes.Attributes = 592;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    SymbolicLinkObject = ZwCreateDirectoryObject(&v15, 0xF000Fu, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 592;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      RtlInitUnicodeString(&Destination, L"\\DriverStore\\Nodes");
      SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
      if ( SymbolicLinkObject >= 0 )
      {
        Pool = (wchar_t *)CmpAllocatePool(0x100uLL);
        v4 = Pool;
        if ( Pool )
        {
          *(_QWORD *)&Destination.Length = 0x10000000LL;
          Destination.Buffer = Pool;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot");
          RtlInitUnicodeString(&DestinationString, L"SYSTEM");
          ObjectAttributes.RootDirectory = v15;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( SymbolicLinkObject >= 0 )
          {
            ZwClose(Handle);
            v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
            v6 = *v5;
            while ( v6 != (__int64 *)v5 )
            {
              if ( (*((_DWORD *)v6 + 6) & 0x80u) != 0 )
              {
                RtlInitAnsiString(&SourceString, (PCSZ)v6[11]);
                SymbolicLinkObject = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
                if ( SymbolicLinkObject < 0 )
                  break;
                *(_QWORD *)&Destination.Length = 0x10000000LL;
                Destination.Buffer = v4;
                RtlAppendUnicodeToString(&Destination, L"\\ArcName\\");
                RtlAppendUnicodeStringToString(&Destination, &DestinationString);
                RtlFreeAnsiString(&DestinationString);
                SystemRelativeRegistryHiveFilePath = CmpGetSystemRelativeRegistryHiveFilePath((const wchar_t *)v6[2]);
                v8 = v6[2];
                if ( (unsigned __int64)SystemRelativeRegistryHiveFilePath > v8
                  && (__int64)(((unsigned __int64)SystemRelativeRegistryHiveFilePath - v8) & 0xFFFFFFFFFFFFFFFEuLL) < 131070 )
                {
                  DestinationString.Buffer = (wchar_t *)v6[2];
                  DestinationString.Length = 2
                                           * ((__int64)(unsigned int)((_DWORD)SystemRelativeRegistryHiveFilePath
                                                                    - *((_DWORD *)v6 + 4)) >> 1);
                  DestinationString.MaximumLength = DestinationString.Length;
                  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
                ObjectAttributes.RootDirectory = v15;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
                ObjectAttributes.Attributes = 592;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
                if ( SymbolicLinkObject < 0 )
                  break;
                ZwClose(Handle);
              }
              v6 = (__int64 *)*v6;
              v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          SymbolicLinkObject = -1073741670;
        }
      }
    }
  }
  if ( v15 )
    ZwClose(v15);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)SymbolicLinkObject;
}
