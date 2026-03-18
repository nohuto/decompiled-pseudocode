/*
 * XREFs of ZwEnumerateValueKey @ 0x1406A6670
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x14063FB90 (DifZwEnumerateValueKeyWrapper.c)
 *     PipApplyFunctionToServiceInstances @ 0x140722AC0 (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x1407276DC (PiDcInitUpdateProperties.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14074096C (KsepRegistryEnumValue.c)
 *     SepLoadNgenLocations @ 0x14078E6CC (SepLoadNgenLocations.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801460 (SdbpGetManifestedMergeStubAlloc.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082D0C0 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14082DA78 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082DDEC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RegRtlEnumValue @ 0x1409935EC (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 *     HalpInitChipHacks @ 0x140C13B94 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140C234D4 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C23770 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulatedProcessorClass @ 0x140C31558 (PopReadSimulatedProcessorClass.c)
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}
