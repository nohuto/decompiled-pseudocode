/*
 * XREFs of RtlpGetFileSize @ 0x180147D0C
 * Callers:
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     NtQueryInformationFile @ 0x180163440 (NtQueryInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpGetFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  result = NtQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = *((_QWORD *)&FileInformation + 1);
    return 0;
  }
  return result;
}
