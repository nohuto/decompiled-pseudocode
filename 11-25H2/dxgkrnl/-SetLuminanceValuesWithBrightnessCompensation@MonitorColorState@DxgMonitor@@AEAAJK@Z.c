/*
 * XREFs of ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140183F40
 * Callers:
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140183EDC (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140274DB4 (-OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1402752F8 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140275630 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x140275CE8 (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x140275D40 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E238 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TriggerExternalMonitorSdrWhiteLevelChangedWnf@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x1402754AC (-TriggerExternalMonitorSdrWhiteLevelChangedWnf@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403DACB0 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(
        DxgMonitor::MonitorColorState *this,
        unsigned int a2)
{
  int v5; // eax
  DxgMonitor::MonitorColorState *v6; // rcx
  int v7; // eax
  DxgMonitor::MonitorColorState *v8; // rcx
  int v9; // ecx
  float v10; // xmm1_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm1_4

  if ( !(80 * *((_DWORD *)this + 119)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2146;
  }
  if ( !*((_DWORD *)this + 118) )
  {
    *(_OWORD *)((char *)this + 376) = *(_OWORD *)((char *)this + 360);
    return 0LL;
  }
  if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() && !*((_DWORD *)this + 130) )
  {
    v5 = *((_DWORD *)this + 118);
    v6 = (DxgMonitor::MonitorColorState *)*((unsigned int *)this + 119);
    if ( (unsigned int)v5 < 0x13880 && *((_BYTE *)this + 524) )
      v7 = 1000;
    else
      v7 = (int)(float)((float)((float)((float)v5 / 1000.0)
                              / (float)((float)((float)((float)((float)v5 / 1000.0) - 80.0)
                                              / (float)((float)*((int *)this + 132) / 1000.0))
                                      + 80.0))
                      * 1000.0);
    *((_DWORD *)this + 119) = v7;
    if ( v7 != (_DWORD)v6 )
    {
      DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v6);
      if ( a2 != -1 )
        DxgMonitor::MonitorColorState::TriggerExternalMonitorSdrWhiteLevelChangedWnf(v8, a2);
    }
  }
  v9 = 80 * *((_DWORD *)this + 119);
  if ( v9 )
  {
    v10 = (float)*((int *)this + 118) / (float)v9;
    v11 = (float)((float)*((int *)this + 91) / 10000.0) / v10;
    v12 = (float)((float)*((int *)this + 92) / 10000.0) / v10;
    v13 = (float)((float)*((int *)this + 93) / 10000.0) / v10;
    if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !*((_DWORD *)this + 130) )
      {
        v14 = (float)((float)*((int *)this + 133) / 1000.0) * (float)((float)*((int *)this + 92) / 10000.0);
        v13 = fminf(v14, v13);
        v12 = fminf(v14, v12);
      }
    }
    *((_DWORD *)this + 96) = (int)(float)(v12 * 10000.0);
    *((_DWORD *)this + 97) = (int)(float)(v13 * 10000.0);
    *((_DWORD *)this + 95) = (int)(float)(v11 * 10000.0);
    return 0LL;
  }
  return 3221225473LL;
}
