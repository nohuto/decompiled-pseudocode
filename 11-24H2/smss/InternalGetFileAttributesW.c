/*
 * XREFs of InternalGetFileAttributesW @ 0x14001C06C
 * Callers:
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     GetLongPathNameW @ 0x14001CE70 (GetLongPathNameW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001EE2C (BaseSetLastNTError.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetFileAttributesW(PCWSTR Name)
{
  int v2; // eax
  __int64 v3; // rcx
  PVOID v4; // rbx
  NTSTATUS v5; // edi
  PVOID BaseAddress[2]; // [rsp+28h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-9h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+68h] [rbp+27h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(_OWORD *)BaseAddress = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  v2 = RtlDosPathNameToNtPathName_U_WithStatus(Name, BaseAddress, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v4 = BaseAddress[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    v5 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    if ( v5 >= 0 )
      return FileInformation.FileAttributes;
    if ( RtlIsDosDeviceName_U(Name) )
      return 32LL;
    v3 = (unsigned int)v5;
    goto LABEL_11;
  }
  if ( v2 == -1073741801 || v2 == -1073741670 )
  {
    v3 = (unsigned int)v2;
LABEL_11:
    BaseSetLastNTError(v3);
    return 0xFFFFFFFFLL;
  }
  RtlSetLastWin32Error(3u);
  return 0xFFFFFFFFLL;
}
