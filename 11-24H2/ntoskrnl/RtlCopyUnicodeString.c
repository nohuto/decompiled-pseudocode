/*
 * XREFs of RtlCopyUnicodeString @ 0x1403FA370
 * Callers:
 *     RtlPcToFileName @ 0x1403F9FF0 (RtlPcToFileName.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1403FA050 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x1403FA230 (IoQueryFullDriverPath.c)
 *     PnpAllocateWatchdog @ 0x1403FA29C (PnpAllocateWatchdog.c)
 *     HalpRegisterDmaController @ 0x140550B38 (HalpRegisterDmaController.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x1405606F0 (HalpInterruptRegisterController.c)
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406595AC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     MicrocodeLogRegistry @ 0x1406630C8 (MicrocodeLogRegistry.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140721900 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpCopyDeviceInstancePath @ 0x140722360 (PnpCopyDeviceInstancePath.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140733820 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407380C8 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopFxRegisterComponentPerfStates @ 0x14074C864 (PopFxRegisterComponentPerfStates.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140773518 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140773644 (PspSiloInitializeUserSharedData.c)
 *     PsRegisterSiloMonitor @ 0x140779250 (PsRegisterSiloMonitor.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpMergeVersionDescriptors @ 0x1407D7940 (CmpMergeVersionDescriptors.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F11D0 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1407F2C34 (MiFillActivePatchesQueryBuffer.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     AhcCacheQueryHwId @ 0x14082976C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082B744 (ObGetSiloRootDirectoryPath.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     CmpGetVirtualizationID @ 0x1408E1674 (CmpGetVirtualizationID.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140914434 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     VrpTranslatePath @ 0x140929830 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x14092ADC0 (VrpBuildKeyPath.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140933E90 (FsRtlFindInTunnelCacheEx.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409481A4 (SdbMakeIndexKeyFromStringEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 *     PiDeviceRegistration @ 0x1409BAFC8 (PiDeviceRegistration.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409BB878 (PnpConcatenateUnicodeStrings.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1409DDE40 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopCheckTopDeviceHint @ 0x1409DE490 (IopCheckTopDeviceHint.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     RtlPcToFilePath @ 0x140A15C50 (RtlPcToFilePath.c)
 *     MiQuerySingleLoadedPatch @ 0x140A2654C (MiQuerySingleLoadedPatch.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PiDeferSetInterfaceState @ 0x140A8C6C0 (PiDeferSetInterfaceState.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     MiQueryLoadedPatches @ 0x140AA11D8 (MiQueryLoadedPatches.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140AA2660 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpFinalizeVetoedRemove @ 0x140AB1A68 (PnpFinalizeVetoedRemove.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     PopProcessWakeSourceWork @ 0x140B6E318 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140C12D0C (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140C620B8 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    v6 = DestinationString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
