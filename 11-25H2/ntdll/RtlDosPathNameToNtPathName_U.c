/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800E6800
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800E65B8 (LdrpResValidateFilePath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(const wchar_t *a1, unsigned __int16 *a2, _QWORD *a3, __int64 a4)
{
  size_t v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[1] = a1;
  v9[0] = 0LL;
  if ( !a1 )
    return (int)RtlpDosPathNameToRelativeNtPathName(0, (unsigned __int16 *)v9, 0LL, a2, 0LL, a3, a4) >= 0;
  v7 = wcslen(a1);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return (int)RtlpDosPathNameToRelativeNtPathName(0, (unsigned __int16 *)v9, 0LL, a2, 0LL, a3, a4) >= 0;
  }
  return 0;
}
