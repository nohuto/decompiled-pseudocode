/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DB3A0
 * Callers:
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800DB370 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x180160750 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(
        int a1,
        const wchar_t *a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        __int64 a5)
{
  size_t v8; // rax
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[1] = a2;
  v10[0] = 0LL;
  if ( !a2 )
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned __int16 *)v10, 0LL, a3, 0LL, a4, a5);
  v8 = wcslen(a2);
  if ( v8 <= 0x7FFE )
  {
    LOWORD(v10[0]) = 2 * v8;
    WORD1(v10[0]) = 2 * v8 + 2;
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned __int16 *)v10, 0LL, a3, 0LL, a4, a5);
  }
  return 3221225734LL;
}
