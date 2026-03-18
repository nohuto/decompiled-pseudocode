/*
 * XREFs of RtlCopyUnicodeString @ 0x1403FFE80
 * Callers:
 *     RtlPcToFileName @ 0x1403FFB00 (RtlPcToFileName.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1403FFB60 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x1403FFD40 (IoQueryFullDriverPath.c)
 *     PnpAllocateWatchdog @ 0x1403FFDAC (PnpAllocateWatchdog.c)
 *     HalpRegisterDmaController @ 0x1405531F8 (HalpRegisterDmaController.c)
 *     HalpTimerRegister @ 0x14056008C (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x140562AC0 (HalpInterruptRegisterController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14065AE8C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     MicrocodeLogRegistry @ 0x1406647D8 (MicrocodeLogRegistry.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140723D70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpCopyDeviceInstancePath @ 0x1407247D0 (PnpCopyDeviceInstancePath.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407358F0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14073A198 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopFxRegisterComponentPerfStates @ 0x14074E534 (PopFxRegisterComponentPerfStates.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407732F8 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140773424 (PspSiloInitializeUserSharedData.c)
 *     PsRegisterSiloMonitor @ 0x140779150 (PsRegisterSiloMonitor.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpMergeVersionDescriptors @ 0x1407D7390 (CmpMergeVersionDescriptors.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F0C00 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1407F2664 (MiFillActivePatchesQueryBuffer.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     AhcCacheQueryHwId @ 0x140828F30 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1408F2DF4 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     CmpGetVirtualizationID @ 0x140909F58 (CmpGetVirtualizationID.c)
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140928C80 (VrpBuildKeyPath.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140931D50 (FsRtlFindInTunnelCacheEx.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409606E4 (SdbMakeIndexKeyFromStringEx.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409C8568 (IopQueryRegistryKeySystemPath.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1409E33E0 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopCheckTopDeviceHint @ 0x1409E3A30 (IopCheckTopDeviceHint.c)
 *     PnpFinalizeVetoedRemove @ 0x140A0C4C4 (PnpFinalizeVetoedRemove.c)
 *     PiDeferSetInterfaceState @ 0x140A0C5A8 (PiDeferSetInterfaceState.c)
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 *     PiDeviceRegistration @ 0x140A0CBC4 (PiDeviceRegistration.c)
 *     PnpConcatenateUnicodeStrings @ 0x140A0D474 (PnpConcatenateUnicodeStrings.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     MiQuerySingleLoadedPatch @ 0x140A32534 (MiQuerySingleLoadedPatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     RtlPcToFilePath @ 0x140A8F850 (RtlPcToFilePath.c)
 *     SepAddTokenOriginClaim @ 0x140A97DE0 (SepAddTokenOriginClaim.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     MiQueryLoadedPatches @ 0x140AA6168 (MiQueryLoadedPatches.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140AA7560 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 *     PopProcessWakeSourceWork @ 0x140B6CA78 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140C10D18 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
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
