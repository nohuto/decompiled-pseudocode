/*
 * XREFs of ZwQueryKey @ 0x1406A7670
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1404A28E4 (BiOpenStoreKeyFromObject.c)
 *     BiZwQueryKey @ 0x1404A2DC4 (BiZwQueryKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405570E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x1405A0530 (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x140644480 (DifZwQueryKeyWrapper.c)
 *     PipCallbackHasDeviceOverrides @ 0x1407178E4 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x14073EAE8 (KsepRegistryQueryKeyInformation.c)
 *     SepLoadNgenLocations @ 0x14078E5FC (SepLoadNgenLocations.c)
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D428C (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4A88 (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     RtlpValidateKeyTrust @ 0x140833F14 (RtlpValidateKeyTrust.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B6214 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 *     IopGetRegistryKeyInformation @ 0x1409CECBC (IopGetRegistryKeyInformation.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     PiRearrangeDeviceInstances @ 0x140A69D5C (PiRearrangeDeviceInstances.c)
 *     HalpInitChipHacks @ 0x140C15B94 (HalpInitChipHacks.c)
 *     PipInitDeviceOverrideCache @ 0x140C230E8 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
