/*
 * XREFs of ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1402801A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x14005A5C4 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x14009680C (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1400968B0 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6B70 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetUsageParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  int DisplayPrimaryUse; // eax
  unsigned int v8; // edi
  int IsMsftOnlyPrimaryUse; // eax
  int v10; // eax
  unsigned __int8 *v12; // [rsp+28h] [rbp-10h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  DisplayPrimaryUse = EDID_V1_GetDisplayPrimaryUse(0, v12, a2);
  v8 = DisplayPrimaryUse;
  if ( DisplayPrimaryUse >= 0 )
  {
    IsMsftOnlyPrimaryUse = EDID_V1_GetDisplayIsMsftOnlyPrimaryUse(0, v12, a3);
    v8 = IsMsftOnlyPrimaryUse;
    if ( IsMsftOnlyPrimaryUse >= 0 )
    {
      v10 = EDID_V1_GetDisplayIsForDesktopUsage(0, v12, a4);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v8 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v10);
        WdLogGlobalForLineNumber = 640;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, IsMsftOnlyPrimaryUse);
      WdLogGlobalForLineNumber = 639;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, DisplayPrimaryUse);
    WdLogGlobalForLineNumber = 638;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v12);
  return v8;
}
