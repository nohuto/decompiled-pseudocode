/*
 * XREFs of ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC
 * Callers:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x14000C4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1400113A0 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x14001146C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     imp_WdfTimerStop @ 0x140013A50 (imp_WdfTimerStop.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x140015084 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x14001622C (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1400168C0 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x140017250 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 *     ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x140017A20 (-WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ.c)
 *     imp_WdfDeviceStopIdleActual @ 0x140023B30 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140024140 (StopIdleWorker.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140030320 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x140031C30 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x140032790 (--1FxSyncRequest@@UEAA@XZ.c)
 *     FxIoTargetSendIo @ 0x140032D90 (FxIoTargetSendIo.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140046A6C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14004ADB0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x14004B044 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x140069414 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006EA28 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1400730B0 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F370 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1400A9F40 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxCREvent::EnterCRAndWaitAndLeave(FxCREvent *this)
{
  KeEnterCriticalRegion();
  LODWORD(this) = KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)this;
}
