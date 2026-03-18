/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x140A740D0
 * Callers:
 *     PiDevCfgRequestDriverConfigurations @ 0x14071F4B8 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072097C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14094E3B0 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgInit @ 0x140C13F04 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _DWORD *a2,
        const WCHAR *a3,
        int a4,
        void *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        const wchar_t *a9,
        unsigned int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
