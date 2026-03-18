/*
 * XREFs of ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0
 * Callers:
 *     ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018CC40 (-DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401A9A08 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401B3C40 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C09D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C1F40 (DxgkHandleForceProjectionMonitor.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EA414 (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1402850A0 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14032A180 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x140359DB0 (EnforceDriverModelScalingPolicy.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x14037F5C0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1403A67F0 (DxgkUpdateGdiInfo.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CA6BC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CB400 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403D0BDC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403FF61C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14040373C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
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
      WdLogGlobalForLineNumber = 7718;
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
    WdLogGlobalForLineNumber = 7718;
  }
  v2 = (struct _KTHREAD **)*((_QWORD *)this + 11);
  *((_BYTE *)this + 96) = 0;
  if ( KeGetCurrentThread() != v2[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v2, *((const char **)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 1) = 0;
}
