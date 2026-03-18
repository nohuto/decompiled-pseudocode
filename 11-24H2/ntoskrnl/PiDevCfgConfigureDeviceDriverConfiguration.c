/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x14099AD60
 * Callers:
 *     PiDevCfgConfigureDeviceDriver @ 0x14099A308 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x140964604 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x14099AE24 (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax

  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  result = PiDevCfgCopyObjectProperties(PiPnpRtlCtx, 0, 0, (_DWORD)a3);
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  return result;
}
