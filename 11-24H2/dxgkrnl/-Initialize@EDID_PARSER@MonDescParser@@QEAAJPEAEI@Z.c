/*
 * XREFs of ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003C774
 * Callers:
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x14003B8D4 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x14003BB88 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14003BCC0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x14003BFC8 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x14003C384 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x14005A5C4 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x14005BDEC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x140063FAC (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1400645C0 (-EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1400962C8 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140096368 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x140096400 (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x140096468 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x140096614 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x140096754 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x14009680C (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1400968B0 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x14009694C (-EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x140096F48 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003C7D0 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_PARSER::Initialize(
        MonDescParser::EDID_PARSER *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // rcx

  if ( (a3 & 0x7F) != 0 )
    return 3223126017LL;
  v4 = 0;
  if ( !a3 )
    return 3223126017LL;
  v5 = a3 >> 7;
  if ( v5 )
  {
    do
    {
      if ( v4 >= 0xA )
        break;
      v6 = v4++ << 7;
      *((_QWORD *)this + (*((_QWORD *)this + 10))++) = &a2[v6];
    }
    while ( v4 < v5 );
  }
  return MonDescParser::EDID_PARSER::Validate(this, (bool)a2);
}
