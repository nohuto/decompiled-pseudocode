/*
 * XREFs of LdrpCheckAppDirType @ 0x1801180BC
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenFile @ 0x1801622F0 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1801625B0 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

void __fastcall LdrpCheckAppDirType(unsigned __int16 *a1)
{
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING *v2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v3; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v4[2]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  char v8; // [rsp+C0h] [rbp-40h] BYREF

  v4[0] = 0x1000000LL;
  v4[1] = &v8;
  v3 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  IoStatusBlock = 0LL;
  v2 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlpDosPathNameToRelativeNtPathName(0, a1, (unsigned __int16 *)v4, &UnicodeString.Length, &v2, 0LL, 0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && (int)ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &v3, 8LL, 4) >= 0
      && (LdrpIllegalCWDDevices & HIDWORD(v3)) != 0 )
    {
      LdrpIllegalCWDDevices = 0;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
