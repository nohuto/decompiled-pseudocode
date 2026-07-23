/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x14047F700
 * Callers:
 *     SymCryptSaveXmm @ 0x1404881D4 (SymCryptSaveXmm.c)
 *     _call_matherr @ 0x1404FFA80 (_call_matherr.c)
 *     DbgkpRemoveErrorPort @ 0x1407054F8 (DbgkpRemoveErrorPort.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     PsBootPhaseComplete @ 0x1407719D8 (PsBootPhaseComplete.c)
 *     PsStartSiloMonitor @ 0x140779370 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 *     RtlpInitCodePageTables @ 0x14077E994 (RtlpInitCodePageTables.c)
 *     Pdcv2pActivationClientCallback @ 0x14078DC20 (Pdcv2pActivationClientCallback.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA444 (EtwpUpdateFileInfoDriverRegistration.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfGenerateStateName @ 0x140834538 (ExpWnfGenerateStateName.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     MiValidateVadMetadataFlags @ 0x140916980 (MiValidateVadMetadataFlags.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 *     MiPageHasRelocations @ 0x14093B310 (MiPageHasRelocations.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409D7C08 (MiInitializePrivateFixupBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     PspSelectMachineForProcess @ 0x140A0BB90 (PspSelectMachineForProcess.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A41590 (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A60D58 (ExpWnfEnumerateScopeInstances.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     RtlGetHostNtSystemRoot @ 0x140A9BB90 (RtlGetHostNtSystemRoot.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     IovpUnloadDriver @ 0x140B84AF8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

__int64 PdcCreateWatchdogAroundClientCall()
{
  return 0LL;
}
