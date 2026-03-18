/*
 * XREFs of MiSectionControlArea @ 0x1402D4800
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 *     MiReferenceAweHandle @ 0x1404D61C4 (MiReferenceAweHandle.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiDriverLoadSucceeded @ 0x1406F986C (MiDriverLoadSucceeded.c)
 *     PspLocateSystemDll @ 0x140771E70 (PspLocateSystemDll.c)
 *     MiRestoreImportTableProtection @ 0x1407E7808 (MiRestoreImportTableProtection.c)
 *     MiWriteProtectSystemImages @ 0x1407E80F0 (MiWriteProtectSystemImages.c)
 *     MiLogSectionObjectEvent @ 0x1407EC298 (MiLogSectionObjectEvent.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiCompactServiceTable @ 0x1407FB23C (MiCompactServiceTable.c)
 *     MmGetSectionStrongImageReference @ 0x1407FB42C (MmGetSectionStrongImageReference.c)
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     MiSectionOpen @ 0x1408E2BC0 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1408E5930 (MiSectionClose.c)
 *     MmSectionToSectionObjectPointers @ 0x1408EFD74 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiComputeProcessUserVa @ 0x1408F8A6C (MiComputeProcessUserVa.c)
 *     MmGetFileObjectForSection @ 0x1408FF7D0 (MmGetFileObjectForSection.c)
 *     MmMapViewOfSection @ 0x1409071A0 (MmMapViewOfSection.c)
 *     PspLocateInPEManifest @ 0x14090885C (PspLocateInPEManifest.c)
 *     PsQuerySectionSignatureInformation @ 0x140935450 (PsQuerySectionSignatureInformation.c)
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 *     MiMapViewInSystemSpace @ 0x140946C58 (MiMapViewInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     MiMapParametersInitialize @ 0x14099F410 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x14099F5A8 (MiMapExParametersInitialize.c)
 *     MiInitializeWowPeb @ 0x1409C2B2C (MiInitializeWowPeb.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiCfgMarkValidEntries @ 0x1409E9AAC (MiCfgMarkValidEntries.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     MiSectionDelete @ 0x140A24310 (MiSectionDelete.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A56770 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A659F0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MmGetFileNameForSection @ 0x140A830BC (MmGetFileNameForSection.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140A8B428 (MiMapSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140A8F7AC (MiReturnSystemImageCommitment.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiFreeRetpolineImportInfo @ 0x140A981A0 (MiFreeRetpolineImportInfo.c)
 *     MiIsImageFullyRetpolined @ 0x140A984B4 (MiIsImageFullyRetpolined.c)
 *     MiChargeSystemImageCommitment @ 0x140A9E2DC (MiChargeSystemImageCommitment.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 *     MiCallImageNotify @ 0x140AC26CC (MiCallImageNotify.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 *     VfDriverLoadImage @ 0x140BA7DF4 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140C58EE4 (MiInitializeCfg.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
