/*
 * XREFs of ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180113540
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180113660 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18011328C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z @ 0x18011383C (-EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_.c)
 *     ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z @ 0x180113910 (-EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?GetCSMRegistryState@DevicePostureHelpers@@YA?AW4CSMRegistryState@1@XZ @ 0x1801139A0 (-GetCSMRegistryState@DevicePostureHelpers@@YA-AW4CSMRegistryState@1@XZ.c)
 *     ?IsIgnoringDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D10 (-IsIgnoringDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D7C (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 */

_BOOL8 __fastcall DevicePostureHelpers::CalculateDevicePostureMode(int a1)
{
  BOOL v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int CSMRegistryState; // r14d
  int SystemMetrics; // r15d
  __int64 v8; // rdx
  DevicePostureHelpers *v9; // rcx
  __int64 v10; // r9
  char v11; // si
  bool IsValidTabletDisplayConfig; // al
  char v14; // [rsp+78h] [rbp+10h] BYREF
  char v15; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  if ( GetSystemMetrics(4096) )
  {
    v15 = 0;
    v14 = 0;
    wil::wnf_query_nothrow<bool>((__int64)&WNF_TMCN_REMOTECLIENTTOUCHPREFERRED, &v15, &v14, v3);
    LOBYTE(v4) = v15;
    LOBYTE(v5) = v14;
    if ( v15 )
      v2 = v14 != 0;
    InputTraceLogging::Postures::EvaluatePostureRemote(v2, v4, v5);
  }
  else
  {
    CSMRegistryState = DevicePostureHelpers::GetCSMRegistryState();
    SystemMetrics = GetSystemMetrics(8196);
    if ( (GetSystemMetrics(94) & 1) != 0 || (v11 = 0, DevicePostureHelpers::IsIgnoringDisplayConfig(v9)) )
      v11 = 1;
    IsValidTabletDisplayConfig = 0;
    if ( !a1 && CSMRegistryState == 2 && !SystemMetrics )
    {
      if ( v11 )
      {
        IsValidTabletDisplayConfig = DevicePostureHelpers::IsValidTabletDisplayConfig(v9);
        if ( IsValidTabletDisplayConfig )
          v2 = 1;
      }
    }
    LOBYTE(v10) = SystemMetrics != 0;
    LOBYTE(v8) = a1 == 0;
    InputTraceLogging::Postures::EvaluatePosture(v2, v8, CSMRegistryState, v10, v11, IsValidTabletDisplayConfig);
  }
  return v2;
}
