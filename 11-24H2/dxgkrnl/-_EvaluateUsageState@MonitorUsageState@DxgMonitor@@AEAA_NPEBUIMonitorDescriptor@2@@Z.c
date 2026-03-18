/*
 * XREFs of ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x14028A4AC
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027D874 (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 *     ?_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@XZ @ 0x14027D918 (-_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA-AW4_D3DKMT_DISPLAY_TARGET_US.c)
 *     ?_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027D97C (-_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_U.c)
 *     ?_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEAW4_DXGK_DISPLAY_USAGE@@PEA_N2@Z @ 0x1403F17A0 (-_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEA.c)
 */

char __fastcall DxgMonitor::MonitorUsageState::_EvaluateUsageState(
        DxgMonitor::MonitorUsageState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  bool v9; // [rsp+30h] [rbp-10h] BYREF
  int v10[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v11; // [rsp+70h] [rbp+30h] BYREF
  bool v12; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304881) && !*((_DWORD *)this + 4) )
  {
    v10[0] = 0;
    v11 = 1;
    v9 = 0;
    v12 = 1;
    if ( (int)DxgMonitor::MonitorUsageState::_GetIntendedUsageFromDescriptor(
                this,
                a2,
                (enum _DXGK_DISPLAY_USAGE *)&v11,
                &v9,
                &v12) < 0 )
    {
      if ( g_OSTestSigningEnabled )
        v10[0] = DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry((__int64)this);
    }
    else if ( (unsigned __int8)(v11 - 2) <= 1u )
    {
      v10[0] = 1;
    }
    else if ( !v12 )
    {
      v10[0] = 2;
    }
    DxgMonitor::MonitorUsageState::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)v10);
    v7 = v10[0];
    if ( v10[0] != *((_DWORD *)this + 4) )
    {
      v4 = 1;
      *((_BYTE *)this + 20) = v9;
      *((_DWORD *)this + 4) = v7;
      DxgMonitor::MonitorUsageState::_SaveUsageOverridesToMonitorStore((__int64)this, v7, v5, v6);
    }
  }
  return v4;
}
