/*
 * XREFs of IommuUnmapDevice @ 0x140564BD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     IommupUnmapDeviceInternal @ 0x1405651A8 (IommupUnmapDeviceInternal.c)
 */

__int64 __fastcall IommuUnmapDevice(_QWORD *a1, __int64 *a2)
{
  unsigned int v3; // ebx

  v3 = IommupUnmapDeviceInternal(*a1);
  HalpIommuDeleteDevice(a2);
  return v3;
}
