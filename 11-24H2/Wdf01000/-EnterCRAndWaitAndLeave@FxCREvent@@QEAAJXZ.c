/*
 * XREFs of ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1400141F0 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140014800 (StopIdleWorker.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x140024BF0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x140029AD0 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140029B9C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     imp_WdfTimerStop @ 0x14002C8F0 (imp_WdfTimerStop.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x14002D490 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x14002D98C (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x14002E970 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x14002EB70 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 *     ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x14002F340 (-WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14003EF90 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x14003F224 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x14004C30C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x140067A54 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006DDA8 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x140072970 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F3D0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1400AA010 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
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
