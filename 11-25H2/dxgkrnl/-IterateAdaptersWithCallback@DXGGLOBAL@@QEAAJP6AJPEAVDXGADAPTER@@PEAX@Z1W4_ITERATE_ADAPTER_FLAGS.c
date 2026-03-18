/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1400583D0 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140187524 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x14018CD84 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkStartPnPStop @ 0x14019E5EC (DxgkStartPnPStop.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401A8AE0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1401B6AFC (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401BE088 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401C6A48 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1401C96F4 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401CE654 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401D0A40 (-NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401F3E70 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1402151C0 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x140215B18 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026524C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026531C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1402653D8 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x140282A74 (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1403093F0 (DxgkTrimProcessCommitment.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14030A210 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1403690FC (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x14036C2F8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x14036CDF0 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x140372D50 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403733CC (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1403740C0 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140377D7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkCompleteTopologyTransition @ 0x140378060 (DxgkCompleteTopologyTransition.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x14039ED68 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     DxgkInternalDeviceIoctl @ 0x1403AECB0 (DxgkInternalDeviceIoctl.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403E1900 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkProcessLockScreen @ 0x1403E9C00 (DxgkProcessLockScreen.c)
 *     DxgkPreSessionDisconnected @ 0x1403ED1A0 (DxgkPreSessionDisconnected.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403FA8B0 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x14041495C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140041038 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x14031E4F8 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v8; // r13d
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // r12
  _QWORD *v13; // rsi
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char CanEnumerateAdapter; // al
  struct DXGPROCESS *v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  _QWORD *v25; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-18h] BYREF
  char v27; // [rsp+68h] [rbp-10h]
  __int64 v28; // [rsp+C0h] [rbp+48h] BYREF
  __int64 (__fastcall *v29)(_QWORD *, __int64); // [rsp+C8h] [rbp+50h]
  __int64 v30; // [rsp+D0h] [rbp+58h]
  int v31; // [rsp+D8h] [rbp+60h] BYREF

  v30 = a3;
  v29 = a2;
  v4 = 0;
  v26 = a1 + 672;
  v27 = 0;
  if ( a1 == -672 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v26 + 24) == CurrentThread )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(CurrentThread) == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
  }
  if ( a4 != 5
    || (v31 = 0, (v22 = DXGPROCESS::GetCurrent()) != 0LL)
    && (v23 = *((_QWORD *)v22 + 11)) != 0
    && ((*(void (__fastcall **)(_QWORD, _QWORD, int *))(v23 + 240))(0LL, 0LL, &v31), v31) )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
    v11 = (_QWORD *)(a1 + 768);
    v12 = *(_QWORD **)(a1 + 768);
    v25 = (_QWORD *)(a1 + 768);
LABEL_9:
    while ( 2 )
    {
      if ( v12 != v11 && v12 && !v8 )
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
        _m_prefetchw(v13 + 3);
        v14 = v13[3];
        do
        {
          v11 = v25;
          if ( !v14 )
            goto LABEL_9;
          v15 = v14;
          v14 = _InterlockedCompareExchange64(v13 + 3, v14 + 1, v14);
        }
        while ( v15 != v14 );
        switch ( a4 )
        {
          case 4:
            if ( v13[391]
              && (!v13[390] || SessionData
                            && !DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v13)) )
            {
              goto LABEL_25;
            }
            v16 = *(_QWORD *)((char *)v13 + 4828);
            v28 = 0LL;
            Current = DXGPROCESS::GetCurrent();
            if ( Current && (v18 = *((_QWORD *)Current + 11)) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v18 + 240))(0LL, &v28, 0LL);
              v19 = v28;
            }
            else
            {
              v19 = 0LL;
              v28 = 0LL;
            }
            if ( v19 != v16 )
              goto LABEL_25;
            goto LABEL_24;
          case 5:
            if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v13) && (v13[391] || *(_QWORD *)((char *)v13 + 4828)) )
              goto LABEL_25;
            CanEnumerateAdapter = DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v13);
            goto LABEL_33;
          case 1:
            v24 = v13[390] == 0LL;
            break;
          case 2:
            v24 = v13[391] == 0LL;
            break;
          default:
            if ( a4 == 3 && v13[390] )
              goto LABEL_25;
LABEL_31:
            if ( !SessionData )
            {
LABEL_24:
              v8 = v29(v13, v30);
LABEL_25:
              DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
              v11 = v25;
              continue;
            }
            CanEnumerateAdapter = DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v13);
LABEL_33:
            if ( !CanEnumerateAdapter )
              goto LABEL_25;
            goto LABEL_24;
        }
        if ( v24 )
          goto LABEL_25;
        goto LABEL_31;
      }
      break;
    }
    v4 = v8;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
  return v4;
}
