/*
 * XREFs of PopZeroHiberFile @ 0x14075165C
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmZeroPageWrite @ 0x1402604EC (MmZeroPageWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     PopDiagTraceZeroHiberFile @ 0x140B61E50 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140B61E6C (PopDiagTraceZeroHiberFileEnd.c)
 */

__int64 __fastcall PopZeroHiberFile(HANDLE FileHandle, struct _FILE_OBJECT *a2)
{
  __int64 v4; // rax
  LARGE_INTEGER v5; // rcx
  LARGE_INTEGER v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]

  IoStatusBlock = 0LL;
  v11 = 0LL;
  FileInformation = 0LL;
  PopDiagTraceZeroHiberFile();
  if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
  {
    v7.QuadPart = 0LL;
    v4 = FileInformation;
    v5.QuadPart = 0LL;
    do
    {
      v8 = v4 - v5.QuadPart;
      if ( (int)MmZeroPageWrite(a2, &v7, &v8, 0x10000u) >= 0 )
        break;
      v4 = FileInformation;
      v5.QuadPart = (v7.QuadPart & 0xFFFFFFFFFFFF0000uLL) + 0x10000;
      v7 = v5;
    }
    while ( v5.QuadPart < (__int64)FileInformation );
  }
  return PopDiagTraceZeroHiberFileEnd();
}
