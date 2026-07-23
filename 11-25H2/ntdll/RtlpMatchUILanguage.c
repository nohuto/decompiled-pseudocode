/*
 * XREFs of RtlpMatchUILanguage @ 0x180118314
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180118410 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     __report_rangecheckfailure @ 0x18012250C (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  _UNICODE_STRING v5; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceStringa[88]; // [rsp+50h] [rbp-B0h] BYREF

  *(_QWORD *)&v5.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &v5) < 0 || *(_QWORD *)&v5.Length >= 0x55uLL )
    return 0;
  v3 = *(_QWORD *)&v5.Length;
  DestinationString = 0LL;
  v5 = 0LL;
  if ( v3 >= 85 )
    _report_rangecheckfailure(v2);
  SourceStringa[v3] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v5, SourceStringa);
  return RtlCompareUnicodeStrings(
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           v5.Buffer,
           (unsigned __int64)v5.Length >> 1,
           1u) == 0;
}
