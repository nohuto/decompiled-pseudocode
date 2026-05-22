/*
 * XREFs of ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z @ 0x18011239C
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1801117C0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z @ 0x180111824 (-EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z.c)
 *     ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z @ 0x180112070 (-GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z.c)
 *     ?HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ @ 0x1801120F8 (-HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ.c)
 */

__int64 DevicePostureHelpers::QueryDeviceConvertibility()
{
  unsigned int v0; // edi
  int v1; // esi
  unsigned int ValueW; // eax
  unsigned int *v3; // rdx
  DevicePostureHelpers *v4; // rcx
  char v5; // al
  unsigned int v6; // ebx
  char HasCSMStateChanged; // al
  DevicePostureHelpers *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int pvData; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF

  v0 = 0;
  pcbData = 4;
  v12 = 0;
  pvData = 0;
  v1 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleChassis",
             L"ConvertibleChassis",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW )
    wil::details::in1diag3::Return_Win32(
      retaddr,
      (void *)0xB6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
      (const char *)ValueW);
  else
    v1 = pvData;
  if ( (int)DevicePostureHelpers::GetPreconfiguredConvertibilityKey((DevicePostureHelpers *)&v12, v3) < 0 )
  {
    HasCSMStateChanged = DevicePostureHelpers::HasCSMStateChanged(v4);
    InputTraceLogging::Postures::EvaluateConvertibility(v1, 0, 0, HasCSMStateChanged);
    if ( !v1 && !DevicePostureHelpers::HasCSMStateChanged(v9) )
      return 1;
    return v0;
  }
  else
  {
    v5 = DevicePostureHelpers::HasCSMStateChanged(v4);
    v6 = v12;
    InputTraceLogging::Postures::EvaluateConvertibility(v1, 1, v12, v5);
    return v6 == 0 ? 2 : 0;
  }
}
