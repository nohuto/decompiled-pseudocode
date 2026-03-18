/*
 * XREFs of Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A394
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x140077028 (FxLibraryCommonRegisterClient.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081370 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x140081720 (-Dispose@FxCommonBuffer@@UEAAEXZ.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140089408 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1400895E8 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTE.c)
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x140089B10 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089C54 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     FxLibraryIsV35DriverAllowed @ 0x14008E15C (FxLibraryIsV35DriverAllowed.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400AB66C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 * Callees:
 *     Feature_WdfUmdfDma__private_IsEnabledFallback @ 0x14008A3CC (Feature_WdfUmdfDma__private_IsEnabledFallback.c)
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
