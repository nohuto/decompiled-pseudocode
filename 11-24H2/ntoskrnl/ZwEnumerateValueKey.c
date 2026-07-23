/*
 * XREFs of ZwEnumerateValueKey @ 0x1406A7610
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x14063E150 (DifZwEnumerateValueKeyWrapper.c)
 *     PipApplyFunctionToServiceInstances @ 0x140720650 (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14073E89C (KsepRegistryEnumValue.c)
 *     SepLoadNgenLocations @ 0x14078E5FC (SepLoadNgenLocations.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082D8F0 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14082E2A8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082E61C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RegRtlEnumValue @ 0x14097E62C (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x140A6A190 (ExpSetPendingUILanguage.c)
 *     HalpInitChipHacks @ 0x140C15B94 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140C25504 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulatedProcessorClass @ 0x140C33678 (PopReadSimulatedProcessorClass.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
