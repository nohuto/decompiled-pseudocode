/*
 * XREFs of RtlStringCchCopyW @ 0x14043FDBC
 * Callers:
 *     PopLogNotifyDevice @ 0x140359770 (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x14060A5C0 (CarCopyRuleViolationDetails.c)
 *     CarReportDifPluginRuleViolation @ 0x14060B280 (CarReportDifPluginRuleViolation.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x14068B090 (SdbpGetPathAppPatchPreRS3.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140741BC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PpmRegisterProfiles @ 0x14075411C (PpmRegisterProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x1407588D0 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x140759AF8 (TtmpPublishDeviceEvent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x14077E860 (Pdcv2ActivationClientRenewActivation.c)
 *     PdcPortOpenCommon @ 0x14077EC84 (PdcPortOpenCommon.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbpCreateSearchDBContext @ 0x1407F4460 (SdbpCreateSearchDBContext.c)
 *     AslPathCombine @ 0x1407FA100 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1407FA430 (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407FC184 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1407FC2BC (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x1407FC608 (AslpEnvResolveVars.c)
 *     AslpFileQueryVersionString @ 0x1407FFF6C (AslpFileQueryVersionString.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14080B120 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14080B630 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14080D190 (_CmDevicePanelEnumSubkeyCallback.c)
 *     AslStringDuplicate @ 0x140829000 (AslStringDuplicate.c)
 *     RtlpInitNlsFileName @ 0x1408F95F4 (RtlpInitNlsFileName.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140950D48 (_CmGetDeviceContainerIdFromBase.c)
 *     Pdcv2ActivationClientActivate @ 0x14096C430 (Pdcv2ActivationClientActivate.c)
 *     WmipMangleInstanceName @ 0x1409B80C0 (WmipMangleInstanceName.c)
 *     GetPrintableOperandValue @ 0x1409E7B94 (GetPrintableOperandValue.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A01530 (DrvDbGetObjectSubKeyCallback.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140A6CF24 (RtlFormatMessageEx.c)
 *     AslPathSplit @ 0x140AA155C (AslPathSplit.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 *     IopStoreSystemPartitionInformation @ 0x140C0C380 (IopStoreSystemPartitionInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r10
  wchar_t v5; // ax
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v4);
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    return cchDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
