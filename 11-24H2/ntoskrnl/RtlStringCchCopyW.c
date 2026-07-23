/*
 * XREFs of RtlStringCchCopyW @ 0x14043615C
 * Callers:
 *     PopLogNotifyDevice @ 0x1403A8724 (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x140614B40 (CarCopyRuleViolationDetails.c)
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1406974B0 (SdbpGetPathAppPatchPreRS3.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074BFC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1407696D8 (TtmpPublishDeviceEvent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 *     PdcPortOpenCommon @ 0x14078DE74 (PdcPortOpenCommon.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x14080A3B0 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x14080A6E0 (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14080C434 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14080C56C (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x14080C8B8 (AslpEnvResolveVars.c)
 *     AslpFileQueryVersionString @ 0x14081021C (AslpFileQueryVersionString.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081BC70 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     WmipMangleInstanceName @ 0x1409B0854 (WmipMangleInstanceName.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     RtlpInitNlsFileName @ 0x140A059CC (RtlpInitNlsFileName.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140A685FC (RtlFormatMessageEx.c)
 *     SdbpCreateSearchDBContext @ 0x140A80724 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x140AA151C (AslPathSplit.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1F590 (IopStoreSystemPartitionInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
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
