/*
 * XREFs of ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x14020FA0C (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x14020FC48 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiEndLiveMigration @ 0x14020FDA4 (DxgkDdiEndLiveMigration.c)
 *     DxgkDdiGetDeviceLocation @ 0x14020FE50 (DxgkDdiGetDeviceLocation.c)
 *     DxgkDdiGetDirtyBitplane @ 0x14020FF18 (DxgkDdiGetDirtyBitplane.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x14020FFC4 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetMmioRangeCount @ 0x140210094 (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiGetMmioRanges @ 0x140210160 (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiGetResourceForBar @ 0x140210298 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x140210330 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x140210414 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiPrepareLiveMigration @ 0x140210518 (DxgkDdiPrepareLiveMigration.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x140210684 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x140210744 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x140210864 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiQueryProbedBars @ 0x1402108E0 (DxgkDdiQueryProbedBars.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1402109E8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x140210A9C (DxgkDdiQueryVirtualFunctionLuid.c)
 *     DxgkDdiResetVirtualFunction @ 0x140210BD0 (DxgkDdiResetVirtualFunction.c)
 *     DxgkDdiRestoreImmutableMigrationData @ 0x140210CA0 (DxgkDdiRestoreImmutableMigrationData.c)
 *     DxgkDdiRestoreMutableMigrationData @ 0x140210D70 (DxgkDdiRestoreMutableMigrationData.c)
 *     DxgkDdiSaveImmutableMigrationData @ 0x140210E40 (DxgkDdiSaveImmutableMigrationData.c)
 *     DxgkDdiSaveMutableMigrationData @ 0x140210F10 (DxgkDdiSaveMutableMigrationData.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x140210FE0 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x140211088 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x140211168 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DxgkDdiWriteVirtualizedInterrupt @ 0x1402113E0 (DxgkDdiWriteVirtualizedInterrupt.c)
 *     DxgkFillBufferWithDirty @ 0x1402114C8 (DxgkFillBufferWithDirty.c)
 *     DxgkLiveMigrationGetTransferSize @ 0x1402115C0 (DxgkLiveMigrationGetTransferSize.c)
 *     DxgkLiveMigrationWaitForFence @ 0x14021167C (DxgkLiveMigrationWaitForFence.c)
 *     DxgkSendDirtyToVRAM @ 0x140211740 (DxgkSendDirtyToVRAM.c)
 *     DxgkUpdateInterruptMappings @ 0x140211800 (DxgkUpdateInterruptMappings.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1402170D0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220650 (-VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1402206D0 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220750 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220790 (-VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1402207D0 (-VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x140220810 (-VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x140220850 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x140220890 (-VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1402208D0 (-VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220940 (-VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1402209B0 (-VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1402209F0 (-VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220A30 (-VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220A70 (-VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220AB0 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220B50 (-VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220BE0 (-VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220C40 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220C90 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220D30 (-VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     DpiFlexIovMitigationUpdate @ 0x140248DF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x140249020 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1402493B8 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x140249550 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x140249750 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x140249844 (DpiSriovNotification.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x14024E290 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x14024E4C0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x14024E650 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiIovGetBackingResource @ 0x14024EE50 (DpiIovGetBackingResource.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1403CB894 (DxgkDdiGetVendorAndDevice.c)
 * Callees:
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x14005BF40 (McTemplateK0pzzq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void VgpuTrace(char a1, char a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  int v5; // ebx
  int v9; // r8d
  wchar_t Dst[256]; // [rsp+50h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2B8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  v5 = (int)a3;
  memset(Dst, 0, sizeof(Dst));
  v9 = (int)Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( a1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0pzzq_EtwWriteTransfer(
        a1,
        (unsigned int)&EventGpuPartitioningStart,
        v9,
        v5,
        (__int64)a4,
        (__int64)Dst,
        0);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    McTemplateK0pzzq_EtwWriteTransfer(a1, (unsigned int)&EventGpuPartitioningEnd, v9, v5, (__int64)a4, (__int64)Dst, a2);
  }
}
