/*
 * XREFs of ZwDeleteValueKey @ 0x1406A7FF0
 * Callers:
 *     VfClearVerifierSettings @ 0x14060FDA0 (VfClearVerifierSettings.c)
 *     DifZwDeleteValueKeyWrapper @ 0x14063EEC0 (DifZwDeleteValueKeyWrapper.c)
 *     CmpSetSystemRegistryString @ 0x140667790 (CmpSetSystemRegistryString.c)
 *     BiZwDeleteValueKey @ 0x140697764 (BiZwDeleteValueKey.c)
 *     IopWriteResourceList @ 0x140721170 (IopWriteResourceList.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075433C (PopThermalHandlePreviousShutdown.c)
 *     SmKmKeyGenNewKey @ 0x14079A1C4 (SmKmKeyGenNewKey.c)
 *     WdipSemLoadConfigInfo @ 0x1407A0F30 (WdipSemLoadConfigInfo.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407C61FC (ExpWnfDeletePermanentStateData.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     CmpDoReDoRecord @ 0x1407E6CC4 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     PiQueryAndAllocateBootResources @ 0x14098DD70 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 *     _PnpCtxRegDeleteValue @ 0x14098FA7C (_PnpCtxRegDeleteValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     PiProcessDriverInstance @ 0x1409C9F40 (PiProcessDriverInstance.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PiRearrangeDeviceInstances @ 0x140A708CC (PiRearrangeDeviceInstances.c)
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 *     ExpWnfDeletePermanentName @ 0x140A82964 (ExpWnfDeletePermanentName.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A87340 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A8D634 (IopWriteAllocatedResourcesToRegistry.c)
 *     NtSetDefaultLocale @ 0x140A968F0 (NtSetDefaultLocale.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     RtlDeleteRegistryValue @ 0x140AC0B50 (RtlDeleteRegistryValue.c)
 *     BapdRemoveWbclData @ 0x140B4B2CC (BapdRemoveWbclData.c)
 *     ArbDeleteMmConfigRange @ 0x140C1567C (ArbDeleteMmConfigRange.c)
 *     PipHardwareConfigInit @ 0x140C20B04 (PipHardwareConfigInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueName);
}
