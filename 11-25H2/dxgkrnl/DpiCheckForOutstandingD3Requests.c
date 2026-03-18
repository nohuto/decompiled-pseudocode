/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x14002A148
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14002A058 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004ACB4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiPdoDispatchPower @ 0x14004EDC0 (DpiPdoDispatchPower.c)
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140054E8C (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     DxgkInvalidateDeviceState @ 0x140062D20 (DxgkInvalidateDeviceState.c)
 *     DpiEnterSystemDisplay @ 0x14007D7F0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x14007FF0C (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140089AB0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140089C00 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPollSingleDisplayChild @ 0x140230F04 (DpiPollSingleDisplayChild.c)
 *     DpiFdoDispatchPnp @ 0x140238DD0 (DpiFdoDispatchPnp.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140239C00 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStartDevice @ 0x14023ADA0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x14023BA80 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1402447E0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x140244AFC (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x140247460 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x140247690 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x140247820 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1402479E0 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x140247CB0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x140247E30 (DpiFdoThermalPassiveCooling.c)
 *     DpiKsrStopAdapter @ 0x14024A5C0 (DpiKsrStopAdapter.c)
 *     DpiLdaLinkDeviceToChain @ 0x14024C96C (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x14024CE84 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiLdaValidateSystemChainStatus @ 0x14024D170 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x14024D5E0 (DpiFdoWaitWakePoCompletionWorkItem.c)
 *     DpiPdoHandleStartDevice @ 0x14024E430 (DpiPdoHandleStartDevice.c)
 *     DpiPdoHandleStopDevice @ 0x14024E540 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x14024E780 (DpiPdoPollingWorkItem.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1402BE410 (DpiPdoDispatchPnp.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1403752D0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleSystemPower @ 0x1403C53F8 (DpiFdoHandleSystemPower.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403C6450 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1403CB24C (DpiPollDisplayChildren.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1403CF7F0 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1403E3C90 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStopMiracastSession @ 0x1403E7BF0 (DpiFdoStopMiracastSession.c)
 *     DxgkHandleMiracastEscape @ 0x14040A148 (DxgkHandleMiracastEscape.c)
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1404296A0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1403498D0 (DpiDisableD3Requests.c)
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
