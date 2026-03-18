/*
 * XREFs of DxgkQueryConnectionChanges @ 0x140027940
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1400272AC (DpiFdoHandleDisplayDetectControl.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x140086A58 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x140375ABC (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403C6450 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444@Z @ 0x140004AF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAA_NU_LUID@@@Z @ 0x140028530 (-GetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAA_NU_LUID@@@Z.c)
 *     DpiDxgkDdiQueryConnectionChange @ 0x1400285C0 (DpiDxgkDdiQueryConnectionChange.c)
 *     DpiFdoGetChildDescriptor @ 0x140028918 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z @ 0x140086E3C (-ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x14019DCD8 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x14023BD30 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140256D8C (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z @ 0x140267E7C (-MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z.c)
 *     ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140267F40 (-MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402BC7C8 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x14030C458 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403BFBC8 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1403C1DF0 (DxgkEndDisplayCalloutBatch.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1403C6930 (DxgkStartDisplayCalloutBatch.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1403D0410 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, char a2, unsigned __int8 a3, char a4, char a5, char a6)
{
  __int64 v6; // rbx
  unsigned __int8 v8; // r13
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v15; // r14
  _QWORD *v16; // rdi
  _DWORD *v17; // rdx
  KSPIN_LOCK *v18; // r14
  int v19; // r12d
  int v20; // eax
  __int64 v21; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // r13
  unsigned int v23; // esi
  _DWORD *ChildDescriptor; // rax
  __int64 v25; // r9
  _DWORD *v26; // r15
  _BYTE *v27; // r14
  bool v28; // cl
  __int64 v29; // r9
  int v30; // eax
  char v31; // si
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 result; // rax
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // r9
  int updated; // eax
  int v45; // eax
  __int64 v46; // r12
  _QWORD *v47; // rsi
  _QWORD *v48; // r14
  unsigned int v49; // edx
  int v50; // eax
  int v51; // ecx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-D8h]
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v58; // [rsp+60h] [rbp-A0h] BYREF
  char v59; // [rsp+61h] [rbp-9Fh] BYREF
  char v60; // [rsp+62h] [rbp-9Eh]
  char v61; // [rsp+63h] [rbp-9Dh]
  int v62; // [rsp+64h] [rbp-9Ch] BYREF
  int v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+6Ch] [rbp-94h] BYREF
  int v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v66[8]; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID *v67; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+88h] [rbp-78h]
  unsigned __int8 v69[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v70[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  char v73[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v76[64]; // [rsp+E0h] [rbp-20h] BYREF
  GUID v77; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v78[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int128 v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  _DWORD v86[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v87; // [rsp+188h] [rbp+88h]
  __int128 v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  int v91; // [rsp+1B0h] [rbp+B0h]
  int v92; // [rsp+1B4h] [rbp+B4h]
  int v93; // [rsp+1B8h] [rbp+B8h]
  int v94; // [rsp+1BCh] [rbp+BCh]
  __int64 v95; // [rsp+1C0h] [rbp+C0h]
  GUID ActivityId; // [rsp+1D0h] [rbp+D0h] BYREF
  _OWORD v97[3]; // [rsp+1E0h] [rbp+E0h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v58 = a3;
  v68 = a1;
  v61 = 0;
  v60 = 0;
  v59 = 0;
  v8 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v6 || *(_DWORD *)(v6 + 16) != 1953656900 || *(_DWORD *)(v6 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 18994;
    return result;
  }
  if ( DISPLAY_MUX_MGR::GetDisableQueryConnectionDdiStatus(qword_14015E3C0, *(struct _LUID *)(v6 + 2696)) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    v36 = *(_QWORD *)(v6 + 5888);
    WdLogGlobalForLineNumber = 19003;
    v79 = 0LL;
    v85 = *(_QWORD *)(v6 + 2696);
    v82 = 0LL;
    v78[0] = 30;
    v78[1] = 72;
    v81 = 0LL;
    v80 = 0LL;
    v83 = 136LL;
    v84 = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v78, v36);
    return 0LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3440), 1u);
    v61 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v6 + 236) - 1) > 1 || *(_DWORD *)(v6 + 4120) == 1 || *(_DWORD *)(v6 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v6 + 3664), 0, 0);
    LODWORD(v13) = -1073741661;
    WdLogSingleEntry1(3LL, -1073741661LL);
    WdLogGlobalForLineNumber = 19045;
    goto LABEL_64;
  }
  if ( (*(_BYTE *)(v6 + 4040) & 1) != 0 )
  {
    if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v6 + 4032), 2LL) )
    {
      LOBYTE(v11) = 1;
      v12 = DpiAcquireCoreSyncAccessSafe(a1, v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        KeSetEvent((PRKEVENT)(v6 + 3664), 0, 0);
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 19070;
        goto LABEL_64;
      }
      v60 = 1;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v6 + 4032));
  }
  if ( a2 && (*(_BYTE *)(v6 + 4041) & 8) != 0 )
  {
    v69[0] = 0;
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x3Cu, 0, v70, v69);
    v15 = v70[0];
    v16 = *(_QWORD **)(v6 + 3600);
    while ( v16 != (_QWORD *)(v6 + 3600) )
    {
      v17 = v16 - 4;
      v16 = (_QWORD *)*v16;
      if ( v17[4] == 1 )
      {
        v37 = *v17 == 1 ? (unsigned int)v17[1] : 4294967294LL;
        LOBYTE(v14) = 1;
        LOBYTE(v57) = 1;
        LOBYTE(v56) = a5;
        LOBYTE(v55) = v8;
        LOBYTE(v54) = a4;
        v38 = DpiPdoHandleChildConnectionChange(
                *(_QWORD *)(v6 + 24),
                (unsigned int)v17[6],
                v37,
                v14,
                v54,
                v55,
                v56,
                v57,
                0LL,
                &v59,
                v15);
        if ( v38 < 0 )
        {
          WdLogSingleEntry1(2LL, v38);
          WdLogGlobalForLineNumber = 19132;
        }
      }
    }
    if ( v69[0] )
      DisplayScenarioContextDissociate(v70);
  }
  v18 = (KSPIN_LOCK *)(v6 + 3656);
  do
  {
    do
    {
      while ( 1 )
      {
        memset(v76, 0, sizeof(v76));
        v76[61] = a5;
        v76[60] = v8;
        memset(v97, 0, sizeof(v97));
        v19 = 0;
        KeAcquireInStackQueuedSpinLock(v18, &LockHandle);
        *(_DWORD *)(v6 + 3652) = 2;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v20 = DpiDxgkDdiQueryConnectionChange(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), v76);
        v13 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL, v20);
          WdLogGlobalForLineNumber = 19161;
          goto LABEL_52;
        }
        if ( v20 == 255 )
          goto LABEL_52;
        v21 = *(_QWORD *)&v76[40];
        v66[0] = 0;
        v77 = 0LL;
        if ( !*(_QWORD *)&v76[40] )
          v21 = *(_QWORD *)&v76[48] - *(_QWORD *)v77.Data4;
        if ( v21 )
          v77 = *(GUID *)&v76[40];
        else
          EtwActivityIdControl(3u, &v77);
        DisplayScenarioContextEnsureAndAssociate(&v77, 0x3Cu, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v67, v66);
        v22 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v67;
        if ( !v76[62] )
          break;
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v6 + 4032));
        MonitorRebuildMonitorModeListCache(*(void **)(v6 + 4032), v39, v22);
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v66);
        v8 = v58;
      }
      v23 = *(_DWORD *)&v76[8] & 0xFFFFFF | (*(_DWORD *)&v76[56] << 24);
      if ( (HIBYTE(*(_DWORD *)&v76[8]) & 0xF) == 4
        || (HIBYTE(*(_DWORD *)&v76[8]) & 0xF) == 5
        || (HIBYTE(*(_DWORD *)&v76[8]) & 0xF) == 6 )
      {
        v45 = DpiFdoHandleTargetConnectionState(v6, &v59, v76);
        LODWORD(v13) = v45;
        if ( v45 < 0 )
        {
          WdLogSingleEntry1(2LL, v45);
          WdLogGlobalForLineNumber = 19209;
        }
        goto LABEL_49;
      }
      if ( (HIBYTE(*(_DWORD *)&v76[8]) & 0xF) != 8 && (HIBYTE(*(_DWORD *)&v76[8]) & 0xF) != 0xA )
      {
        if ( (HIBYTE(*(_DWORD *)&v76[8]) & 0xF) != 0xC && (HIBYTE(*(_DWORD *)&v76[8]) & 0xFu) - 13 >= 2 )
        {
          WdLogSingleEntry2(2LL, (*(_QWORD *)&v76[8] >> 24) & 0xFLL, v13);
          WdLogGlobalForLineNumber = 19363;
          LODWORD(v13) = -1073741811;
          goto LABEL_49;
        }
LABEL_100:
        updated = DmmUpdateTargetLinkTrainingState(
                    *(void **)(v6 + 4032),
                    (struct _DXGK_CONNECTION_CHANGE *)v76,
                    v22,
                    v19 != 0);
        LODWORD(v13) = updated;
        if ( updated < 0 )
        {
          WdLogSingleEntry1(2LL, updated);
          WdLogGlobalForLineNumber = 19354;
        }
        goto LABEL_49;
      }
      if ( *(_BYTE *)(v6 + 6393) )
        DISPLAY_MUX_MGR::ReportMdmConnectionChange(
          qword_14015E3C0,
          *(struct _LUID *)(v6 + 2696),
          v23,
          (const struct _DXGKARG_QUERYCONNECTIONCHANGE *)v76);
      ChildDescriptor = (_DWORD *)DpiFdoGetChildDescriptor(v6);
      v26 = ChildDescriptor;
      if ( !ChildDescriptor )
      {
        WdLogSingleEntry1(2LL, -1073741810LL);
        WdLogGlobalForLineNumber = 19236;
        goto LABEL_49;
      }
      if ( *ChildDescriptor == 1 )
      {
        LOBYTE(v25) = (*(_BYTE *)(v6 + 4041) & 0x10) != 0;
        v19 = DmmProcessHPDFiltering(*(_QWORD *)(v6 + 4032), v76, v97, v25, v22);
        if ( v19 == 1 )
          goto LABEL_46;
        LODWORD(v25) = *(_DWORD *)&v76[8];
      }
      v27 = 0LL;
      if ( (v25 & 0xF000000) == 0xA000000 && (v76[16] & 1) != 0 )
      {
        if ( (*(_DWORD *)(v6 + 4052) & 0x40) != 0 )
        {
          v27 = &v76[24];
        }
        else
        {
          if ( (unsigned int)dword_14015B5B8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14015B5B8, 0x400000002000LL) )
          {
            v62 = *(_DWORD *)&v76[28];
            v43 = v42 & 0xFFFFFF;
            v63 = *(_DWORD *)&v76[24];
            v71 = *(_QWORD *)(v6 + 2696);
            v64 = v43;
            v65 = 1;
            v72 = 16779264LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v40,
              (__int64)&unk_14013BE96,
              v41,
              v43,
              (__int64)&v72,
              (__int64)&v65,
              (__int64)&v71,
              (__int64)&v64,
              (__int64)&v63,
              (__int64)&v62);
          }
          WdLogSingleEntry1(2LL, v13);
          LODWORD(v25) = *(_DWORD *)&v76[8];
          WdLogGlobalForLineNumber = 19290;
        }
      }
      v28 = v76[60] || v19 == 3;
      v29 = v25 & 0xF000000;
      LOBYTE(v29) = (_DWORD)v29 == 167772160;
      LOBYTE(v57) = v76[63];
      LOBYTE(v56) = v76[61];
      LOBYTE(v55) = v28;
      LOBYTE(v54) = 0;
      v30 = DpiPdoHandleChildConnectionChange(
              *(_QWORD *)(v6 + 24),
              v23,
              *(unsigned int *)&v76[12],
              v29,
              v54,
              v55,
              v56,
              v57,
              v27,
              &v59,
              v22);
      LODWORD(v13) = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry1(2LL, v30);
        WdLogGlobalForLineNumber = 19311;
      }
      v18 = (KSPIN_LOCK *)(v6 + 3656);
LABEL_46:
      if ( *v26 == 1 )
        DmmUpdateHPDFilteringTelemetry(
          *(void **)(v6 + 4032),
          (struct _DMM_HPD_FILTER_INFO *)v97,
          (struct _GUID *)v22,
          v23,
          (_DWORD)v13 == 0x40000000);
      if ( (v19 & 0xFFFFFFFD) != 0 && (v19 != 3 || (_DWORD)v13 == 0x40000000) )
        goto LABEL_100;
LABEL_49:
      if ( v66[0] )
        DisplayScenarioContextDissociate((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)&v67);
      if ( (int)v13 < 0 )
        break;
      v8 = v58;
    }
    while ( (_DWORD)v13 != 255 );
LABEL_52:
    v31 = 1;
    KeAcquireInStackQueuedSpinLock(v18, &LockHandle);
    if ( (*(_DWORD *)(v6 + 3652) & 1) == 0 )
    {
      *(_DWORD *)(v6 + 3652) = 0;
      v31 = 0;
      KeSetEvent((PRKEVENT)(v6 + 3664), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v8 = v58;
  }
  while ( v31 );
  if ( a6 )
  {
    v73[0] = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v73, 0LL, 0x44u, 0);
    v46 = v74;
    v47 = *(_QWORD **)(v6 + 3600);
    v33 = v68;
    while ( 1 )
    {
      v48 = v47;
      if ( v47 == (_QWORD *)(v6 + 3600) )
        break;
      v49 = *((_DWORD *)v47 - 2);
      v47 = (_QWORD *)*v47;
      v58 = 0;
      if ( MonitorQuerySkippedRemovalState(*(void **)(v6 + 4032), v49, &v58) >= 0 && v58 )
      {
        LOBYTE(v57) = 0;
        LOBYTE(v56) = 0;
        LOBYTE(v55) = 0;
        LOBYTE(v54) = 0;
        v50 = DpiPdoHandleChildConnectionChange(
                v33,
                *((unsigned int *)v48 - 2),
                4294967294LL,
                0LL,
                v54,
                v55,
                v56,
                v57,
                0LL,
                &v59,
                v46);
        v51 = v50;
        if ( v50 < 0 )
        {
          WdLogSingleEntry1(2LL, v50);
          WdLogGlobalForLineNumber = 19445;
          break;
        }
        v90 = 0LL;
        v87 = 0LL;
        v92 = *((_DWORD *)v48 - 2);
        v52 = *(_QWORD *)(v6 + 2696);
        v89 = 0LL;
        v93 = v51;
        v94 = 0;
        v53 = *(_QWORD *)(v6 + 5888);
        v95 = v52;
        v86[0] = 30;
        v86[1] = 72;
        v88 = 0LL;
        v91 = 126;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v86, v53);
      }
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v73);
  }
  else
  {
    v33 = v68;
  }
  if ( v59 )
  {
    v35 = DmmPowerOnOffTargetsFromSourceIfNecessary(*(void *const *)(v6 + 4032), 1u, 0LL);
    if ( v35 < 0 )
    {
      WdLogSingleEntry1(2LL, v35);
      WdLogGlobalForLineNumber = 19481;
    }
  }
  if ( (*(_BYTE *)(v6 + 4040) & 1) != 0 )
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v6 + 4032));
  if ( (int)v13 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 3780), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), BusRelations);
  }
  if ( v60 )
  {
    LOBYTE(v32) = 1;
    DpiReleaseCoreSyncAccessSafe(v33, v32);
  }
LABEL_64:
  if ( v61 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
