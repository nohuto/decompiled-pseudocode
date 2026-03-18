/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14006176C (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14007C90C (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14007D154 (DpiLiveMigrationWaitForFence.c)
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x140084288 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x1400877FC (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x14008A100 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x14008A1A0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x14008A250 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x14008A2F0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x14008A380 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x14008A420 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x14008A4D0 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x14008A5C0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x14008A670 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x14008A720 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x14008A800 (-DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x14008A8B0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x14008A940 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x140230D60 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x140241FF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1402425B8 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x140242750 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x140242A44 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x140248020 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1402481C0 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1402482C0 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1402483C0 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DxgkReleaseAdapterStopResetSync @ 0x14018722C (DxgkReleaseAdapterStopResetSync.c)
 *     DxgkReleaseAdapterReference @ 0x14019E3A8 (DxgkReleaseAdapterReference.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  PVOID *v1; // rdi
  __int64 v3; // rdx

  v1 = (PVOID *)((char *)this + 8);
  if ( *((_BYTE *)this + 37) )
  {
    *((_BYTE *)*v1 + 5596) = 0;
    ExReleasePushLockExclusiveEx((char *)*v1 + 5552, 0LL);
    LOBYTE(v3) = *((_BYTE *)this + 38);
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, v3);
  }
  if ( *((_BYTE *)this + 39) )
  {
    *((_BYTE *)*v1 + 5596) = 0;
    DxgkReleaseAdapterStopResetSync(*((_QWORD *)*v1 + 504), 0LL);
  }
  if ( *((_BYTE *)this + 40) )
  {
    if ( *((_BYTE *)*v1 + 484) )
      DpiEnableD3Requests(*((_QWORD *)*v1 + 3));
    ExReleaseResourceLite(*((PERESOURCE *)*v1 + 21));
    KeLeaveCriticalRegion();
    v1 = (PVOID *)((char *)this + 8);
  }
  if ( *((_BYTE *)this + 41) )
    DxgkReleaseAdapterReference(*((_QWORD *)this + 2));
  if ( *((_BYTE *)this + 42) )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)*v1 + 3440));
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 36) )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*v1 + 2, *v1, 0x20u);
}
