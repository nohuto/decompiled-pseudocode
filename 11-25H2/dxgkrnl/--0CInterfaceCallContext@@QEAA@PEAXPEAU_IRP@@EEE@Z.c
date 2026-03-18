/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14006176C (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14007C90C (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14007D154 (DpiLiveMigrationWaitForFence.c)
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
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140054E8C (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        void *a2,
        struct _IRP *a3,
        __int64 a4,
        char a5,
        char a6)
{
  bool v7; // zf
  char v11; // [rsp+38h] [rbp-10h]

  *((_DWORD *)this + 8) = -1073741823;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v7 = (_BYTE)a4 == 0;
  *((_QWORD *)this + 2) = 0LL;
  LOBYTE(a4) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  v11 = 0;
  CInterfaceCallContext::CommonConstructor(this, a2, a3, a4, !v7, a5, a6, v11);
  return this;
}
