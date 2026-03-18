/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x14002A8E8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14002A7F8 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiPdoDispatchPower @ 0x14004E6C0 (DpiPdoDispatchPower.c)
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140057454 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     DxgkInvalidateDeviceState @ 0x140063610 (DxgkInvalidateDeviceState.c)
 *     DpiEnterSystemDisplay @ 0x14007DE70 (DpiEnterSystemDisplay.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x14008058C (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x14008A190 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x14008A2E0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPollSingleDisplayChild @ 0x1402378E0 (DpiPollSingleDisplayChild.c)
 *     DpiFdoDispatchPnp @ 0x14023F8E0 (DpiFdoDispatchPnp.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140240710 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStartDevice @ 0x1402418B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1402425A0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140249CE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x140249F1C (DpiEnableMsBddFallbackDriver.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x14024B5F0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14024B90C (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x14024E290 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x14024E4C0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x14024E650 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x14024E810 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x14024EAE0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x14024EC60 (DpiFdoThermalPassiveCooling.c)
 *     DpiKsrStopAdapter @ 0x1402513F0 (DpiKsrStopAdapter.c)
 *     DpiLdaLinkDeviceToChain @ 0x14025379C (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140253CB4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiLdaValidateSystemChainStatus @ 0x140253FA0 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x140254410 (DpiFdoWaitWakePoCompletionWorkItem.c)
 *     DpiPdoHandleStartDevice @ 0x140255260 (DpiPdoHandleStartDevice.c)
 *     DpiPdoHandleStopDevice @ 0x140255370 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1402555B0 (DpiPdoPollingWorkItem.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x14031D9B0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiPdoDispatchPnp @ 0x1403B44D0 (DpiPdoDispatchPnp.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403BA5D0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1403BE03C (DpiPollDisplayChildren.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1403C2180 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1403DB600 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStopMiracastSession @ 0x1403E12A0 (DpiFdoStopMiracastSession.c)
 *     DxgkHandleMiracastEscape @ 0x1404028D8 (DxgkHandleMiracastEscape.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x14002AC88 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x140336D30 (DpiDisableD3Requests.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  DpiDisableD3Requests(*(_QWORD *)(a1 + 24));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  v2 = *(_DWORD *)(a1 + 4288);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 4240), Executive, 0, 0, 0LL);
}
