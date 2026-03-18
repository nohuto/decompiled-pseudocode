/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x14001B414
 * Callers:
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x14001A800 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x14001AC30 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDispatchIrp @ 0x14001ADE0 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpForwardRequest @ 0x14001C090 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1400304F0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x140047720 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x140049710 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x14004AB10 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1400609D0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIThermalActivateConstraint @ 0x140068654 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1400B1200 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 728), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 752), 0, 0);
  return result;
}
