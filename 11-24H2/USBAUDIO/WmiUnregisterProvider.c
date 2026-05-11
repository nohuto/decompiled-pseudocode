/*
 * XREFs of WmiUnregisterProvider @ 0x14002E6A4
 * Callers:
 *     DeviceRemove @ 0x14000BE50 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiUnregisterProvider(__int64 a1)
{
  return IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 24), 2u);
}
