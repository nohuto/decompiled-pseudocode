/*
 * XREFs of SdbpGetFileTimestamp @ 0x1407F139C
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x1407F1944 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1407F670C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateFile @ 0x14069BBE0 (ZwCreateFile.c)
 *     ZwQueryInformationByName @ 0x14069DBA0 (ZwQueryInformationByName.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 */

__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2, int a3)
{
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v16; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v17; // [rsp+C8h] [rbp-38h]
  __int64 v18; // [rsp+D8h] [rbp-28h]
  _BYTE FileInformation[24]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v20; // [rsp+F8h] [rbp-8h]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v18 = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset_0(FileInformation, 0, 0x48uLL);
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v6 = ZwQueryInformationByName(&ObjectAttributes, &IoStatusBlock, FileInformation, 0x48u, FileStatInformation);
  v7 = v6;
  if ( v6 == -1073741772 )
    goto LABEL_13;
  if ( v6 >= 0 )
  {
    v9 = *((_QWORD *)&v20 + 1);
    v10 = v20;
  }
  else
  {
    v8 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -1073741772 )
        AslLogCallPrintf(1, (unsigned int)"SdbpGetFileTimestamp", 1523, (unsigned int)"Failed to open file [%x]");
      goto LABEL_13;
    }
    v7 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &v16, 0x28u, FileBasicInformation);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetFileTimestamp",
        1534,
        (unsigned int)"Failed to get timestamp from %S. [%x]");
      goto LABEL_13;
    }
    v9 = *((_QWORD *)&v17 + 1);
    v10 = v17;
    v20 = v17;
  }
  if ( a3 )
    v9 = v10;
  v7 = 0;
  *a1 = v9;
LABEL_13:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
