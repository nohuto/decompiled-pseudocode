/*
 * XREFs of __report_rangecheckfailure @ 0x1404F2ABC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     strtok_s @ 0x140501E30 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x1405CABD8 (PopDetermineBucketFrequencies.c)
 *     LdrpGetResourceFileName @ 0x1405E4F08 (LdrpGetResourceFileName.c)
 *     inflate_table @ 0x1405FF9D4 (inflate_table.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072A218 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x140781E90 (RtlUnicodeStringToInt64.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1410 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8F50 (WheaRegChangeNotifyCallback.c)
 *     _CmGetDeviceChildren @ 0x1409AB39C (_CmGetDeviceChildren.c)
 *     LocalGetStringForControl @ 0x140A3A444 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x140A90DEC (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140A91BE0 (RtlCultureNameToLCID.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140B854E4 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140BB0468 (HdlspPutWideString.c)
 *     InitLoadDebuggerSymbols @ 0x140C0D7D0 (InitLoadDebuggerSymbols.c)
 *     KsepMatchInitBiosInfo @ 0x140C2DC20 (KsepMatchInitBiosInfo.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140C4CCD0 (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
