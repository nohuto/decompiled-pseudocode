/*
 * XREFs of RtlpMatchUserLanguage @ 0x18009A410
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180014040 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUserLanguage(wchar_t *String)
{
  size_t v3; // rax
  PCWCH String2[4]; // [rsp+30h] [rbp-E8h] BYREF
  char v5; // [rsp+50h] [rbp-C8h] BYREF

  String2[0] = (PCWCH)11141120;
  String2[1] = (PCWCH)&v5;
  if ( (int)RtlpGetUserLocaleName((PUNICODE_STRING)String2) < 0 )
    return 0;
  LOWORD(v3) = 0;
  if ( String )
  {
    v3 = 2 * wcslen(String);
    if ( v3 >= 0xFFFE )
      LOWORD(v3) = -4;
  }
  return RtlCompareUnicodeStrings(
           String,
           (unsigned __int64)(unsigned __int16)v3 >> 1,
           String2[1],
           (unsigned __int64)LOWORD(String2[0]) >> 1,
           1u) == 0;
}
