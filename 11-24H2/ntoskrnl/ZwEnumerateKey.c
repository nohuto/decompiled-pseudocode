/*
 * XREFs of ZwEnumerateKey @ 0x1406A79F0
 * Callers:
 *     BiZwEnumerateKey @ 0x1404A6AD4 (BiZwEnumerateKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405570E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x14063DFA0 (DifZwEnumerateKeyWrapper.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406A372C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1406A3960 (_RtlpRemovePendingDeleteLanguages.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078284C (RtlpUpdateDynamicTimeZones.c)
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A1160 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1410 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A2B0C (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407A7CAC (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A85A8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407C9FD8 (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x1407D2908 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D428C (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4A88 (CmpMoveBiosAliasTable.c)
 *     CmpLoadLayerVersions @ 0x1407D74E4 (CmpLoadLayerVersions.c)
 *     AslRegistryEnumKey @ 0x140809160 (AslRegistryEnumKey.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14094C890 (PiDevCfgConfigureSoftwareDevices.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A25DA8 (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x140A32230 (NtLockProductActivationKeys.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     EtwpEnumerateKeyProviders @ 0x140A953C0 (EtwpEnumerateKeyProviders.c)
 *     RegistryOverwriteCentralProcessor @ 0x140C0F46C (RegistryOverwriteCentralProcessor.c)
 *     PipInitDeviceOverrideCache @ 0x140C230E8 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140C32F84 (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140C33170 (PopReadSimulatedHGSClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5F1A4 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
