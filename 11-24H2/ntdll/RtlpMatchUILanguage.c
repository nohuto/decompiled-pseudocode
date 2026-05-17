/*
 * XREFs of RtlpMatchUILanguage @ 0x1800D0FEC
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180032F80 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800D2EC0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     __report_rangecheckfailure @ 0x180120A2C (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  UNICODE_STRING v5; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
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
  return (unsigned int)RtlCompareUnicodeStrings(
                         DestinationString.Buffer,
                         (unsigned __int64)DestinationString.Length >> 1,
                         (_BYTE *)v5.Buffer,
                         (unsigned __int64)v5.Length >> 1,
                         1) == 0;
}
