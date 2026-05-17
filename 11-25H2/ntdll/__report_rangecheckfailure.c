/*
 * XREFs of __report_rangecheckfailure @ 0x18012250C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     strtok_s @ 0x18012F740 (strtok_s.c)
 *     inflate_table @ 0x180156BD4 (inflate_table.c)
 * Callees:
 *     __report_securityfailure @ 0x180122528 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
