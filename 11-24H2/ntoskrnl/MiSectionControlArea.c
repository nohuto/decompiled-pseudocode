/*
 * XREFs of MiSectionControlArea @ 0x140355A80
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     MiReferenceAweHandle @ 0x1404CF614 (MiReferenceAweHandle.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiDriverLoadSucceeded @ 0x1406F74AC (MiDriverLoadSucceeded.c)
 *     PspLocateSystemDll @ 0x140772090 (PspLocateSystemDll.c)
 *     MiRestoreImportTableProtection @ 0x1407E7DD8 (MiRestoreImportTableProtection.c)
 *     MiWriteProtectSystemImages @ 0x1407E86C0 (MiWriteProtectSystemImages.c)
 *     MiLogSectionObjectEvent @ 0x1407EC868 (MiLogSectionObjectEvent.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiCompactServiceTable @ 0x1407FB9AC (MiCompactServiceTable.c)
 *     MmGetSectionStrongImageReference @ 0x1407FBB9C (MmGetSectionStrongImageReference.c)
 *     MmSectionToSectionObjectPointers @ 0x140861574 (MmSectionToSectionObjectPointers.c)
 *     MiSectionClose @ 0x140895530 (MiSectionClose.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x1408A2010 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     MiInitializeWowPeb @ 0x1408DCF04 (MiInitializeWowPeb.c)
 *     MmMapViewOfSection @ 0x1408DE270 (MmMapViewOfSection.c)
 *     PspLocateInPEManifest @ 0x1408DFF78 (PspLocateInPEManifest.c)
 *     MiMapViewInSystemSpace @ 0x1408EB578 (MiMapViewInSystemSpace.c)
 *     MiSectionOpen @ 0x140919770 (MiSectionOpen.c)
 *     MiComputeProcessUserVa @ 0x14091AEC4 (MiComputeProcessUserVa.c)
 *     MmGetFileObjectForSection @ 0x1409220B0 (MmGetFileObjectForSection.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapParametersInitialize @ 0x140987B90 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x140987D28 (MiMapExParametersInitialize.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 *     MmGetSectionInformation @ 0x1409E9C60 (MmGetSectionInformation.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     MiSectionDelete @ 0x140A186E0 (MiSectionDelete.c)
 *     PsQuerySectionSignatureInformation @ 0x140A19CA0 (PsQuerySectionSignatureInformation.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A4E604 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A5E1C0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MmGetFileNameForSection @ 0x140A7DBDC (MmGetFileNameForSection.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140A87914 (MiMapSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140A8BE44 (MiReturnSystemImageCommitment.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9495C (MiFreeRetpolineImportInfo.c)
 *     MiIsImageFullyRetpolined @ 0x140A94C70 (MiIsImageFullyRetpolined.c)
 *     MiChargeSystemImageCommitment @ 0x140A9984C (MiChargeSystemImageCommitment.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     MiCallImageNotify @ 0x140ABD9B4 (MiCallImageNotify.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 *     VfDriverLoadImage @ 0x140BA9DF4 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140C5B074 (MiInitializeCfg.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
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
