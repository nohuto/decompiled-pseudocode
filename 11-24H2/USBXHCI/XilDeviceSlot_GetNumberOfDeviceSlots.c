/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x14003CBE4
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x140078C9C (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
