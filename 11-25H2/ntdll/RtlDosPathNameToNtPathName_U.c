/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800E6800
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800E65B8 (LdrpResValidateFilePath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  size_t v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[1] = DosFileName;
  v9[0] = 0LL;
  if ( !DosFileName )
    return (int)RtlpDosPathNameToRelativeNtPathName(
                  0,
                  (unsigned __int16 *)v9,
                  0LL,
                  &NtFileName->Length,
                  0LL,
                  FilePart,
                  (__int64)RelativeName) >= 0;
  v7 = wcslen(DosFileName);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return (int)RtlpDosPathNameToRelativeNtPathName(
                  0,
                  (unsigned __int16 *)v9,
                  0LL,
                  &NtFileName->Length,
                  0LL,
                  FilePart,
                  (__int64)RelativeName) >= 0;
  }
  return 0;
}
