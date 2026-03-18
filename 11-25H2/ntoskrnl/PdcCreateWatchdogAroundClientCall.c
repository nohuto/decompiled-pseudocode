/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x140483BB0
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048E708 (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1404FFA40 (_call_matherr.c)
 *     DbgkpRemoveErrorPort @ 0x1406FBA58 (DbgkpRemoveErrorPort.c)
 *     HvlPhase0Initialize @ 0x140702968 (HvlPhase0Initialize.c)
 *     ObShutdownSystem @ 0x1407372B0 (ObShutdownSystem.c)
 *     ObpCreateDosDevicesDirectory @ 0x14073773C (ObpCreateDosDevicesDirectory.c)
 *     PsBootPhaseComplete @ 0x140761DF8 (PsBootPhaseComplete.c)
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140769800 (PsUnregisterSiloMonitor.c)
 *     RtlpInitCodePageTables @ 0x14076F814 (RtlpInitCodePageTables.c)
 *     Pdcv2pActivationClientCallback @ 0x14077EA30 (Pdcv2pActivationClientCallback.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079AF34 (EtwpUpdateFileInfoDriverRegistration.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x1407C8190 (CmpSetVersionData.c)
 *     MiHotPatchAllProcesses @ 0x1407E2DB4 (MiHotPatchAllProcesses.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     ObpParseSymbolicLinkEx @ 0x14083FD90 (ObpParseSymbolicLinkEx.c)
 *     ExpWnfGenerateStateName @ 0x140897858 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MiValidateVadMetadataFlags @ 0x1408FEB50 (MiValidateVadMetadataFlags.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiCommitInitialVadMetadataBits @ 0x140906C50 (MiCommitInitialVadMetadataBits.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiPageHasRelocations @ 0x140946FF0 (MiPageHasRelocations.c)
 *     VRegEnabledInJob @ 0x14094A6C0 (VRegEnabledInJob.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     PspEstimateNewProcessServerSilo @ 0x1409BD31C (PspEstimateNewProcessServerSilo.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409D86AC (MiInitializePrivateFixupBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     PspSelectMachineForProcess @ 0x140A09390 (PspSelectMachineForProcess.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A64E60 (ExpWnfEnumerateScopeInstances.c)
 *     MmUnloadSystemImage @ 0x140A86260 (MmUnloadSystemImage.c)
 *     RtlGetHostNtSystemRoot @ 0x140A9AA40 (RtlGetHostNtSystemRoot.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140B72AF8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

__int64 PdcCreateWatchdogAroundClientCall()
{
  return 0LL;
}
