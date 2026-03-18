/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x140407D40
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(ADAPTER_DISPLAY *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v13; // [rsp+38h] [rbp-20h]

  v5 = a2;
  Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline();
  if ( (a3 && a4
     || (WdLogSingleEntry0(1LL),
         WdLogGlobalForLineNumber = 6655,
         DxgkLogInternalTriageEvent(
           0LL,
           262146LL,
           0xFFFFFFFFLL,
           L"pCurModeSupportsStereo && pStereoExists",
           6655LL,
           0LL,
           0LL,
           0LL,
           0LL),
         a3)
     && a4)
    && (unsigned int)v5 < *((_DWORD *)this + 24) )
  {
    v8 = *((_QWORD *)this + 16);
    v9 = -1073741275;
    v10 = 4024 * v5;
    v11 = *(_DWORD *)(4024 * v5 + v8 + 1116);
    if ( v11 != -1 && *(_DWORD *)(v10 + v8 + 1120) != -1 )
    {
      v9 = 0;
      *a3 = v11 == 1;
      *a4 = *(_DWORD *)(*((_QWORD *)this + 16) + v10 + 1120) == 1;
    }
    return v9;
  }
  else
  {
    WdLogSingleEntry5(2LL, a3, a4, v5, *((unsigned int *)this + 24), -1073741811LL);
    v13 = *((unsigned int *)this + 24);
    WdLogGlobalForLineNumber = 6661;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified invalid parameters or invalid VidPN source ID. pCurModeSupportsStereo=0x%I64x, pStereoExists=0x%I"
       "64x, VidPnSourceId=0x%I64x (value should be less than 0x%I64x). Returning 0x%I64x",
      (__int64)a3,
      (__int64)a4,
      v5,
      v13,
      -1073741811LL);
    return 3221225485LL;
  }
}
