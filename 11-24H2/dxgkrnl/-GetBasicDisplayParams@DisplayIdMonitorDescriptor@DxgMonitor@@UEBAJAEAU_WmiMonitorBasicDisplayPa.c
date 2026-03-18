/*
 * XREFs of ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140280A70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x140063CF4 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline @ 0x140092318 (Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140097B80 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x140097C48 (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  const struct DisplayIDObj *v2; // rsi
  int PhysicalSize; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  int NativeLuminance; // eax
  int ColorimetryData; // eax
  unsigned int v9; // r8d
  unsigned int v10; // edx
  BOOLEAN v11; // al
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v14; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+38h] BYREF

  v20 = 0;
  v2 = (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24);
  v19 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v18 = 0;
  v16 = 0LL;
  v17 = 0;
  PhysicalSize = DisplayID_GetPhysicalSize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), &v20, &v19);
  v5 = PhysicalSize;
  if ( PhysicalSize < 0 )
  {
    WdLogSingleEntry1(2LL, PhysicalSize);
    WdLogGlobalForLineNumber = 439;
    return v5;
  }
  NativeLuminance = DisplayID_GetNativeLuminance(v2, &v15, &v14, &v13, &v12);
  v5 = NativeLuminance;
  if ( NativeLuminance < 0 )
  {
    WdLogSingleEntry1(2LL, NativeLuminance);
    WdLogGlobalForLineNumber = 442;
    return v5;
  }
  ColorimetryData = DisplayID_GetColorimetryData(
                      v2,
                      (struct DISPLAYID_COLORIMETRY_DATA *)&v18,
                      (struct DISPLAY_COLOR_DEPTHS *)&v16);
  v5 = ColorimetryData;
  if ( ColorimetryData < 0 )
  {
    WdLogSingleEntry1(2LL, ColorimetryData);
    WdLogGlobalForLineNumber = 444;
    return v5;
  }
  a2->VideoInputType = 1;
  if ( (unsigned int)Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = (v19 + 5) / 0xA;
    v10 = (v20 + 5) / 0xA;
  }
  else
  {
    v9 = v19 / 0x64;
    v10 = v20 / 0x64;
  }
  a2->MaxHorizontalImageSize = v10;
  a2->MaxVerticalImageSize = v9;
  a2->DisplayTransferCharacteristic = v12 - 100;
  v11 = v18 & 1;
  *(_WORD *)&a2->SupportedDisplayFeatures.HasPreferredTimingMode = 1;
  a2->SupportedDisplayFeatures.sRGBSupported = v11;
  result = 0LL;
  *(_DWORD *)&a2->SupportedDisplayFeatures.StandbySupported = 16843009;
  return result;
}
