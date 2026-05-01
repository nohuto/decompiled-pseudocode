/*
 * XREFs of ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x180112C44
 * Callers:
 *     DeviceConvertibilityHelpers::QueryDeviceConvertibility @ 0x180112BA4 (DeviceConvertibilityHelpers--QueryDeviceConvertibility.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool __fastcall TabletModeHelpers::HasConvertibleSlateModeChanged(
        TabletModeHelpers *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  return (int)SHRegGetBOOLWithREGSAM(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
                L"ConvertibleSlateModeChanged",
                a4,
                &v5) >= 0
      && v5 != 0;
}
