/*
 * XREFs of LdrpCheckAppDirType @ 0x180113030
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180160970 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

void __fastcall LdrpCheckAppDirType(unsigned __int16 *a1)
{
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING *v2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 FsInformation; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v4[2]; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  char v8; // [rsp+C0h] [rbp-40h] BYREF

  v4[0] = 0x1000000LL;
  v4[1] = &v8;
  FsInformation = 0LL;
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
      && ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation) >= 0
      && (LdrpIllegalCWDDevices & HIDWORD(FsInformation)) != 0 )
    {
      LdrpIllegalCWDDevices = 0;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
