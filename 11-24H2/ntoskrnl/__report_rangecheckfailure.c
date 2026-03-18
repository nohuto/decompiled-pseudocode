/*
 * XREFs of __report_rangecheckfailure @ 0x1404F51BC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     strtok_s @ 0x140504570 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x1405CD468 (PopDetermineBucketFrequencies.c)
 *     LdrpGetResourceFileName @ 0x1405E7918 (LdrpGetResourceFileName.c)
 *     inflate_table @ 0x140602394 (inflate_table.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072C228 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x140781F60 (RtlUnicodeStringToInt64.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1300 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1610 (WdipSemLoadNextScenario.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8A60 (WheaRegChangeNotifyCallback.c)
 *     _CmGetDeviceChildren @ 0x1409B400C (_CmGetDeviceChildren.c)
 *     LocalGetStringForControl @ 0x140A44BB4 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x140A9463C (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140A95430 (RtlCultureNameToLCID.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140B834E4 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140BAE468 (HdlspPutWideString.c)
 *     InitLoadDebuggerSymbols @ 0x140C0B7D0 (InitLoadDebuggerSymbols.c)
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C48474 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4953C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140C4AB34 (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
