/*
 * XREFs of GetNvmeAdapter @ 0x14006B1A0
 * Callers:
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 *     RaInsertDFxQueue @ 0x14006C220 (RaInsertDFxQueue.c)
 *     RaProcessDFxPendingIrp @ 0x14006C468 (RaProcessDFxPendingIrp.c)
 *     RaProcessDFxQueuedRequests @ 0x14006C9C0 (RaProcessDFxQueuedRequests.c)
 *     NvmeAdapterQueryCapabilitiesIrpCompletion @ 0x1400D58C0 (NvmeAdapterQueryCapabilitiesIrpCompletion.c)
 *     NvmeAdapterWaitForOutstandingIoComplete @ 0x1400DAD70 (NvmeAdapterWaitForOutstandingIoComplete.c)
 *     NvmeAdapterPowerDownDeviceCompletion @ 0x14012F4C0 (NvmeAdapterPowerDownDeviceCompletion.c)
 *     NvmeAdapterPowerUpDeviceCompletion @ 0x14012FD70 (NvmeAdapterPowerUpDeviceCompletion.c)
 *     NvmeAdapterQueryDevicePowerCompletionRoutine @ 0x140130510 (NvmeAdapterQueryDevicePowerCompletionRoutine.c)
 *     NvmeAdapterQuerySystemPowerCompletionRoutine @ 0x140130CC0 (NvmeAdapterQuerySystemPowerCompletionRoutine.c)
 *     NvmeAdapterSetDevicePowerCompletionRoutine @ 0x1401312A0 (NvmeAdapterSetDevicePowerCompletionRoutine.c)
 *     NvmeAdapterSetSystemPowerCompletion @ 0x140131BE0 (NvmeAdapterSetSystemPowerCompletion.c)
 *     NvmeAdapterStopOnPowerdown @ 0x140131E10 (NvmeAdapterStopOnPowerdown.c)
 *     NvmeRegisterPerfStates @ 0x1401369C4 (NvmeRegisterPerfStates.c)
 *     StorInitializeEventNotificationResources @ 0x1401B24C8 (StorInitializeEventNotificationResources.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GetNvmeAdapter(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_DWORD **)(a1 + 64);
    if ( *v2 == 1314275652 )
      return v2;
  }
  return result;
}
