/*
 * XREFs of RtlUnicodeStringToLcid @ 0x180089820
 * Callers:
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801410C0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlIsValidLocaleName @ 0x1800A8400 (RtlIsValidLocaleName.c)
 *     iswctype @ 0x180126600 (iswctype.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlUnicodeStringToLcid(PUNICODE_STRING String, PULONG Value)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int i; // esi
  LCID v7; // ecx
  _UNICODE_STRING Stringa; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v10[176]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 0;
  memset_thunk_772440563353939046(v10, 0, 0xAAuLL);
  Stringa = 0LL;
  if ( !String )
    return (unsigned int)-1073741811;
  if ( !Value )
    return (unsigned int)-1073741811;
  v5 = String->Length >> 1;
  if ( v5 > 4 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < v5; ++i )
  {
    if ( !iswctype(String->Buffer[i], 0x80u) )
      return (unsigned int)-1073741811;
  }
  if ( RtlUnicodeStringToInteger(String, 0x10u, Value) < 0 )
    return (unsigned int)-1073741811;
  v7 = *Value;
  Stringa.Buffer = (wchar_t *)v10;
  *(_DWORD *)&Stringa.Length = 11141290;
  if ( !RtlLCIDToCultureName(v7, &Stringa) || !RtlIsValidLocaleName(Stringa.Buffer, 2u) )
    return (unsigned int)-1073741811;
  return v4;
}
