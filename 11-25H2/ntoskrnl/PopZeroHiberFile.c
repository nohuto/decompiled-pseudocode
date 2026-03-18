/*
 * XREFs of PopZeroHiberFile @ 0x14074724C
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmZeroPageWrite @ 0x1403BED64 (MmZeroPageWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14069B360 (ZwQueryInformationFile.c)
 *     PopDiagTraceZeroHiberFile @ 0x140B4FC58 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140B4FC74 (PopDiagTraceZeroHiberFileEnd.c)
 */

__int64 __fastcall PopZeroHiberFile(HANDLE FileHandle, __int64 a2)
{
  __int64 v4; // rax
  signed __int64 v5; // rcx
  signed __int64 v7; // [rsp+30h] [rbp-40h] BYREF
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
    v7 = 0LL;
    v4 = FileInformation;
    v5 = 0LL;
    do
    {
      v8 = v4 - v5;
      if ( (int)MmZeroPageWrite(a2, (__int64)&v7, &v8, 0x10000u) >= 0 )
        break;
      v4 = FileInformation;
      v5 = (v7 & 0xFFFFFFFFFFFF0000uLL) + 0x10000;
      v7 = v5;
    }
    while ( v5 < (__int64)FileInformation );
  }
  return PopDiagTraceZeroHiberFileEnd();
}
