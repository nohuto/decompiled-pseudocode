/*
 * XREFs of __report_rangecheckfailure @ 0x18011EC5C
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpMatchUILanguage @ 0x18009A584 (RtlpMatchUILanguage.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 *     strtok_s @ 0x18012BE90 (strtok_s.c)
 *     inflate_table @ 0x1801539E4 (inflate_table.c)
 * Callees:
 *     __report_securityfailure @ 0x18011EC78 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
