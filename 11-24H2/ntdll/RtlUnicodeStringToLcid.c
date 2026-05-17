/*
 * XREFs of RtlUnicodeStringToLcid @ 0x180116D44
 * Callers:
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013F9D0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlIsValidLocaleName @ 0x1800DA8C0 (RtlIsValidLocaleName.c)
 *     iswctype @ 0x180124B20 (iswctype.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlUnicodeStringToLcid(unsigned __int16 *a1, int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int i; // esi
  unsigned int v7; // ecx
  wchar_t *String[2]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v10[176]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 0;
  memset_thunk_772440563353939046(v10, 0, 0xAAuLL);
  *(_OWORD *)String = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v5 = *a1 >> 1;
  if ( v5 > 4 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < v5; ++i )
  {
    if ( !iswctype(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i), 0x80u) )
      return (unsigned int)-1073741811;
  }
  if ( (int)RtlUnicodeStringToInteger(a1, 0x10u, a2) < 0 )
    return (unsigned int)-1073741811;
  v7 = *a2;
  String[1] = (wchar_t *)v10;
  LODWORD(String[0]) = 11141290;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v7, (__int64)String) || !RtlIsValidLocaleName(String[1], 2) )
    return (unsigned int)-1073741811;
  return v4;
}
