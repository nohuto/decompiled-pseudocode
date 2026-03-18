/*
 * XREFs of ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042D7C0
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x14026EF60 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E2E0 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_QueryScalarMultiplierCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x140272BFC (-_QueryScalarMultiplierCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x140272C80 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1402D943C (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnIoctl(
        DxgMonitor::MonitorGammaState *this,
        int a2,
        unsigned int a3,
        float *a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v10 = a2 - 2297856;
  if ( !v10 )
    return DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(this, a5, a6, a7);
  v11 = v10 - 4;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( v13 )
      {
        if ( v13 == 4 && (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
          return DxgMonitor::MonitorGammaState::_SetScalarMultiplier(this, a3, a4);
      }
      else if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
      {
        return DxgMonitor::MonitorGammaState::_QueryScalarMultiplierCaps(this, a5, a6, a7);
      }
      return 3221225659LL;
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  else
  {
    *a7 = 0LL;
    return DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(this, a3, a4);
  }
}
