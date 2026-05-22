/*
 * XREFs of ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013700 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180051DE8 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x180053590 (-OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPercep.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x1800A4520 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BAFE0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB4A0 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x1800C13B0 (-SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z.c)
 *     ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x1800C1470 (-SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z.c)
 *     ?SetLastTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x1800C1490 (-SetLastTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800D88CC (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E7CAC (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F0B40 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FE290 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180161C10 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?PutOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetConstantAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x180170220 (-PutOnComplete@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IInputTarget>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
