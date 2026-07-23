/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DADC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
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
    return RtlpDosPathNameToRelativeNtPathName(
             0,
             (unsigned __int16 *)v9,
             0LL,
             &NtFileName->Length,
             0LL,
             FilePart,
             (__int64)RelativeName);
  v7 = wcslen(DosFileName);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return RtlpDosPathNameToRelativeNtPathName(
             0,
             (unsigned __int16 *)v9,
             0LL,
             &NtFileName->Length,
             0LL,
             FilePart,
             (__int64)RelativeName);
  }
  return -1073741562;
}
