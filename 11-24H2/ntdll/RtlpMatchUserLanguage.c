/*
 * XREFs of RtlpMatchUserLanguage @ 0x1800D10DC
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180032F80 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     RtlpGetUserLocaleName @ 0x1800D2DDC (RtlpGetUserLocaleName.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUserLanguage(wchar_t *String)
{
  size_t v3; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  char v5; // [rsp+50h] [rbp-C8h] BYREF

  *(_QWORD *)&DestinationString.Length = 11141120LL;
  DestinationString.Buffer = (wchar_t *)&v5;
  if ( (int)RtlpGetUserLocaleName(&DestinationString) < 0 )
    return 0;
  LOWORD(v3) = 0;
  if ( String )
  {
    v3 = 2 * wcslen(String);
    if ( v3 >= 0xFFFE )
      LOWORD(v3) = -4;
  }
  return (unsigned int)RtlCompareUnicodeStrings(
                         String,
                         (unsigned __int64)(unsigned __int16)v3 >> 1,
                         (_BYTE *)DestinationString.Buffer,
                         (unsigned __int64)DestinationString.Length >> 1,
                         1) == 0;
}
