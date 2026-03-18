/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140061F08
 * Callers:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback @ 0x14006636C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback.c)
 *     Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledFallback @ 0x1400663C0 (Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledFallback @ 0x140066414 (Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyList__private_IsEnabledFallback @ 0x140066468 (Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyList__private_IsEnabledFallback.c)
 *     Feature_1825796408__private_IsEnabledFallback @ 0x14006792C (Feature_1825796408__private_IsEnabledFallback.c)
 *     Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback @ 0x140067980 (Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x1400679D4 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback @ 0x140067A28 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback @ 0x140067A7C (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback @ 0x140067AD0 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback.c)
 *     Feature_Servicing_VidSchSuspendFix__private_IsEnabledFallback @ 0x140067B24 (Feature_Servicing_VidSchSuspendFix__private_IsEnabledFallback.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x14006B440 (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 *     Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledFallback @ 0x14006B494 (Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledFallback.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback @ 0x14006B4E8 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback.c)
 *     Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback @ 0x14006B53C (Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback.c)
 *     Feature_VSyncWaiterUnderflow__private_IsEnabledFallback @ 0x14006B590 (Feature_VSyncWaiterUnderflow__private_IsEnabledFallback.c)
 *     Feature_4078915896__private_IsEnabledFallback @ 0x14006B7E0 (Feature_4078915896__private_IsEnabledFallback.c)
 *     Feature_D3D12DisplayableCD__private_IsEnabledFallback @ 0x14006B834 (Feature_D3D12DisplayableCD__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback @ 0x14006B888 (Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback.c)
 *     Feature_3694358843__private_IsEnabledFallback @ 0x14006CA80 (Feature_3694358843__private_IsEnabledFallback.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledFallback @ 0x14006CAD4 (Feature_DDisplayPreserveVidpn__private_IsEnabledFallback.c)
 *     Feature_DDisplay_AggCheckMpo__private_IsEnabledFallback @ 0x14006CB28 (Feature_DDisplay_AggCheckMpo__private_IsEnabledFallback.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback @ 0x14006CB7C (Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback @ 0x14006DECC (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback.c)
 *     Feature_DisplayDitheringSupport__private_IsEnabledFallback @ 0x14006DF20 (Feature_DisplayDitheringSupport__private_IsEnabledFallback.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback @ 0x14006DF74 (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback @ 0x14006DFC8 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback.c)
 *     Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledFallback @ 0x14006E01C (Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledFallback.c)
 *     Feature_ExternalBrightness__private_IsEnabledFallback @ 0x14006E070 (Feature_ExternalBrightness__private_IsEnabledFallback.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledFallback @ 0x14006E0C4 (Feature_HdrBrightnessPolicy__private_IsEnabledFallback.c)
 *     Feature_PanelBufferControl__private_IsEnabledFallback @ 0x14006E118 (Feature_PanelBufferControl__private_IsEnabledFallback.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback @ 0x14006E16C (Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback @ 0x14006FAF0 (Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback.c)
 *     Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback @ 0x140072B70 (Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledFallback @ 0x140073F58 (Feature_CompSwapchainDX12Support__private_IsEnabledFallback.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x140076EB8 (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 *     Feature_592146746__private_IsEnabledFallback @ 0x140077CFC (Feature_592146746__private_IsEnabledFallback.c)
 *     Feature_4234972473__private_IsEnabledFallback @ 0x140079138 (Feature_4234972473__private_IsEnabledFallback.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback @ 0x140079304 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledFallback @ 0x140079438 (Feature_IdSwapChainUserModeSync__private_IsEnabledFallback.c)
 *     Feature_Servicing_DeferredSwapChainClose__private_IsEnabledFallback @ 0x14007948C (Feature_Servicing_DeferredSwapChainClose__private_IsEnabledFallback.c)
 *     Feature_4109332794__private_IsEnabledFallback @ 0x14007BF84 (Feature_4109332794__private_IsEnabledFallback.c)
 *     Feature_490959160__private_IsEnabledFallback @ 0x14007BFD8 (Feature_490959160__private_IsEnabledFallback.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x14007C844 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback.c)
 *     Feature_I2CInterface_V2__private_IsEnabledFallback @ 0x14007DCD8 (Feature_I2CInterface_V2__private_IsEnabledFallback.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback @ 0x14007DD94 (Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback @ 0x14007DE50 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback.c)
 *     Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledFallback @ 0x140089D50 (Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledFallback.c)
 *     Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback @ 0x140089E0C (Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback.c)
 *     Feature_EnableIddCx111__private_IsEnabledFallback @ 0x14008B91C (Feature_EnableIddCx111__private_IsEnabledFallback.c)
 *     Feature_VirtualMonIoctlChecks__private_IsEnabledFallback @ 0x14008B970 (Feature_VirtualMonIoctlChecks__private_IsEnabledFallback.c)
 *     Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledFallback @ 0x14008C10C (Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledFallback.c)
 *     Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback @ 0x14008CEA0 (Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback @ 0x14008D600 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback.c)
 *     Feature_I2CManifestPerfLogging__private_IsEnabledFallback @ 0x14008D654 (Feature_I2CManifestPerfLogging__private_IsEnabledFallback.c)
 *     Feature_IncreasedRefreshRateLimits__private_IsEnabledFallback @ 0x140090094 (Feature_IncreasedRefreshRateLimits__private_IsEnabledFallback.c)
 *     Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledFallback @ 0x140090B94 (Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledFallback.c)
 *     Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback @ 0x140090BE8 (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback.c)
 *     Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledFallback @ 0x140090C3C (Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledFallback.c)
 *     Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledFallback @ 0x140090DA0 (Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledFallback.c)
 *     Feature_HdrRequireSourcePixelFormat__private_IsEnabledFallback @ 0x140090DF4 (Feature_HdrRequireSourcePixelFormat__private_IsEnabledFallback.c)
 *     Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback @ 0x140090E48 (Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionForcePresent__private_IsEnabledFallback @ 0x1400911D0 (Feature_DolbyVisionForcePresent__private_IsEnabledFallback.c)
 *     Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback @ 0x140091590 (Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback.c)
 *     Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback @ 0x1400915E4 (Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback.c)
 *     Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback @ 0x1400917F0 (Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledFallback @ 0x140091880 (Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledFallback @ 0x1400918D4 (Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledFallback.c)
 *     Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback @ 0x140092350 (Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback.c)
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback @ 0x140094344 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledFallback @ 0x140094398 (Feature_DodVsyncEnsureLocked__private_IsEnabledFallback.c)
 *     Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback @ 0x1400943EC (Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback @ 0x140094440 (Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback @ 0x140095048 (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledFallback @ 0x14009509C (Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledFallback @ 0x140095898 (Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x1400960AC (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback @ 0x140096100 (Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback.c)
 *     Feature_DisplayIDValidationRelaxed__private_IsEnabledFallback @ 0x14009799C (Feature_DisplayIDValidationRelaxed__private_IsEnabledFallback.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback @ 0x140099E78 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback.c)
 *     Feature_ComposedFlipPerf__private_IsEnabledFallback @ 0x14009BFB0 (Feature_ComposedFlipPerf__private_IsEnabledFallback.c)
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledFallback @ 0x14009D158 (Feature_DWM_MPO_Enhancement__private_IsEnabledFallback.c)
 *     Feature_FullscreenStats__private_IsEnabledFallback @ 0x14009D1AC (Feature_FullscreenStats__private_IsEnabledFallback.c)
 *     Feature_CompositionTextureDX12Support__private_IsEnabledFallback @ 0x14009F574 (Feature_CompositionTextureDX12Support__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_SyncObjNullptrFix__private_IsEnabledFallback @ 0x1401F8C34 (Feature_Servicing_GraphicsKernel_SyncObjNullptrFix__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140066E0C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
