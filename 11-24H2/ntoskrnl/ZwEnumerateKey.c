/*
 * XREFs of ZwEnumerateKey @ 0x1406A6A50
 * Callers:
 *     BiZwEnumerateKey @ 0x1404AC674 (BiZwEnumerateKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405594B8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x14063F9E0 (DifZwEnumerateKeyWrapper.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406A26DC (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1406A2910 (_RtlpRemovePendingDeleteLanguages.c)
 *     PiDcInitUpdateProperties @ 0x1407276DC (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078291C (RtlpUpdateDynamicTimeZones.c)
 *     SepReadAndInsertCaps @ 0x1407952E0 (SepReadAndInsertCaps.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A1050 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1300 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1610 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1B08 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A29FC (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407A7B6C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A8468 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A8694 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A8F64 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AEE98 (EtwpEnumerateAutologgerPath.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407C9AE8 (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x1407D2418 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D3D9C (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4598 (CmpMoveBiosAliasTable.c)
 *     CmpLoadLayerVersions @ 0x1407D6F70 (CmpLoadLayerVersions.c)
 *     AslRegistryEnumKey @ 0x140808A20 (AslRegistryEnumKey.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140964AB8 (PiDevCfgConfigureSoftwareDevices.c)
 *     _RegRtlEnumKey @ 0x140992974 (_RegRtlEnumKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x14099C1E4 (pIoQueryBusDescription.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A31E38 (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x140A3C920 (NtLockProductActivationKeys.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A77CC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     EtwpEnumerateKeyProviders @ 0x140A99E54 (EtwpEnumerateKeyProviders.c)
 *     RegistryOverwriteCentralProcessor @ 0x140C0D46C (RegistryOverwriteCentralProcessor.c)
 *     PipInitDeviceOverrideCache @ 0x140C210A8 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140C30E64 (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140C31050 (PopReadSimulatedHGSClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5D04C (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}
