/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x140062028 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14007D03C (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14007D884 (DpiLiveMigrationWaitForFence.c)
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x140084918 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x140087EB8 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x14008B010 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x14008B0B0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x14008B160 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x14008B200 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x14008B290 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x14008B330 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x14008B3E0 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x14008B4D0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x14008B580 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x14008B630 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x14008B710 (-DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x14008B7C0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x14008B850 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1402375C0 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x140248DF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1402493B8 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x140249550 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x140249844 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x14024EE50 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x14024EFF0 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x14024F0F0 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x14024F1F0 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DxgkReleaseAdapterStopResetSync @ 0x140189DE8 (DxgkReleaseAdapterStopResetSync.c)
 *     DxgkReleaseAdapterReference @ 0x1401A08CC (DxgkReleaseAdapterReference.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
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
