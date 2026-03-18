/*
 * XREFs of ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30
 * Callers:
 *     ?ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ @ 0x14027AD20 (-ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x14027B354 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x14027C1B0 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?SetHdrFlavor@MonitorColorState@DxgMonitor@@QEAAJW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14027C2C0 (-SetHdrFlavor@MonitorColorState@DxgMonitor@@QEAAJW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x14027CEA0 (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x14027D0C8 (-_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006DF90 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140186290 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14018770C (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ??8CachedColorData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x14027AC44 (--8CachedColorData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z.c)
 *     ??8CachedLuminanceData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x14027AC80 (--8CachedLuminanceData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z.c)
 *     ??8CachedWireFormatData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x14027ACAC (--8CachedWireFormatData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z.c)
 *     ?EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA?AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ @ 0x14027B0DC (-EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA-AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ.c)
 *     ?GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA?AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x14027B0F8 (-GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA-AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR.c)
 *     ?SetMetadataOverrideForFlavor@MonitorColorState@DxgMonitor@@AEAAXW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14027C3B4 (-SetMetadataOverrideForFlavor@MonitorColorState@DxgMonitor@@AEAAXW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x14027D1E8 (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x14027D240 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x14035FB3C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403D3DC0 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1404069E4 (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

char __fastcall DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(DxgMonitor::MonitorColorState *this)
{
  char *v1; // rdi
  __int128 v2; // xmm0
  char *v3; // r15
  __int128 v4; // xmm1
  _OWORD *v5; // r14
  int v6; // eax
  int v8; // esi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  DxgMonitor::MonitorColorState *v27; // rcx
  DxgMonitor::MonitorColorState *v28; // rcx
  unsigned int v29; // r9d
  DxgMonitor::MonitorColorState *v31; // rcx
  _BYTE v32[20]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v33; // [rsp+48h] [rbp-31h] BYREF
  _OWORD v34[2]; // [rsp+58h] [rbp-21h] BYREF
  int v35; // [rsp+78h] [rbp-1h]
  _OWORD v36[2]; // [rsp+80h] [rbp+7h] BYREF
  int v37; // [rsp+A0h] [rbp+27h]

  v1 = (char *)this + 236;
  v2 = *(_OWORD *)((char *)this + 236);
  v3 = (char *)this + 88;
  v4 = *(_OWORD *)((char *)this + 252);
  v5 = (_OWORD *)((char *)this + 360);
  v35 = *((_DWORD *)this + 67);
  v6 = *((_DWORD *)this + 30);
  v34[0] = v2;
  v37 = v6;
  v8 = 0;
  v9 = *(_OWORD *)((char *)this + 360);
  v34[1] = v4;
  v10 = *(_OWORD *)((char *)this + 104);
  v33 = v9;
  v11 = *(_OWORD *)((char *)this + 88);
  v36[1] = v10;
  v36[0] = v11;
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = *((_DWORD *)this + 116);
    if ( v8 == 0x80000000 )
      v8 = DxgMonitor::MonitorColorState::EvaluateDefaultHdrFlavor((__int64)this);
    DxgMonitor::MonitorColorState::SetMetadataOverrideForFlavor((__int64)this, v8);
  }
  if ( *((_BYTE *)this + 52) )
  {
    v12 = *(_OWORD *)((char *)this + 52);
    v13 = *((_DWORD *)this + 21);
    v14 = *(_OWORD *)((char *)this + 68);
    *((_DWORD *)this + 31) = 4;
  }
  else if ( *((_BYTE *)this + 16) )
  {
    v12 = *((_OWORD *)this + 1);
    v13 = *((_DWORD *)this + 12);
    v14 = *((_OWORD *)this + 2);
    *((_DWORD *)this + 31) = 3;
  }
  else
  {
    memset(v32, 0, sizeof(v32));
    v12 = *(_OWORD *)v32;
    v14 = 0u;
    v13 = 0;
    *((_DWORD *)this + 31) = 0;
  }
  *(_OWORD *)v3 = v12;
  *((_OWORD *)v3 + 1) = v14;
  *((_DWORD *)v3 + 8) = v13;
  if ( *((_BYTE *)this + 200) )
  {
    v15 = *(_OWORD *)((char *)this + 200);
    v16 = *((_DWORD *)this + 58);
    v17 = *(_OWORD *)((char *)this + 216);
    *((_DWORD *)this + 68) = 5;
    *(_OWORD *)v1 = v15;
    *((_OWORD *)v1 + 1) = v17;
    *((_DWORD *)v1 + 8) = v16;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 164) )
  {
    v18 = *(_OWORD *)((char *)this + 164);
    v19 = *((_DWORD *)this + 49);
    v20 = *(_OWORD *)((char *)this + 180);
    *((_DWORD *)this + 68) = 4;
    *(_OWORD *)v1 = v18;
    *((_OWORD *)v1 + 1) = v20;
    *((_DWORD *)v1 + 8) = v19;
    goto LABEL_22;
  }
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
    && *((_BYTE *)this + 276)
    && v8 == 2 )
  {
    v21 = *(_OWORD *)((char *)this + 276);
    v22 = *((_DWORD *)this + 77);
    v23 = *(_OWORD *)((char *)this + 292);
LABEL_20:
    *(_OWORD *)v1 = v21;
    *((_DWORD *)this + 68) = 3;
    *((_OWORD *)v1 + 1) = v23;
    *((_DWORD *)v1 + 8) = v22;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 128) )
  {
    v21 = *((_OWORD *)this + 8);
    v22 = *((_DWORD *)this + 40);
    v23 = *((_OWORD *)this + 9);
    goto LABEL_20;
  }
  DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
LABEL_22:
  if ( *((_BYTE *)this + 344) )
  {
    v24 = *(_OWORD *)((char *)this + 344);
    *((_DWORD *)this + 98) = 6;
    *v5 = v24;
    goto LABEL_36;
  }
  if ( *((_BYTE *)this + 312) )
  {
    v25 = *(_OWORD *)((char *)this + 312);
    *((_DWORD *)this + 98) = 5;
    *v5 = v25;
    goto LABEL_36;
  }
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
    && *((_BYTE *)this + 276)
    && v8 == 2 )
  {
    v26 = *(_OWORD *)((char *)this + 396);
LABEL_32:
    *v5 = v26;
    *((_DWORD *)this + 98) = 4;
    goto LABEL_36;
  }
  if ( *((_BYTE *)this + 328) )
  {
    v26 = *(_OWORD *)((char *)this + 328);
    goto LABEL_32;
  }
  if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(v27);
  else
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(v27);
LABEL_36:
  DxgMonitor::MonitorColorState::GetColorPrimariesType((int *)this + 60);
  if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    if ( v29 <= 1 )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v28);
    if ( !*((_DWORD *)this + 92) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(this);
  }
  else
  {
    if ( !v29 )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v28);
    if ( !*((_DWORD *)this + 92) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(this);
  }
  if ( !DxgMonitor::MonitorColorState::CachedLuminanceData::operator==((__int64)&v33, (__int64)v5) )
    DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, 0xFFFFFFFF);
  if ( DxgMonitor::MonitorColorState::CachedColorData::operator==(v34, v1)
    && DxgMonitor::MonitorColorState::CachedLuminanceData::operator==((__int64)&v33, (__int64)v5)
    && DxgMonitor::MonitorColorState::CachedWireFormatData::operator==(v36, v3) )
  {
    return 0;
  }
  DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v31);
  return 1;
}
