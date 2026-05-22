/*
 * XREFs of ?IsIgnoringDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D10
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180113540 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D7C (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DevicePostureHelpers::IsIgnoringDisplayConfig(DevicePostureHelpers *this)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 4;
  return !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"System\\CurrentControlSet\\Control\\PriorityControl",
            L"CSMIgnoreDisplayConfig",
            0x10u,
            0LL,
            &v2,
            &v3)
      && v2 != 0;
}
