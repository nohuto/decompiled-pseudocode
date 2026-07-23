/*
 * XREFs of LdrpResValidateFileHandle @ 0x1801094A8
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 * Callees:
 *     NtQueryInformationFile @ 0x180160270 (NtQueryInformationFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpResValidateFileHandle(char *a1)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OWORD FileInformation[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  IoStatusBlock = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  else
    return NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
}
