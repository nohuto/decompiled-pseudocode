/*
 * XREFs of ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0
 * Callers:
 *     ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EEA0 (-DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401ABF08 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401B61F0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EFE1C (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x140297470 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     EnforceDriverModelScalingPolicy @ 0x1402D8E14 (EnforceDriverModelScalingPolicy.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14030C830 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x140368330 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1403B0334 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BD4AC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BE1F0 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C5210 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403F960C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403FD47C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 */

void __fastcall COREADAPTERACCESS::Release(COREADAPTERACCESS *this)
{
  struct _KTHREAD **v2; // rcx
  struct _KTHREAD **v3; // rcx

  if ( *((_QWORD *)this + 3) != *((_QWORD *)this + 11) )
  {
    if ( !*((_BYTE *)this + 32) )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 8, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7743;
    }
    v3 = (struct _KTHREAD **)*((_QWORD *)this + 3);
    *((_BYTE *)this + 32) = 0;
    if ( KeGetCurrentThread() != v3[23] )
      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v3, *((const char **)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 72, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7743;
  }
  v2 = (struct _KTHREAD **)*((_QWORD *)this + 11);
  *((_BYTE *)this + 96) = 0;
  if ( KeGetCurrentThread() != v2[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v2, *((const char **)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 1) = 0;
}
