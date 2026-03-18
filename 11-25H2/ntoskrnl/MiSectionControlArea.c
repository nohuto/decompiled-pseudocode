/*
 * XREFs of MiSectionControlArea @ 0x1403B4FE0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 *     MiReferenceAweHandle @ 0x1404D6AD4 (MiReferenceAweHandle.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiDriverLoadSucceeded @ 0x1406EDB90 (MiDriverLoadSucceeded.c)
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     MiRestoreImportTableProtection @ 0x1407D7950 (MiRestoreImportTableProtection.c)
 *     MiWriteProtectSystemImages @ 0x1407D8230 (MiWriteProtectSystemImages.c)
 *     MiLogSectionObjectEvent @ 0x1407DC3F8 (MiLogSectionObjectEvent.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     MiCompactServiceTable @ 0x1407EB3AC (MiCompactServiceTable.c)
 *     MmGetSectionStrongImageReference @ 0x1407EB59C (MmGetSectionStrongImageReference.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     PspLocateInPEManifest @ 0x14083CBB8 (PspLocateInPEManifest.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     MiSectionClose @ 0x1408B54F0 (MiSectionClose.c)
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     MiMapViewInSystemSpace @ 0x1408BA3B8 (MiMapViewInSystemSpace.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     MiInitializeWowPeb @ 0x1408F97C8 (MiInitializeWowPeb.c)
 *     NtGetNlsSectionPtr @ 0x1408FB050 (NtGetNlsSectionPtr.c)
 *     MiMapExParametersInitialize @ 0x1408FB954 (MiMapExParametersInitialize.c)
 *     MiMapParametersInitialize @ 0x1408FBB20 (MiMapParametersInitialize.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x1408FC1C0 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     MiSectionOpen @ 0x140900A20 (MiSectionOpen.c)
 *     MiComputeProcessUserVa @ 0x140904FA4 (MiComputeProcessUserVa.c)
 *     MmGetFileObjectForSection @ 0x14090B870 (MmGetFileObjectForSection.c)
 *     PsQuerySectionSignatureInformation @ 0x14091E1C0 (PsQuerySectionSignatureInformation.c)
 *     MmCreateSpecialImageSection @ 0x14093AC3C (MmCreateSpecialImageSection.c)
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MmSectionToSectionObjectPointers @ 0x1409868A4 (MmSectionToSectionObjectPointers.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1409BC16C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     MiMapImageForEnclaveUse @ 0x1409CC068 (MiMapImageForEnclaveUse.c)
 *     MiCfgMarkValidEntries @ 0x1409FDA5C (MiCfgMarkValidEntries.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     MiSectionDelete @ 0x140A1D090 (MiSectionDelete.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A63318 (MiProcessKernelCfgImageLoadConfig.c)
 *     MmGetFileNameForSection @ 0x140A7F334 (MmGetFileNameForSection.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140A869D8 (MiMapSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140A8A7E0 (MiReturnSystemImageCommitment.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9400C (MiFreeRetpolineImportInfo.c)
 *     MiIsImageFullyRetpolined @ 0x140A942C4 (MiIsImageFullyRetpolined.c)
 *     MiChargeSystemImageCommitment @ 0x140A988C4 (MiChargeSystemImageCommitment.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 *     MiCallImageNotify @ 0x140ABE8DC (MiCallImageNotify.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     VfDriverLoadImage @ 0x140B97E14 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140C47C04 (MiInitializeCfg.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
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
