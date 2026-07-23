/*
 * XREFs of IopStoreSystemPartitionInformation @ 0x140C0C380
 * Callers:
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FDBC (RtlStringCchCopyW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenSymbolicLinkObject @ 0x14069D840 (ZwOpenSymbolicLinkObject.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     NtQuerySymbolicLinkObject @ 0x1409EB140 (NtQuerySymbolicLinkObject.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A6FC5C (IopCreateRegistryKeyEx.c)
 */

int __fastcall IopStoreSystemPartitionInformation(__int64 a1, unsigned __int16 *a2)
{
  int result; // eax
  NTSTATUS v4; // ebx
  int v5; // ebx
  HANDLE v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int16 v9; // cx
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE LinkHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  *(_DWORD *)(&LinkTarget.MaximumLength + 1) = 0;
  RtlStringCchCopyW(pszDest, 0x100uLL, IoArcHalDeviceName.Buffer);
  LinkTarget.Buffer = pszDest;
  LinkTarget.Length = IoArcHalDeviceName.Length;
  if ( IoArcHalDeviceName.Length > 0x200u )
    LinkTarget.Length = 512;
  LinkTarget.MaximumLength = 510;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &LinkTarget;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( result < 0 )
      break;
    v4 = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    result = ObCloseHandle(LinkHandle, 0);
    if ( v4 < 0 )
      return result;
    LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
  }
  if ( result == -1073741788 )
  {
    result = IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineSystemName, 0xF003Fu);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Setup");
      v5 = IopCreateRegistryKeyEx(&KeyHandle, Handle, &DestinationString, 0xF003Fu, 0, 0LL);
      result = ObCloseHandle(Handle, 0);
      if ( v5 >= 0 )
      {
        v6 = KeyHandle;
        if ( !InitIsWinPEMode )
        {
          RtlInitUnicodeString(&DestinationString, L"SystemPartition");
          NtSetValueKey(v6, &DestinationString, 0, 1u, LinkTarget.Buffer, LinkTarget.Length + 2);
        }
        RtlInitUnicodeString(&DestinationString, L"OsLoaderPath");
        v7 = *a2;
        if ( (unsigned __int16)v7 > 2u )
        {
          v8 = *((_QWORD *)a2 + 1);
          if ( *(_WORD *)(v7 + v8 - 2) == 92 )
          {
            v9 = v7 - 2;
            *a2 = v9;
            *(_WORD *)(v9 + v8) = 0;
          }
        }
        NtSetValueKey(v6, &DestinationString, 0, 1u, *((PVOID *)a2 + 1), *a2 + 2);
        return ObCloseHandle(v6, 0);
      }
    }
  }
  return result;
}
