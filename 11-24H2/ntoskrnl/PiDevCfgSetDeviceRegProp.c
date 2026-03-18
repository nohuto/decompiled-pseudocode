/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14099B580
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x14072A1C0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072C4F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072C8FC (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140996D60 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14099B5CC (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return PiPnpRtlSetDeviceRegProperty(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
