/*
 * XREFs of ?HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ @ 0x1801120F8
 * Callers:
 *     ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z @ 0x18011239C (-QueryDeviceConvertibility@DevicePostureHelpers@@YA-AW4DeviceConvertibility@1@W4QueryOptions@1@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DevicePostureHelpers::HasCSMStateChanged(DevicePostureHelpers *this)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 4;
  return !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
            L"ConvertibleSlateModeChanged",
            0x10u,
            0LL,
            &v2,
            &v3)
      && v2 != 0;
}
