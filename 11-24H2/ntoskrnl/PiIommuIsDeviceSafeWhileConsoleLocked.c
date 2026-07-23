/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x140733F18
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14072F7AC (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14072FB94 (PipDmgEnforceEnumerationPolicy.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A78A28 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
