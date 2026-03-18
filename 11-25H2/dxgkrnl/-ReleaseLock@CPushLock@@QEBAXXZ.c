/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610
 * Callers:
 *     NtFlipObjectConsumerEndProcessPresent @ 0x140007B30 (NtFlipObjectConsumerEndProcessPresent.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x140007D1C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x140008D70 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1400097F0 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140009CD4 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14000A1F8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14000AB40 (NtFlipObjectReadNextMessageToProducer.c)
 *     ?FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z @ 0x14000B224 (-FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14000B3C8 (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z @ 0x14000BB6C (-ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z.c)
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x14000BE5C (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x14000BEF8 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_MONITOR_TIMING@@@Z @ 0x14000BF68 (-SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_MONITOR_TIMING@@@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x14000C020 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14000C200 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140024F78 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x140035DF0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1400428B0 (NtFlipObjectQueryEndpointConnected.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x140046CBC (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1400481C0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x14004A4F8 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z @ 0x14004CA3C (-FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004D020 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x14004E750 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E9F8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140050B60 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectOpen @ 0x140052E30 (NtFlipObjectOpen.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140056578 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1400566A4 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140058038 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x14005C250 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x14005C430 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x14005E490 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005EDD0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x140062F60 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?UnPair@CompositionSurfaceObject@@QEAAJ_N@Z @ 0x140079E68 (-UnPair@CompositionSurfaceObject@@QEAAJ_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x140099D60 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     ?DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z @ 0x14009A260 (-DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z.c)
 *     ?GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z @ 0x14009A2D0 (-GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z.c)
 *     ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x14009AA20 (-GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009AAB0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x14009AC10 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14009AC90 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14009BA18 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x14009BC90 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectPresentCancel @ 0x14009BD60 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryLostEvent @ 0x14009BE50 (NtFlipObjectQueryLostEvent.c)
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C05C (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     ?FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z @ 0x14009C3FC (-FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z.c)
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x14009C484 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14009E45C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x140203E90 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14028943C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( PsGetCurrentThreadId() == *((HANDLE *)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    ExReleasePushLockExclusiveEx(this, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
  }
  KeLeaveCriticalRegion();
}
