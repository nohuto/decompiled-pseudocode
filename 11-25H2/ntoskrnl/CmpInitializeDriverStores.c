/*
 * XREFs of CmpInitializeDriverStores @ 0x140C35F30
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14069C6C0 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14069CA40 (ZwCreateSymbolicLinkObject.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140C35EA4 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializeDriverStores(__int64 a1)
{
  NTSTATUS v2; // ebx
  wchar_t *Pool; // rax
  wchar_t *v4; // rsi
  __int64 **v5; // rax
  __int64 *v6; // rdi
  const wchar_t *SystemRelativeRegistryHiveFilePath; // rax
  unsigned __int64 v8; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-50h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  DirectoryHandle = 0LL;
  LinkTarget = 0LL;
  Handle = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v2 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Nodes");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
    ObjectAttributes.Attributes = 592;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v2 = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 592;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      RtlInitUnicodeString(&LinkTarget, L"\\DriverStore\\Nodes");
      v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
      if ( v2 >= 0 )
      {
        Pool = (wchar_t *)CmpAllocatePool(0x100uLL);
        v4 = Pool;
        if ( Pool )
        {
          *(_QWORD *)&LinkTarget.Length = 0x10000000LL;
          LinkTarget.Buffer = Pool;
          RtlAppendUnicodeToString(&LinkTarget, L"\\SystemRoot");
          RtlInitUnicodeString(&DestinationString, L"SYSTEM");
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
          if ( v2 >= 0 )
          {
            ZwClose(LinkHandle);
            v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
            v6 = *v5;
            while ( v6 != (__int64 *)v5 )
            {
              if ( (*((_DWORD *)v6 + 6) & 0x80u) != 0 )
              {
                RtlInitAnsiString(&SourceString, (PCSZ)v6[11]);
                v2 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
                if ( v2 < 0 )
                  break;
                *(_QWORD *)&LinkTarget.Length = 0x10000000LL;
                LinkTarget.Buffer = v4;
                RtlAppendUnicodeToString(&LinkTarget, L"\\ArcName\\");
                RtlAppendUnicodeStringToString(&LinkTarget, &DestinationString);
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
                  RtlAppendUnicodeStringToString(&LinkTarget, &DestinationString);
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
                ObjectAttributes.RootDirectory = Handle;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
                ObjectAttributes.Attributes = 592;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
                if ( v2 < 0 )
                  break;
                ZwClose(LinkHandle);
              }
              v6 = (__int64 *)*v6;
              v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          v2 = -1073741670;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v2;
}
