/*
 * XREFs of IoRequestDeviceEject @ 0x1405A49B0
 * Callers:
 *     PipProcessRestartPhase2 @ 0x140736668 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x1408B23C8 (PipProcessStartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x1405A49D0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
