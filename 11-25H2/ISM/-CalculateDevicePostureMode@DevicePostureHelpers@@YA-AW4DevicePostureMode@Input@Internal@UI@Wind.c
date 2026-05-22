/*
 * XREFs of ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180111630
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1801117C0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18011137C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z @ 0x18011199C (-EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_.c)
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAX_NKK0W4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x180111A70 (-EvaluatePosture@Postures@InputTraceLogging@@SAX_NKK0W4DevicePostureMode@Input@Internal@UI@Windo.c)
 *     ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z @ 0x180111B30 (-EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?GetCSMRegistryState@DevicePostureHelpers@@YA?AW4CSMRegistryState@1@XZ @ 0x180111BC0 (-GetCSMRegistryState@DevicePostureHelpers@@YA-AW4CSMRegistryState@1@XZ.c)
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180112164 (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSession@@@details@wil@@QEAA_NXZ @ 0x180112608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSession@@@de.c)
 */

__int64 __fastcall DevicePostureHelpers::CalculateDevicePostureMode(int a1)
{
  DevicePostureHelpers *v2; // rcx
  __int64 v3; // r9
  BOOL v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int CSMRegistryState; // r14d
  int v9; // r15d
  __int64 v10; // rdx
  DevicePostureHelpers *v11; // rcx
  int v12; // ebp
  __int64 v13; // r9
  bool v14; // al
  unsigned int v16; // edi
  unsigned int v17; // esi
  unsigned int SystemMetrics; // ebp
  bool IsValidTabletDisplayConfig; // al
  char v20; // [rsp+78h] [rbp+10h] BYREF
  char v21; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionModeRemoteSession>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InteractionModeRemoteSession>::GetImpl'::`2'::impl) )
  {
    if ( a1 )
    {
      v17 = -1;
      LOBYTE(v2) = 0;
      SystemMetrics = -1;
      IsValidTabletDisplayConfig = 0;
    }
    else
    {
      v16 = 1;
      v17 = -1;
      SystemMetrics = GetSystemMetrics(8195);
      LOBYTE(v2) = 1;
      IsValidTabletDisplayConfig = 0;
      if ( !SystemMetrics )
      {
        v17 = GetSystemMetrics(8196);
        LOBYTE(v2) = 1;
        IsValidTabletDisplayConfig = 0;
        if ( !v17 )
        {
          IsValidTabletDisplayConfig = DevicePostureHelpers::IsValidTabletDisplayConfig(v2);
          LOBYTE(v2) = 1;
          if ( IsValidTabletDisplayConfig )
            goto LABEL_20;
        }
      }
    }
    v16 = 0;
LABEL_20:
    LOBYTE(v3) = IsValidTabletDisplayConfig;
    InputTraceLogging::Postures::EvaluatePosture(v2, SystemMetrics, v17, v3, v16);
    return v16;
  }
  if ( GetSystemMetrics(4096) )
  {
    v21 = 0;
    v20 = 0;
    wil::wnf_query_nothrow<bool>((__int64)&WNF_TMCN_REMOTECLIENTTOUCHPREFERRED, &v21, &v20, v5);
    LOBYTE(v6) = v21;
    LOBYTE(v7) = v20;
    if ( v21 )
      v4 = v20 != 0;
    InputTraceLogging::Postures::EvaluatePostureRemote(v4, v6, v7);
  }
  else
  {
    CSMRegistryState = DevicePostureHelpers::GetCSMRegistryState();
    v9 = GetSystemMetrics(8196);
    v12 = GetSystemMetrics(94) & 1;
    v14 = 0;
    if ( !a1 && CSMRegistryState == 2 && !v9 && (_BYTE)v12 )
    {
      v14 = DevicePostureHelpers::IsValidTabletDisplayConfig(v11);
      v4 = v14;
    }
    LOBYTE(v13) = v9 != 0;
    LOBYTE(v10) = a1 == 0;
    InputTraceLogging::Postures::EvaluatePosture(v4, v10, CSMRegistryState, v13, (_BYTE)v12, v14);
  }
  return v4;
}
