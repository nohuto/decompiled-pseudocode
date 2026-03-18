/*
 * XREFs of IoRequestDeviceEject @ 0x1405A1240
 * Callers:
 *     PipProcessRestartPhase2 @ 0x14072A3D8 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x140A6C1C8 (PipProcessStartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x1405A1260 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
