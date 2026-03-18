/*
 * XREFs of ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1403CB590
 * Callers:
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026E064 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x14026E220 (-MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z.c)
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042F6B0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ @ 0x1402DF468 (-_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(
        DxgMonitor::MonitorGammaState *this,
        unsigned int a2,
        _OWORD *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __int128 v9; // xmm0

  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 106;
  }
  *a4 = 0LL;
  if ( !DxgMonitor::MonitorGammaState::_IsTargetMatrix_3x4Supported(this) )
    return 3221225659LL;
  if ( a2 < 0x40 )
    return 3221225507LL;
  v9 = *((_OWORD *)this + 1);
  *a4 = 64LL;
  result = 0LL;
  *a3 = v9;
  a3[1] = *((_OWORD *)this + 2);
  a3[2] = *((_OWORD *)this + 3);
  a3[3] = *((_OWORD *)this + 4);
  return result;
}
