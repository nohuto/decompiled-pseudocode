/*
 * XREFs of SmpCreateTempFile @ 0x1400120D4
 * Callers:
 *     SmpGetDumpDestination @ 0x14001234C (SmpGetDumpDestination.c)
 *     SmpShuffleMove @ 0x140018644 (SmpShuffleMove.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpQueryFileExists @ 0x1400126C4 (SmpQueryFileExists.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpCreateTempFile(__int64 a1, __int64 a2, struct _UNICODE_STRING *a3)
{
  unsigned __int64 v6; // rdi
  unsigned int i; // ebx
  NTSTATUS result; // eax
  __int64 v9; // [rsp+28h] [rbp-260h]
  struct _UNICODE_STRING NtPathName; // [rsp+30h] [rbp-258h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-248h] BYREF

  NtPathName = 0LL;
  v6 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  for ( i = 0; i < 0x64; ++i )
  {
    LODWORD(v9) = (unsigned __int16)(v6 + i);
    result = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", *(_QWORD *)(a1 + 8), a2, v9);
    if ( result < 0 )
      return result;
    if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
      break;
    if ( !(unsigned __int8)SmpQueryFileExists(&NtPathName) )
    {
      result = 0;
      *a3 = NtPathName;
      return result;
    }
    RtlFreeUnicodeString(&NtPathName);
  }
  return -1073741823;
}
