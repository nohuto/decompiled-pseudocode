/*
 * XREFs of ZwDeleteValueKey @ 0x1406A8F90
 * Callers:
 *     VfClearVerifierSettings @ 0x14060E360 (VfClearVerifierSettings.c)
 *     DifZwDeleteValueKeyWrapper @ 0x14063D480 (DifZwDeleteValueKeyWrapper.c)
 *     CmpSetSystemRegistryString @ 0x140666080 (CmpSetSystemRegistryString.c)
 *     BiZwDeleteValueKey @ 0x1406987E4 (BiZwDeleteValueKey.c)
 *     IopWriteResourceList @ 0x14071ED00 (IopWriteResourceList.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075265C (PopThermalHandlePreviousShutdown.c)
 *     SmKmKeyGenNewKey @ 0x14079A2D4 (SmKmKeyGenNewKey.c)
 *     WdipSemLoadConfigInfo @ 0x1407A1040 (WdipSemLoadConfigInfo.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407C665C (ExpWnfDeletePermanentStateData.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     CmpDoReDoRecord @ 0x1407E7294 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     ExpWnfDeletePermanentName @ 0x140832134 (ExpWnfDeletePermanentName.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     PiQueryAndAllocateBootResources @ 0x140978DA8 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1409795E8 (PiQueryResourceRequirements.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     PiProcessDriverInstance @ 0x1409B69D0 (PiProcessDriverInstance.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     PiRearrangeDeviceInstances @ 0x140A69D5C (PiRearrangeDeviceInstances.c)
 *     ExpSetPendingUILanguage @ 0x140A6A190 (ExpSetPendingUILanguage.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A89C08 (IopWriteAllocatedResourcesToRegistry.c)
 *     NtSetDefaultLocale @ 0x140A93120 (NtSetDefaultLocale.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     RtlDeleteRegistryValue @ 0x140ABBCB0 (RtlDeleteRegistryValue.c)
 *     BapdRemoveWbclData @ 0x140B4D30C (BapdRemoveWbclData.c)
 *     ArbDeleteMmConfigRange @ 0x140C1767C (ArbDeleteMmConfigRange.c)
 *     PipHardwareConfigInit @ 0x140C22B44 (PipHardwareConfigInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
