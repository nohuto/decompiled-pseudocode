/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x14003CCF8
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x140078F88 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
