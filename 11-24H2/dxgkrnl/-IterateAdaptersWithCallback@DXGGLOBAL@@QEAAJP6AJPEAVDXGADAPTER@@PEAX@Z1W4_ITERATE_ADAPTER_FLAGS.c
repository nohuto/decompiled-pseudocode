/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140057E50 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1401894F8 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x14018EFE4 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkStartPnPStop @ 0x1401A0B10 (DxgkStartPnPStop.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401AB000 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1401B90AC (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401C0A38 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z @ 0x1401C38F4 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z.c)
 *     ?DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1401C39E8 (-DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401CBCD4 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1401CE984 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401D39A4 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401D5D80 (-NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401FA6BC (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14021B7CC (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14021C124 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026C14C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026C21C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026C2D8 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1402997B0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkProcessLockScreen @ 0x1402D2210 (DxgkProcessLockScreen.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x14031CE70 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x14033D7FC (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x14033DB60 (DxgkGetDisplayConfigBufferSizes.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x14033DE6C (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x140340708 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkCompleteTopologyTransition @ 0x14038E140 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EFEC (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkInternalDeviceIoctl @ 0x1403A9E70 (DxgkInternalDeviceIoctl.c)
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x1403C1A30 (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403C1AA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403D92F0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1403E6B70 (DxgkPreSessionDisconnected.c)
 *     DxgkTrimProcessCommitment @ 0x1403ED910 (DxgkTrimProcessCommitment.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403F4690 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1404115E8 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140040AE8 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x140398884 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // r14
  _QWORD *v11; // r13
  _QWORD *v12; // r15
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
  DXGADAPTERLISTLOCK *v25[12]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  __int64 (__fastcall *v27)(_QWORD *, __int64); // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h] BYREF

  v28 = a3;
  v27 = a2;
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v25, (struct DXGADAPTERLISTLOCK *)(a1 + 672));
  v6 = 0;
  v7 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(v8) == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
  }
  if ( a4 != 5
    || (v29 = 0, (v22 = DXGPROCESS::GetCurrent()) != 0LL)
    && (v23 = *((_QWORD *)v22 + 11)) != 0
    && ((*(void (__fastcall **)(_QWORD, _QWORD, int *))(v23 + 240))(0LL, 0LL, &v29), v29) )
  {
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v25);
    v11 = (_QWORD *)(a1 + 800);
    v12 = *(_QWORD **)(a1 + 800);
LABEL_5:
    while ( 2 )
    {
      if ( v12 != v11 && v12 && !v7 )
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
        _m_prefetchw(v13 + 3);
        v14 = v13[3];
        do
        {
          if ( !v14 )
            goto LABEL_5;
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
              goto LABEL_21;
            }
            v16 = *(_QWORD *)((char *)v13 + 4828);
            v26 = 0LL;
            Current = DXGPROCESS::GetCurrent();
            if ( Current && (v18 = *((_QWORD *)Current + 11)) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v18 + 240))(0LL, &v26, 0LL);
              v19 = v26;
            }
            else
            {
              v19 = 0LL;
              v26 = 0LL;
            }
            if ( v19 != v16 )
              goto LABEL_21;
            goto LABEL_20;
          case 5:
            if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v13) && (v13[391] || *(_QWORD *)((char *)v13 + 4828)) )
              goto LABEL_21;
            CanEnumerateAdapter = DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v13);
            goto LABEL_29;
          case 1:
            v24 = v13[390] == 0LL;
            break;
          case 2:
            v24 = v13[391] == 0LL;
            break;
          default:
            if ( a4 == 3 && v13[390] )
              goto LABEL_21;
LABEL_27:
            if ( !SessionData )
            {
LABEL_20:
              v7 = v27(v13, v28);
LABEL_21:
              DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
              continue;
            }
            CanEnumerateAdapter = DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v13);
LABEL_29:
            if ( !CanEnumerateAdapter )
              goto LABEL_21;
            goto LABEL_20;
        }
        if ( v24 )
          goto LABEL_21;
        goto LABEL_27;
      }
      break;
    }
    v6 = v7;
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v25);
  return v6;
}
