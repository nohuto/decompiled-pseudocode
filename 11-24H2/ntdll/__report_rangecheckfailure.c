/*
 * XREFs of __report_rangecheckfailure @ 0x180120A2C
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 *     RtlpMatchUILanguage @ 0x1800D0FEC (RtlpMatchUILanguage.c)
 *     strtok_s @ 0x18012DC60 (strtok_s.c)
 *     inflate_table @ 0x180155624 (inflate_table.c)
 * Callees:
 *     __report_securityfailure @ 0x180120A48 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
