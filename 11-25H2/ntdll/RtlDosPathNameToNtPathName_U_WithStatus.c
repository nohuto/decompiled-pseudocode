/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DD270
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(
        const wchar_t *a1,
        unsigned __int16 *a2,
        _QWORD *a3,
        __int64 a4)
{
  size_t v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[1] = a1;
  v9[0] = 0LL;
  if ( !a1 )
    return RtlpDosPathNameToRelativeNtPathName(0, (unsigned __int16 *)v9, 0LL, a2, 0LL, a3, a4);
  v7 = wcslen(a1);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return RtlpDosPathNameToRelativeNtPathName(0, (unsigned __int16 *)v9, 0LL, a2, 0LL, a3, a4);
  }
  return 3221225734LL;
}
