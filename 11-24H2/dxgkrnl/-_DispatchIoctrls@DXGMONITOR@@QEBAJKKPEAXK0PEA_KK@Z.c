/*
 * XREFs of ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x140275EC0
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x14042ACC0 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E134 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x14027BED0 (-OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027EE40 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042F6B0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchIoctrls(
        DxgMonitor::MonitorGammaState **this,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7,
        unsigned int a8)
{
  __int64 v9; // rbp
  unsigned int v10; // esi
  unsigned int v12; // ebx
  __int64 v13; // rax
  DxgMonitor::MonitorColorState *v14; // rcx
  DxgMonitor::MonitorMipiDsiState *v15; // rcx

  v9 = (unsigned int)a2;
  v10 = a3;
  v12 = -1073741637;
  v13 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v13 + 24) = v9;
  *(_QWORD *)(v13 + 32) = this;
  WdLogGlobalForLineNumber = 2315;
  switch ( (_DWORD)v9 )
  {
    case 0x231000:
    case 0x231004:
    case 0x231008:
      return (unsigned int)DxgMonitor::MonitorGammaState::OnIoctl(this[31], v9, v10, a4, a5, a6, a7);
    case 0x23100C:
    case 0x231010:
      if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
        return v12;
      return (unsigned int)DxgMonitor::MonitorGammaState::OnIoctl(this[31], v9, v10, a4, a5, a6, a7);
    case 0x231400:
    case 0x231404:
    case 0x231408:
      v15 = this[32];
      if ( !v15 )
        return v12;
      return (unsigned int)DxgMonitor::MonitorMipiDsiState::OnIoctl(v15, v9, v10, a4, a5, a6, a7);
    case 0x234014:
      if ( v10 >= 4 )
      {
        v14 = this[28];
        if ( v14 )
        {
          DxgMonitor::MonitorColorState::OnExternalBrightnessNitsUpdated(v14, *a4, a8);
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      break;
  }
  return v12;
}
