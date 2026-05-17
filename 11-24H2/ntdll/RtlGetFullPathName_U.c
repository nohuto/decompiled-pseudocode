/*
 * XREFs of RtlGetFullPathName_U @ 0x18007EEC0
 * Callers:
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlDosSearchPath_U @ 0x180082890 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall RtlGetFullPathName_U(const wchar_t *a1, unsigned int a2, _WORD *a3, __int64 *a4)
{
  size_t v7; // rax
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v9[0] = 0LL;
  v9[1] = a1;
  if ( !a1 )
  {
LABEL_4:
    result = RtlGetFullPathName_Ustr((unsigned __int16 *)v9, a2, a3, a4, 0LL, &v10);
    if ( (_DWORD)result )
      return result;
    return 0LL;
  }
  v7 = wcslen(a1);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    goto LABEL_4;
  }
  return 0LL;
}
