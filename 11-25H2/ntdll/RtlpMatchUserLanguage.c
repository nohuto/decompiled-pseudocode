/*
 * XREFs of RtlpMatchUserLanguage @ 0x180115B18
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RtlpGetUserLocaleName @ 0x180115BDC (RtlpGetUserLocaleName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
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
