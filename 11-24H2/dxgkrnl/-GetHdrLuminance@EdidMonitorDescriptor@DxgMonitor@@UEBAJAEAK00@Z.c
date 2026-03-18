/*
 * XREFs of ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x140280000
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x140063FAC (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKK@Z @ 0x140280438 (-_GetFinalMaxLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKK@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6B70 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetHdrLuminance(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  int v6; // ebx
  int HDRCaps; // edi
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int8 *v14; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  v13 = 0LL;
  HDRCaps = EDID_V1_GetHDRCaps(0, v14, (struct DISPLAY_HDR_CAPS *)&v13);
  if ( HDRCaps >= 0 )
  {
    FinalMaxLuminanceValueFromRaw = DxgMonitor::EdidMonitorDescriptor::_GetFinalMaxLuminanceValueFromRaw(BYTE5(v13));
    v10 = HIBYTE(v13);
    *a3 = FinalMaxLuminanceValueFromRaw;
    if ( v10 && FinalMaxLuminanceValueFromRaw )
      v6 = (int)((float)((float)(v10 * v10) * 0.000015379001)
               * (double)(FinalMaxLuminanceValueFromRaw / 0x2710)
               / 100.0
               * 10000.0);
    v11 = BYTE6(v13);
    *a2 = v6;
    *a4 = DxgMonitor::EdidMonitorDescriptor::_GetFinalMaxLuminanceValueFromRaw(v11);
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v14);
  return (unsigned int)HDRCaps;
}
