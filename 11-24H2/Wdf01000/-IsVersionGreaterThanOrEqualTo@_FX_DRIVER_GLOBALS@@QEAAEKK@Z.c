/*
 * XREFs of ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x140005AE0
 * Callers:
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x140005854 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x140005948 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x14000747C (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfDeviceGetFileObject @ 0x140012820 (imp_WdfDeviceGetFileObject.c)
 *     imp_WdfRequestGetFileObject @ 0x140013460 (imp_WdfRequestGetFileObject.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14001C510 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x14001FFC0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1400203E0 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x14002CCC0 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x14002D98C (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038290 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038A40 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1400393A0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x140058650 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140069EF0 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     FxRegistrySettingsInitialize @ 0x14006C094 (FxRegistrySettingsInitialize.c)
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140072E40 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14007B3EC (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x140080C80 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x140089724 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089C54 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1400A14BC (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1B10 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfInterruptCreate @ 0x1400A2120 (imp_WdfInterruptCreate.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1400A6594 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400AB66C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1400DC008 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC0A0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC97C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1400E49E8 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
        _FX_DRIVER_GLOBALS *this,
        unsigned int Minor,
        unsigned int a3)
{
  _WDF_BIND_INFO *WdfBindInfo; // rdx

  WdfBindInfo = this->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 )
    return 1;
  if ( WdfBindInfo->Version.Major == 1 )
    return WdfBindInfo->Version.Minor >= a3;
  return 0;
}
