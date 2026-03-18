/*
 * XREFs of ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x14027FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x14009694C (-EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6B70 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  unsigned __int8 *v4; // [rsp+48h] [rbp+20h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  LODWORD(a2) = EDID_V1_GetDolbyVisionCapsUpdated(0, v4, a2);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v4);
  return (unsigned int)a2;
}
