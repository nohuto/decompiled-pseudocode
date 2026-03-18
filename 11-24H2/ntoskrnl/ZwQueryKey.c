/*
 * XREFs of ZwQueryKey @ 0x1406A66D0
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1404A7E94 (BiOpenStoreKeyFromObject.c)
 *     BiZwQueryKey @ 0x1404A8854 (BiZwQueryKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405594B8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x1405A35F0 (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x140645EC0 (DifZwQueryKeyWrapper.c)
 *     PipCallbackHasDeviceOverrides @ 0x140719D54 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140740BB8 (KsepRegistryQueryKeyInformation.c)
 *     SepLoadNgenLocations @ 0x14078E6CC (SepLoadNgenLocations.c)
 *     SepReadAndInsertCaps @ 0x1407952E0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795638 (SepReadAndPopulateCapes.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A8F64 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D3D9C (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4598 (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     _RegRtlQueryInfoKey @ 0x140993F98 (_RegRtlQueryInfoKey.c)
 *     IopGetRegistryKeyInformation @ 0x14099C54C (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x1409C8004 (PiNormalizeDeviceText.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409CAFD4 (IopApplyMutableTagToRegistryKey.c)
 *     RtlpValidateKeyTrust @ 0x1409EA62C (RtlpValidateKeyTrust.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409FF930 (DrvDbGetObjectSubKeyCallback.c)
 *     PiRearrangeDeviceInstances @ 0x140A708CC (PiRearrangeDeviceInstances.c)
 *     HalpInitChipHacks @ 0x140C13B94 (HalpInitChipHacks.c)
 *     PipInitDeviceOverrideCache @ 0x140C210A8 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeyInformationClass);
}
