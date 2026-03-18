/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CC20
 * Callers:
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D5F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x140051244 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1400913A8 (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x140187948 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140276F34 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028C108 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028D218 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x14028D2F4 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x14028DB28 (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028DD10 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E074 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E704 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140401EB8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x14042E7C4 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  unsigned int MonitorStep2; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r12
  int EmergencySimulatedMonitor; // eax
  int MonitorInstance; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGMONITOR *v18; // rsi
  int v19; // ebx
  struct _DEVICE_OBJECT *v20; // rbx
  __int64 v21; // rax
  char v23; // cl
  char v24; // dl
  void **v25; // r8
  __int64 v26; // rax
  void *v27; // r9
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int PhysicalMonitor; // ebx
  __int64 v32; // r8
  __int64 v33; // rdx
  DxgMonitor::MonitorUsb4State *v34; // rcx
  __int64 v35; // rax
  void **v36; // rdx
  void *v37; // [rsp+40h] [rbp-40h] BYREF
  DXGMONITOR *v38; // [rsp+48h] [rbp-38h]
  void *v39; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+58h] [rbp-28h]
  void *v41; // [rsp+60h] [rbp-20h] BYREF
  __int64 v42; // [rsp+68h] [rbp-18h]
  void *v43; // [rsp+70h] [rbp-10h] BYREF
  DXGMONITOR *v44; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v46; // [rsp+C8h] [rbp+48h] BYREF
  struct _DEVICE_OBJECT *v47; // [rsp+D0h] [rbp+50h]

  v47 = a3;
  v7 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
  }
  MonitorStep2 = 0;
  if ( *((_BYTE *)this + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      (__int64)this,
      (__int64)&Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start,
      (__int64)a3,
      v7);
  v11 = a7;
  MONITOR_MGR::_IssueMonitorEvent((char *)this + 8, (unsigned int)v7, 0LL, 0LL, 1, a7);
  v41 = retaddr;
  v42 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v41);
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(this, (struct MONITOR_REF_ACCESSOR *)&v41);
  if ( EmergencySimulatedMonitor < 0 )
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
    }
    if ( v42 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
    }
  }
  else
  {
    if ( !v42 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 541;
    }
    MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v41);
  }
  v37 = retaddr;
  v38 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v37);
  v43 = retaddr;
  v44 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v43);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v7, 0, (struct MONITOR_REF_ACCESSOR *)&v43);
  v18 = v44;
  v19 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v44 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 641;
    }
    if ( v19 != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 642;
    }
    goto LABEL_36;
  }
  if ( !v44 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 561;
  }
  if ( v42 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 562;
  }
  if ( *((_DWORD *)v18 + 70) != 1 )
  {
    MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v37, (__int64)v18 + 288);
    MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v18 + 288));
LABEL_36:
    v20 = v47;
LABEL_37:
    v29 = (__int64)v38;
    if ( v38 )
    {
      if ( ((*((unsigned __int8 *)v38 + 176) >> 1) & 1) != (a4 != 0) )
      {
        WdLogSingleEntry0(1LL);
        v29 = (__int64)v38;
        WdLogGlobalForLineNumber = 652;
      }
      DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(
        *(DxgMonitor::MonitorPnpState **)(v29 + 200),
        v29,
        v16,
        v17);
      v34 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v38 + 33);
      if ( *((_BYTE *)v34 + 8) )
        DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v34, 0);
    }
    v39 = retaddr;
    v40 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
    PhysicalMonitor = MONITOR_MGR::_CreatePhysicalMonitor(
                        this,
                        v7,
                        v20,
                        a4,
                        a5,
                        (struct MONITOR_REF_ACCESSOR *)&v39,
                        a6,
                        v11);
    if ( PhysicalMonitor < 0 )
    {
      if ( v40 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 748;
      }
      if ( v38 )
        MONITOR_MGR::_HandleCreateMonitorStep2(
          this,
          v7,
          (const struct MONITOR_REF_ACCESSOR *)&v37,
          (const struct MONITOR_REF_ACCESSOR *)&v39,
          v11);
      if ( v42 )
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v41);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v32, v7);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
      MonitorStep2 = PhysicalMonitor;
    }
    else
    {
      v33 = v40;
      if ( !v40 )
      {
        WdLogSingleEntry0(1LL);
        v33 = v40;
        WdLogGlobalForLineNumber = 682;
      }
      if ( v18 )
      {
        v23 = *((_BYTE *)v18 + 176) ^ (*(_BYTE *)(v33 + 176) ^ *((_BYTE *)v18 + 176)) & 2;
        *((_BYTE *)v18 + 176) = v23;
        v24 = v23 ^ (*(_BYTE *)(v40 + 176) ^ v23) & 4;
        *((_BYTE *)v18 + 176) = v24;
        *(_BYTE *)(v40 + 176) ^= (*(_BYTE *)(v40 + 176) ^ v24) & 0x20;
        DXGMONITOR::_SetAttachedPhysicalMonitor(v18, (const struct MONITOR_REF_ACCESSOR *)&v39);
      }
      else
      {
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v39);
      }
      if ( MONITOR_MGR::_DelayNotifyClient )
      {
        v35 = v40;
        if ( *(_QWORD *)(v40 + 376) )
        {
          WdLogSingleEntry0(1LL);
          v35 = v40;
          WdLogGlobalForLineNumber = 731;
        }
        *(_BYTE *)(v35 + 360) = 1;
        v36 = &v41;
        if ( v38 )
          v36 = &v37;
        MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)(v40 + 368), (__int64)v36);
        MONITOR_MGR::_EnterMonitorPendingState(this);
      }
      else
      {
        v25 = &v41;
        if ( v38 )
          v25 = &v37;
        MonitorStep2 = MONITOR_MGR::_HandleCreateMonitorStep2(
                         this,
                         v7,
                         (const struct MONITOR_REF_ACCESSOR *)v25,
                         (const struct MONITOR_REF_ACCESSOR *)&v39,
                         v11);
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
    }
    goto LABEL_23;
  }
  v20 = v47;
  if ( *(struct _DEVICE_OBJECT **)(*((_QWORD *)v18 + 25) + 8LL) != v47 )
    goto LABEL_48;
  if ( *(_BYTE *)(*((_QWORD *)v18 + 33) + 8LL) )
  {
    v21 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    *(_QWORD *)(v21 + 24) = 1LL;
    *(_QWORD *)(v21 + 32) = v7;
    WdLogGlobalForLineNumber = 584;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v43);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v41);
    return 0LL;
  }
  if ( !a4 )
  {
LABEL_48:
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
    v38 = v18;
    v37 = v43;
    v18 = 0LL;
    v44 = 0LL;
    MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v37);
    goto LABEL_37;
  }
  DXGMONITOR::_ChangeLIDStatus(v18, 1);
  v26 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(*(_QWORD *)(v26 + 16) + 420LL) == 32902 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v26 + 16)) )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v27, v7, &v46);
      if ( SourceConnectedToTargetInClientVidPn == -1071774884 || SourceConnectedToTargetInClientVidPn == -1071774912 )
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*((ADAPTER_DISPLAY **)this + 3), 0LL, v11);
    }
  }
LABEL_23:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v43);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v41);
  return MonitorStep2;
}
