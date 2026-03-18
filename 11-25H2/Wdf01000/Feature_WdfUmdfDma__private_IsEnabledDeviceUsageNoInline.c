/*
 * XREFs of Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A338
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1400777A8 (FxLibraryCommonRegisterClient.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1400813D0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1400895E8 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTE.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089C00 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     FxLibraryIsV35DriverAllowed @ 0x14008E0FC (FxLibraryIsV35DriverAllowed.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400AB59C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 * Callees:
 *     Feature_WdfUmdfDma__private_IsEnabledFallback @ 0x14008A370 (Feature_WdfUmdfDma__private_IsEnabledFallback.c)
 */

int __fastcall Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WdfUmdfDma__private_featureState.exchange64 & 0x10) != 0 )
    return Feature_WdfUmdfDma__private_featureState.exchange64 & 1;
  else
    return Feature_WdfUmdfDma__private_IsEnabledFallback(
             (wil_details_FeatureStateCache)Feature_WdfUmdfDma__private_featureState.exchange,
             wil_ReportingKind_DeviceUsage);
}
