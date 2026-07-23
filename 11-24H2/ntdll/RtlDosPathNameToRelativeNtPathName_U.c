/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x1800DDCB0
 * Callers:
 *     LdrpResMapFile @ 0x180109564 (LdrpResMapFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
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
                  2,
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
                  2,
                  (unsigned __int16 *)v9,
                  0LL,
                  &NtFileName->Length,
                  0LL,
                  FilePart,
                  (__int64)RelativeName) >= 0;
  }
  return 0;
}
