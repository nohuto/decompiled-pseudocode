/*
 * XREFs of RtlStringCchCopyW @ 0x14043FE9C
 * Callers:
 *     PopLogNotifyDevice @ 0x140377AB4 (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x140616580 (CarCopyRuleViolationDetails.c)
 *     CarReportDifPluginRuleViolation @ 0x140617240 (CarReportDifPluginRuleViolation.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1406963E0 (SdbpGetPathAppPatchPreRS3.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PpmRegisterProfiles @ 0x140763BDC (PpmRegisterProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1407694B8 (TtmpPublishDeviceEvent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DB14 (Pdcv2ActivationClientRenewActivation.c)
 *     PdcPortOpenCommon @ 0x14078DF44 (PdcPortOpenCommon.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140809C70 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140809FA0 (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14080BCF4 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14080BE2C (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x14080C178 (AslpEnvResolveVars.c)
 *     AslpFileQueryVersionString @ 0x14080FADC (AslpFileQueryVersionString.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B020 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081B530 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D090 (_CmDevicePanelEnumSubkeyCallback.c)
 *     GetPrintableOperandValue @ 0x140861C7C (GetPrintableOperandValue.c)
 *     AslStringDuplicate @ 0x14095A750 (AslStringDuplicate.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140990A40 (_CmGetDeviceContainerIdFromBase.c)
 *     WmipMangleInstanceName @ 0x1409D040C (WmipMangleInstanceName.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EDF3C (Pdcv2ActivationClientActivate.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409FF930 (DrvDbGetObjectSubKeyCallback.c)
 *     RtlpInitNlsFileName @ 0x140A0949C (RtlpInitNlsFileName.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140A6F178 (RtlFormatMessageEx.c)
 *     SdbpCreateSearchDBContext @ 0x140A85BE4 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x140AA64AC (AslPathSplit.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA9BA0 (DbgkWerCaptureLiveKernelDump2.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1D550 (IopStoreSystemPartitionInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
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
