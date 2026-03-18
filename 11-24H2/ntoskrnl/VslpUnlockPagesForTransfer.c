/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140267E9C
 * Callers:
 *     VslValidateSecureImagePages @ 0x140266C70 (VslValidateSecureImagePages.c)
 *     VslIumEfiRuntimeService @ 0x140490F50 (VslIumEfiRuntimeService.c)
 *     VslCreateSecureImageSection @ 0x1404AC6A0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404AFBF0 (VslFillSecureAllocation.c)
 *     VslTransferSecureImageVersionResource @ 0x1404B8FF0 (VslTransferSecureImageVersionResource.c)
 *     VslFreePoolTransferObject @ 0x1404B9180 (VslFreePoolTransferObject.c)
 *     VslPrepareSecureImageRelocations @ 0x1404C63A0 (VslPrepareSecureImageRelocations.c)
 *     VslRegisterLogPages @ 0x1404C95C0 (VslRegisterLogPages.c)
 *     VslFinishStartSecureProcessor @ 0x14058CF6C (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14058D0C4 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14058D77C (VslInitializeSecureProcess.c)
 *     VslQueryActiveSecurePatches @ 0x14058DA90 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058DC54 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterSecurePatch @ 0x14058DDCC (VslRegisterSecurePatch.c)
 *     VslRetrieveMailbox @ 0x14058E1C0 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14058E2EC (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14058E5B4 (VslSecurePoolUpdate.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058EE90 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058F0A8 (VslInitFunctionOverrideCapabilities.c)
 *     VslCapturePgoData @ 0x14070F5D0 (VslCapturePgoData.c)
 *     VslGetOnDemandDebugChallenge @ 0x14070F8C8 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14070F9FC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14070FAD4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14070FBC4 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14070FCC0 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070FE70 (VslQueryRuntimeAttestationReport.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140710134 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x1407103F8 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x1407106EC (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x1407108B8 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslLoadEnclaveModule @ 0x1408DAF58 (VslLoadEnclaveModule.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409AA8A8 (VslDebugReadWriteSecureProcess.c)
 *     VslValidateDynamicCodePages @ 0x140A460AC (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140A5B480 (VslCreateSecureSection.c)
 *     VslCreateEnclave @ 0x140A850B4 (VslCreateEnclave.c)
 *     VslCaptureSecureImageIat @ 0x140AA0A10 (VslCaptureSecureImageIat.c)
 *     VslRegisterBootDrivers @ 0x140C6397C (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C650B0 (VslConnectSwInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
