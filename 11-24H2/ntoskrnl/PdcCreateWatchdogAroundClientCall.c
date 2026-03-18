/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x140484160
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048D93C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1405021C0 (_call_matherr.c)
 *     DbgkpRemoveErrorPort @ 0x140707938 (DbgkpRemoveErrorPort.c)
 *     HvlPhase0Initialize @ 0x14070E848 (HvlPhase0Initialize.c)
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     PsBootPhaseComplete @ 0x1407717B8 (PsBootPhaseComplete.c)
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 *     RtlpInitCodePageTables @ 0x14077EA64 (RtlpInitCodePageTables.c)
 *     Pdcv2pActivationClientCallback @ 0x14078DCF0 (Pdcv2pActivationClientCallback.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA304 (EtwpUpdateFileInfoDriverRegistration.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     ExpWnfGenerateStateName @ 0x140836DD8 (ExpWnfGenerateStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiValidateVadMetadataFlags @ 0x1408DFDD0 (MiValidateVadMetadataFlags.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiCommitInitialVadMetadataBits @ 0x1408F9980 (MiCommitInitialVadMetadataBits.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     VRegEnabledInJob @ 0x1409296E0 (VRegEnabledInJob.c)
 *     MiPageHasRelocations @ 0x140957920 (MiPageHasRelocations.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409DE038 (MiInitializePrivateFixupBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     PspSelectMachineForProcess @ 0x140A13430 (PspSelectMachineForProcess.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A4A930 (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A67860 (ExpWnfEnumerateScopeInstances.c)
 *     MmUnloadSystemImage @ 0x140A8AD10 (MmUnloadSystemImage.c)
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 *     RtlGetHostNtSystemRoot @ 0x140AA0800 (RtlGetHostNtSystemRoot.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 *     IovpUnloadDriver @ 0x140B82AF8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

__int64 PdcCreateWatchdogAroundClientCall()
{
  return 0LL;
}
