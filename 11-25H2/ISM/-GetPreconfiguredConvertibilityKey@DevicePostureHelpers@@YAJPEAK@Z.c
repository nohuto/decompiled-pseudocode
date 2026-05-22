/*
 * XREFs of ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z @ 0x180112070
 * Callers:
 *     ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z @ 0x18011239C (-QueryDeviceConvertibility@DevicePostureHelpers@@YA-AW4DeviceConvertibility@1@W4QueryOptions@1@@.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall DevicePostureHelpers::GetPreconfiguredConvertibilityKey(
        DevicePostureHelpers *this,
        unsigned int *a2)
{
  unsigned int ValueW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+58h] [rbp+10h] BYREF
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"System\\CurrentControlSet\\Control\\PriorityControl",
             L"ConvertibilityEnabled",
             0x10u,
             0LL,
             &v6,
             &v7);
  if ( ValueW )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x70,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
             (const char *)ValueW);
  *(_DWORD *)this = v6;
  return 0LL;
}
