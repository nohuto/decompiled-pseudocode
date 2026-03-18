/*
 * XREFs of ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14027FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x14003B8D4 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14003BCC0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6B70 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetColorimetryData(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  struct DISPLAY_COLORIMETRY_DATA *v5; // r8
  unsigned __int8 *v6; // rbx
  int ColorimetryData; // edi
  unsigned __int8 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  *(_QWORD *)a2 = 0LL;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  v5 = a2;
  v6 = v9;
  ColorimetryData = EDID_V1_GetColorimetryData(0, v9, v5);
  if ( ColorimetryData >= 0 )
    goto LABEL_6;
  v10 = (unsigned int)Feature_AllowEDIDColorimetryWithoutCEAExtension__private_featureState;
  if ( (Feature_AllowEDIDColorimetryWithoutCEAExtension__private_featureState & 0x10) == 0 )
  {
    LODWORD(v10) = Feature_AllowEDIDColorimetryWithoutCEAExtension__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&wil_details_featureDescriptors_a, v10, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v10, 3, (__int64)&wil_details_featureDescriptors_a);
  }
  if ( ColorimetryData == -1073741275 )
  {
    v6 = v9;
LABEL_6:
    ColorimetryData = EDID_V1_GetColorDepths(0, v6, a3);
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v9);
  return (unsigned int)ColorimetryData;
}
