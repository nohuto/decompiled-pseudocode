/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x140785360
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileHandle(HANDLE FileHandle, PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  result = NtQueryInformationFile(FileHandle, &v4, &v5, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *IsPartialPlaceholder = (v5 & 0x440000) != 0;
  }
  else
  {
    if ( result != -1073741811 )
      return result;
    *IsPartialPlaceholder = 0;
  }
  return 0;
}
