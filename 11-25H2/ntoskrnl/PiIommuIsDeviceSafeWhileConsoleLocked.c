/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x140729D58
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140725580 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140725974 (PipDmgEnforceEnumerationPolicy.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
