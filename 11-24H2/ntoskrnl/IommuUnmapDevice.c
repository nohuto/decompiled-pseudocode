/*
 * XREFs of IommuUnmapDevice @ 0x140562800
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     IommupUnmapDeviceInternal @ 0x140562DD8 (IommupUnmapDeviceInternal.c)
 */

__int64 __fastcall IommuUnmapDevice(_QWORD *a1, __int64 *a2)
{
  unsigned int v3; // ebx

  v3 = IommupUnmapDeviceInternal(*a1);
  HalpIommuDeleteDevice(a2);
  return v3;
}
