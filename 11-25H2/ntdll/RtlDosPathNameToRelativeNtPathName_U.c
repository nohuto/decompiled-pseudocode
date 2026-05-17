/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x1800DF400
 * Callers:
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(const wchar_t *a1, unsigned __int16 *a2, _QWORD *a3, __int64 a4)
{
  size_t v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[1] = a1;
  v9[0] = 0LL;
  if ( !a1 )
    return (int)RtlpDosPathNameToRelativeNtPathName(2, (unsigned __int16 *)v9, 0LL, a2, 0LL, a3, a4) >= 0;
  v7 = wcslen(a1);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return (int)RtlpDosPathNameToRelativeNtPathName(2, (unsigned __int16 *)v9, 0LL, a2, 0LL, a3, a4) >= 0;
  }
  return 0;
}
