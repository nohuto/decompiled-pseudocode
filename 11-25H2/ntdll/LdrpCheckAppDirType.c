/*
 * XREFs of LdrpCheckAppDirType @ 0x18011B140
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180163B40 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall LdrpCheckAppDirType(unsigned __int16 *a1)
{
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING *v3; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v5[2]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  char v9; // [rsp+C0h] [rbp-40h] BYREF

  v5[0] = 0x1000000LL;
  v5[1] = &v9;
  v4 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  IoStatusBlock = 0LL;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlpDosPathNameToRelativeNtPathName(0, a1, (unsigned __int16 *)v5, &UnicodeString.Length, &v3, 0LL, 0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v3;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
    {
      ShareAccess[0] = 4;
      if ( (int)ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &v4, 8LL, *(_QWORD *)ShareAccess) >= 0
        && (LdrpIllegalCWDDevices & HIDWORD(v4)) != 0 )
      {
        LdrpIllegalCWDDevices = 0;
      }
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
