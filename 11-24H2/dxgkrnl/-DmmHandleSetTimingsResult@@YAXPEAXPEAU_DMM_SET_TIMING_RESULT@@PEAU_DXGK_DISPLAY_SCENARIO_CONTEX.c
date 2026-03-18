/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E164
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278878 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403461E0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037C1F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E324 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpIndicateConnectorChange @ 0x14004D250 (DpIndicateConnectorChange.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140199BF4 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBEC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140401EB8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(DXGADAPTER ***this, struct _DMM_SET_TIMING_RESULT *a2, GUID *a3)
{
  int v6; // eax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _DEVICE_OBJECT *v9; // rdx
  struct _DEVICE_OBJECT *v10; // rcx
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4359;
  }
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 3017) )
  {
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        v6 = ADAPTER_DISPLAY::OnPathFailedOrInvalidate(this[390], (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a3);
        if ( v6 < 0 )
        {
          WdLogSingleEntry2(2LL, this, v6);
          WdLogGlobalForLineNumber = 4385;
        }
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData && *((_BYTE *)SessionData + 18499) )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( !a3 )
            a3 = &GUID_SPM_DEFAULT;
          if ( (int)ZwUpdateWnfStateData(
                      &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                      a3,
                      16LL,
                      0LL,
                      &CurrentProcessSessionId,
                      0,
                      0) < 0 )
          {
            WdLogSingleEntry1(2LL, this);
            WdLogGlobalForLineNumber = 4409;
          }
        }
        else if ( ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(
                    (ADAPTER_DISPLAY *)this[390],
                    0LL,
                    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a3) < 0 )
        {
          WdLogSingleEntry1(2LL, this);
          WdLogGlobalForLineNumber = 4397;
        }
      }
    }
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)this) )
      {
        DpIndicateConnectorChange(v9);
      }
      else
      {
        v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)v9->DeviceExtension + 19);
        if ( v10 )
          IoInvalidateDeviceRelations(v10, BusRelations);
      }
    }
  }
}
