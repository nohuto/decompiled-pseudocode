/*
 * XREFs of ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140278AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline @ 0x140090538 (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140094398 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1400946A4 (-EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403DCC80 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  unsigned int DolbyVisionCapsUpdated; // eax
  unsigned int v4; // ebx
  unsigned __int8 *v6; // [rsp+48h] [rbp+20h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  if ( (unsigned int)Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline() )
    DolbyVisionCapsUpdated = EDID_V1_GetDolbyVisionCapsUpdated(0, v6, a2);
  else
    DolbyVisionCapsUpdated = EDID_V1_GetDolbyVisionCaps(0, v6, a2);
  v4 = DolbyVisionCapsUpdated;
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v6);
  return v4;
}
