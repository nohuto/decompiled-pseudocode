/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x14025F47C
 * Callers:
 *     VslValidateSecureImagePages @ 0x14025E250 (VslValidateSecureImagePages.c)
 *     VslIumEfiRuntimeService @ 0x140260670 (VslIumEfiRuntimeService.c)
 *     VslCreateSecureImageSection @ 0x1404A6C40 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404AA5E0 (VslFillSecureAllocation.c)
 *     VslTransferSecureImageVersionResource @ 0x1404B3E90 (VslTransferSecureImageVersionResource.c)
 *     VslFreePoolTransferObject @ 0x1404B4020 (VslFreePoolTransferObject.c)
 *     VslPrepareSecureImageRelocations @ 0x1404BF800 (VslPrepareSecureImageRelocations.c)
 *     VslRegisterLogPages @ 0x1404C2A70 (VslRegisterLogPages.c)
 *     VslFinishStartSecureProcessor @ 0x14058A25C (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14058A3B4 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14058AA6C (VslInitializeSecureProcess.c)
 *     VslQueryActiveSecurePatches @ 0x14058ADE8 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058AFAC (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterSecurePatch @ 0x14058B124 (VslRegisterSecurePatch.c)
 *     VslRetrieveMailbox @ 0x14058B5D0 (VslRetrieveMailbox.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058BEB0 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058C0C8 (VslInitFunctionOverrideCapabilities.c)
 *     VslCapturePgoData @ 0x14070D160 (VslCapturePgoData.c)
 *     VslGetOnDemandDebugChallenge @ 0x14070D458 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14070D58C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14070D664 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14070D754 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070DA00 (VslQueryRuntimeAttestationReport.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14070DCC4 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x14070E27C (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x14070E448 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslDebugReadWriteSecureProcess @ 0x140993CB8 (VslDebugReadWriteSecureProcess.c)
 *     VslLoadEnclaveModule @ 0x140A2A9E8 (VslLoadEnclaveModule.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140A52D90 (VslCreateSecureSection.c)
 *     VslCreateEnclave @ 0x140A7FBF4 (VslCreateEnclave.c)
 *     VslCaptureSecureImageIat @ 0x140A9BDA0 (VslCaptureSecureImageIat.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C6722C (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  struct _MDL *v2; // rdi
  struct _MDL *v3; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  if ( ((_DWORD)a1[8] & 8) != 0 )
  {
    v2 = (struct _MDL *)*a1;
    while ( v2 )
    {
      if ( (v2->MdlFlags & 2) != 0 )
        MmUnlockPages(v2);
      v3 = v2;
      v2 = v2->Next;
      if ( ((_DWORD)a1[8] & 0x20) == 0 )
        ExFreePoolWithTag(v3, 0);
    }
  }
  if ( ((_DWORD)a1[8] & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
