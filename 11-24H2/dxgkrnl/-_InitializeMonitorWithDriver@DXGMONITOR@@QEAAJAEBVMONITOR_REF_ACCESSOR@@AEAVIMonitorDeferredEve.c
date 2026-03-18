/*
 * XREFs of ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E074 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403FC0F0 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032BC4 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ @ 0x140056720 (-OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140185E50 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140188ECC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x140275B54 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x140276F90 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ @ 0x140279D60 (-OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ.c)
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14027A0C4 (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14027BF50 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x14028A4AC (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1403D23D0 (-ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403D2404 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1403DCDE4 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1403E4800 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1403E9D68 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1403FB518 (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1404063AC (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E804 (-OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorWithDriver(
        DXGMONITOR *this,
        const struct MONITOR_REF_ACCESSOR *a2,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  int DefaultMonitorProfile; // esi
  char *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // cl
  DXGADAPTER *v16; // rcx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  DxgMonitor::MonitorMipiDsiState *v20; // rcx
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h]
  int v25; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 70) == 1 && *((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 830;
  }
  v8 = *((_DWORD *)this + 70);
  if ( v8 == 1 )
  {
    DefaultMonitorProfile = DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(*((DxgMonitor::MonitorDescriptorState **)this
                                                                                            + 27));
    if ( DefaultMonitorProfile >= 0 )
      DefaultMonitorProfile = DXGMONITOR::OnDescriptorUpdated(this, a3);
    v10 = (char *)this + 168;
    v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL);
    if ( (*(_DWORD *)(v11 + 444) & 0x100) != 0 )
    {
      v12 = *(_QWORD *)(v11 + 3120);
      v25 = 0;
      v22 = 0;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, int *, int *))(*(_QWORD *)(v12 + 16) + 2392LL))(
             *(_QWORD *)(*(_QWORD *)(v12 + 16) + 2296LL),
             *((unsigned int *)this + 45),
             &v25,
             &v22) >= 0 )
      {
        *((_DWORD *)this + 118) = v25;
        *((_DWORD *)this + 119) = v22;
      }
    }
LABEL_18:
    if ( DefaultMonitorProfile < 0 )
      return (unsigned int)DefaultMonitorProfile;
    goto LABEL_19;
  }
  v13 = *((_QWORD *)a2 + 1);
  if ( v13 )
  {
    MonitorResourceLock::AcquireShared((PERESOURCE)(v13 + 40));
    DefaultMonitorProfile = DXGMONITOR::_CopyMonitorInformation(this, a2);
    ExReleaseResourceLite((PERESOURCE)(v13 + 40));
    KeLeaveCriticalRegion();
    v10 = (char *)this + 168;
    goto LABEL_18;
  }
  if ( v8 == 5 )
  {
    DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(*((DxgMonitor::MonitorDescriptorState **)this + 27));
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(this);
  }
  v10 = (char *)this + 168;
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 3004LL) >= 1105 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 48LL))(*((_QWORD *)this + 24));
  v14 = *((_QWORD *)this + 29);
  if ( !*(_DWORD *)(v14 + 120) )
  {
    DefaultMonitorProfile = DxgMonitor::MonitorModes::CreateDefaultMonitorProfile((struct _ERESOURCE *)v14);
    goto LABEL_18;
  }
LABEL_19:
  DefaultMonitorProfile = DXGMONITOR::_PrepareMonitorCCDName(this);
  if ( DefaultMonitorProfile >= 0 )
  {
    DXGMONITOR::_PrepareDefaultMonitorConfiguration(this);
    if ( *((_DWORD *)this + 70) != 1 )
      goto LABEL_29;
    v15 = (DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
             *((_QWORD *)this + 26),
             2LL,
             (__int64)L"VMSDisabled",
             (*((_BYTE *)this + 176) & 0x40) != 0) << 6) | *((_BYTE *)this + 176) & 0xBF;
    *((_BYTE *)this + 176) = v15;
    if ( (v15 & 2) != 0 )
      *((_DWORD *)this + 82) = DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
                                 *((_QWORD *)this + 26),
                                 8LL,
                                 (__int64)L"EnableIntegratedPanelBoostRefreshRateByDefault",
                                 0);
    DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore(this);
    v16 = *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)v10 + 24LL) + 16LL);
    if ( (*((_DWORD *)v16 + 111) & 0x40000) != 0 )
    {
      v19 = *((unsigned int *)this + 45);
      v23 = 0LL;
      v24 = 0LL;
      DXGADAPTER::GetVirtualMonitorInfo(v16, v19, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v23);
      *((_DWORD *)this + 116) = v23;
    }
    else
    {
      v17 = *((_QWORD *)this + 26);
      v25 = 0;
      v18 = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v17, 2LL, (__int64)L"PreferredScaleFactor", &v25);
      *((_DWORD *)this + 116) = v18 != 0 ? v25 : 0;
    }
    DxgMonitor::MonitorUsageState::_EvaluateUsageState(*((DxgMonitor::MonitorUsageState **)this + 30), 0LL);
    DxgMonitor::MonitorColorState::OnInitialized(*((DxgMonitor::MonitorColorState **)this + 28));
    DxgMonitor::MonitorUsb4State::OnInitialized(*((DxgMonitor::MonitorUsb4State **)this + 33), a4);
    DxgMonitor::MonitorDisplayPortState::OnInitialized(*((DxgMonitor::MonitorDisplayPortState **)this + 34));
    DefaultMonitorProfile = DXGMONITOR::_UpdateLinkInfo((__int64)this, *(_DWORD *)(*((_QWORD *)this + 30) + 16LL));
    DxgMonitor::MonitorGammaState::OnInitialized(*((DxgMonitor::MonitorGammaState **)this + 31));
    v20 = (DxgMonitor::MonitorMipiDsiState *)*((_QWORD *)this + 32);
    if ( v20 )
      DxgMonitor::MonitorMipiDsiState::OnInitialized(v20);
    if ( DefaultMonitorProfile >= 0 )
LABEL_29:
      *((_BYTE *)this + 176) |= 1u;
  }
  return (unsigned int)DefaultMonitorProfile;
}
