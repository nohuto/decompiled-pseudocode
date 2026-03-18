/*
 * XREFs of Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000AD24 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x140039730 (-GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA-BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14004C0B0 (-GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ.c)
 *     ?GetVariableRefreshOverrideEligible@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14004C100 (-GetVariableRefreshOverrideEligible@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ.c)
 *     ??1CFlipManagerSignal@@UEAA@XZ @ 0x14004F144 (--1CFlipManagerSignal@@UEAA@XZ.c)
 *     ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x14005086C (--1FlipManagerTokenIFlipInfo@@QEAA@XZ.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400986D8 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400996B8 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CBD4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14009D238 (--0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z.c)
 *     ConfigureFeatureDefaults @ 0x140280E44 (ConfigureFeatureDefaults.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x1400734BC (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState & 0x10) != 0 )
    return Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState & 1;
  else
    return Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback(
             (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState,
             3LL);
}
