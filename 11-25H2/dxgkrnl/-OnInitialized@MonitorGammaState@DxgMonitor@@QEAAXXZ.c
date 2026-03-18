/*
 * XREFs of ?OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ @ 0x140272B68
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E2E0 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ @ 0x1402D878C (-_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorGammaState::OnInitialized(DxgMonitor::MonitorGammaState *this)
{
  if ( DxgMonitor::MonitorGammaState::_IsTargetMatrix_3x4Supported(this) )
  {
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 4) = 1;
    *((_DWORD *)this + 15) = 4096;
    *(_OWORD *)((char *)this + 24) = 0LL;
    *((_DWORD *)this + 16) = 1;
    *((_DWORD *)this + 17) = 1480;
    *((_DWORD *)this + 18) = -8388609;
    *((_DWORD *)this + 19) = 2139095039;
    *((_DWORD *)this + 10) = *((_DWORD *)this + 10) & 0xFFF00000 | 0xC03;
    *((_DWORD *)this + 11) = 1;
    *((_DWORD *)this + 12) = 1480;
    *((_DWORD *)this + 13) = -8388609;
    *((_DWORD *)this + 14) = 2139095039;
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_DWORD *)this + 21) = 0;
      *((_BYTE *)this + 80) = 1;
      *((_DWORD *)this + 22) = 1120403456;
    }
  }
}
