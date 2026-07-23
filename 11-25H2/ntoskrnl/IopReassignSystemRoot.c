/*
 * XREFs of IopReassignSystemRoot @ 0x140C0BDD0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408E67D0 (RtlUnicodeStringToAnsiString.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     NtMakeTemporaryObject @ 0x1409AF230 (NtMakeTemporaryObject.c)
 *     NtOpenSymbolicLinkObject @ 0x1409E0AA0 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1409EB140 (NtQuerySymbolicLinkObject.c)
 *     NtCreateSymbolicLinkObject @ 0x140A1FE80 (NtCreateSymbolicLinkObject.c)
 */

char __fastcall IopReassignSystemRoot(__int64 a1, _STRING *a2)
{
  __int64 v2; // r9
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  HANDLE LinkHandle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v10; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszDest[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\ArcName\\%S", v2) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes);
    if ( v4 == -1073741788 )
      break;
    if ( v4 >= 0 )
    {
      DestinationString.Length = 0;
      v5 = NtQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
      ObCloseHandle(LinkHandle, 0);
      if ( v5 >= 0 )
        continue;
    }
    return 0;
  }
  if ( RtlUnicodeStringToAnsiString(a2, &DestinationString, 0) < 0 )
    return 0;
  RtlInitUnicodeString(&v10, L"\\Device\\BootDevice");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) < 0 )
    return 0;
  NtMakeTemporaryObject(LinkHandle);
  ObCloseHandle(LinkHandle, 0);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 592;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
  ObCloseHandle(LinkHandle, 0);
  return 1;
}
