/*
 * XREFs of RtlCopyUnicodeString @ 0x14036CBB0
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14036C898 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x14036CA70 (IoQueryFullDriverPath.c)
 *     PnpAllocateWatchdog @ 0x14036CADC (PnpAllocateWatchdog.c)
 *     RtlPcToFileName @ 0x14036CC30 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1405508F8 (HalpRegisterDmaController.c)
 *     HalpTimerRegister @ 0x14055D78C (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x1405601C0 (HalpInterruptRegisterController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14064EF04 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     MicrocodeLogRegistry @ 0x140658518 (MicrocodeLogRegistry.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PnpNotifyHwProfileChange @ 0x140714584 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpCopyDeviceInstancePath @ 0x1407186D0 (PnpCopyDeviceInstancePath.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140729660 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140729860 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14072DF08 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopFxRegisterComponentPerfStates @ 0x140742464 (PopFxRegisterComponentPerfStates.c)
 *     PopConnectToPolicyDevice @ 0x14074DE04 (PopConnectToPolicyDevice.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140763928 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140763A54 (PspSiloInitializeUserSharedData.c)
 *     PsRegisterSiloMonitor @ 0x1407694A0 (PsRegisterSiloMonitor.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpMergeVersionDescriptors @ 0x1407C7C5C (CmpMergeVersionDescriptors.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407E0D60 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1407E27C4 (MiFillActivePatchesQueryBuffer.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     AhcCacheQueryHwId @ 0x14081913C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140825F64 (SdbMakeIndexKeyFromStringEx.c)
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     CmpGetVirtualizationID @ 0x14083E1C4 (CmpGetVirtualizationID.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopCheckTopDeviceHint @ 0x140861D00 (IopCheckTopDeviceHint.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140894D8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     RtlConvertSidToUnicodeString @ 0x140917220 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14092E770 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140939670 (FsRtlFindInTunnelCacheEx.c)
 *     VrpTranslatePath @ 0x140947B60 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409490E8 (VrpBuildKeyPath.c)
 *     PnpConcatenateUnicodeStrings @ 0x14096AEA0 (PnpConcatenateUnicodeStrings.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1409841A4 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B01F8 (IopQueryRegistryKeySystemPath.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1409F2778 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 *     MiQuerySingleLoadedPatch @ 0x140A1DB54 (MiQuerySingleLoadedPatch.c)
 *     PiDeviceRegistration @ 0x140A46BD8 (PiDeviceRegistration.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PiDeferSetInterfaceState @ 0x140A8B230 (PiDeferSetInterfaceState.c)
 *     SepAddTokenOriginClaim @ 0x140A93A94 (SepAddTokenOriginClaim.c)
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 *     MiQueryLoadedPatches @ 0x140AA1218 (MiQueryLoadedPatches.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140AA27D0 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     RtlPcToFilePath @ 0x140AA3620 (RtlPcToFilePath.c)
 *     PnpFinalizeVetoedRemove @ 0x140AB2A7C (PnpFinalizeVetoedRemove.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     PopProcessWakeSourceWork @ 0x140B5D998 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140BFFC84 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
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
