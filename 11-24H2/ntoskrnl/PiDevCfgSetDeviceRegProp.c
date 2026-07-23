/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x1409CDCF0
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x140727E10 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072A508 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1409C94B4 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A7EC90 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x1409CDD3C (PiPnpRtlSetDeviceRegProperty.c)
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
