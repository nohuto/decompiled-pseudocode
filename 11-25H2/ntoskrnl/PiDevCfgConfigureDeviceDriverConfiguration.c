/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x14094E2EC
 * Callers:
 *     PiDevCfgConfigureDeviceDriver @ 0x14094D894 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PiDevCfgCopyObjectProperties @ 0x14094E3B0 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14095F8EC (PiDevCfgConfigureDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  result = PiDevCfgCopyObjectProperties(PiPnpRtlCtx, 0, 0, a3);
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  return result;
}
