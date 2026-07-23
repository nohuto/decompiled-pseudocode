/*
 * XREFs of PnpActivatePdcForDeviceEvent @ 0x1409EB79C
 * Callers:
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PiPdcActivate @ 0x1409EB900 (PiPdcActivate.c)
 */

__int64 __fastcall PnpActivatePdcForDeviceEvent(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  const wchar_t *v6; // rcx
  __int64 result; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned __int8 v13; // [rsp+38h] [rbp+10h]

  if ( (Feature_PdcClientPnpEventQueue__private_featureState & 0x10) == 0 )
  {
    v13 = Feature_PdcClientPnpEventQueue__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PdcClientPnpEventQueue__private_descriptor,
      Feature_PdcClientPnpEventQueue__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v13,
      3,
      (__int64)&Feature_PdcClientPnpEventQueue__private_descriptor);
  }
  v2 = *(_DWORD *)(a1 + 136);
  if ( v2 > 6 )
  {
    v8 = v2 - 7;
    if ( !v8 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_BlockedDriverEvent";
      goto LABEL_10;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_InvalidIDEvent";
      goto LABEL_10;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_DevicePropertyChangeEvent";
      goto LABEL_10;
    }
    v12 = v10 - 1;
    if ( !v12 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_DeviceInstanceRemovalEvent";
      goto LABEL_10;
    }
    if ( v12 == 1 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_DeviceInstanceStartedEvent";
      goto LABEL_10;
    }
LABEL_29:
    v6 = L"PLUGPLAY_EVENT_CATEGORY_UnknownDeviceEvent";
    goto LABEL_10;
  }
  if ( v2 == 6 )
  {
    v6 = L"PLUGPLAY_EVENT_CATEGORY_VetoEvent";
    goto LABEL_10;
  }
  if ( !v2 )
  {
    v6 = L"PLUGPLAY_EVENT_CATEGORY_HardwareProfileChangeEvent";
    goto LABEL_10;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = L"PLUGPLAY_EVENT_CATEGORY_TargetDeviceChangeEvent";
    goto LABEL_10;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = L"PLUGPLAY_EVENT_CATEGORY_DeviceClassChangeEvent";
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v11 = v5 - 1;
    if ( !v11 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_DeviceInstallEvent";
      goto LABEL_10;
    }
    if ( v11 == 1 )
    {
      v6 = L"PLUGPLAY_EVENT_CATEGORY_DeviceArrivalEvent";
      goto LABEL_10;
    }
    goto LABEL_29;
  }
  v6 = L"PLUGPLAY_EVENT_CATEGORY_CustomDeviceEvent";
LABEL_10:
  result = PiPdcActivate(v6, 0LL);
  *(_QWORD *)(a1 + 112) = result;
  return result;
}
