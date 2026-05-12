/*
 * XREFs of GetRaidAdapter @ 0x140034AAC
 * Callers:
 *     RaidAdapterPowerDownDeviceCompletion @ 0x140033D70 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140033EB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1400342E0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x140034720 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1400348E0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterStopOnPowerdown @ 0x140034A30 (RaidAdapterStopOnPowerdown.c)
 *     RaidRegisterPerfStates @ 0x1400415CC (RaidRegisterPerfStates.c)
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 *     RaInsertDFxQueue @ 0x14006C220 (RaInsertDFxQueue.c)
 *     RaProcessDFxPendingIrp @ 0x14006C468 (RaProcessDFxPendingIrp.c)
 *     RaProcessDFxQueuedRequests @ 0x14006C9C0 (RaProcessDFxQueuedRequests.c)
 *     StorInitializeEventNotificationResources @ 0x1401B24C8 (StorInitializeEventNotificationResources.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GetRaidAdapter(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_DWORD **)(a1 + 64);
    if ( *v2 == 1094997074 )
      return v2;
  }
  return result;
}
