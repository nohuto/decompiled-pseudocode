/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140257160
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140256D8C (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x140256E2C (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3434@Z @ 0x1400061F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140030D90 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043668 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140067D78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x14006AAF8 (Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x140189854 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197768 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D64B4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14031B064 (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403A6750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403B1968 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403DC10C (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1403E51E4 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140409A9C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14040C5C4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        DMMVIDEOPRESENTTARGETSET **this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  unsigned __int8 v5; // bl
  DMMVIDEOPRESENTTARGETSET **v7; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v9; // esi
  struct DXGADAPTER *v10; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v12; // r14
  __int64 result; // rax
  struct _LUID *v14; // rdx
  __int64 TargetLinkTrainingStatus; // r13
  int v16; // edi
  int ConnectionChangeId; // ebx
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v25; // r11d
  DMMVIDPNPRESENTPATH *v26; // rbx
  ULONGLONG v27; // rdx
  unsigned __int8 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v32; // rcx
  ADAPTER_DISPLAY *v33; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v35; // eax
  unsigned __int8 v36; // dl
  unsigned __int8 v37; // r8
  ADAPTER_DISPLAY *v38; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void *v41; // rax
  unsigned int v42; // [rsp+58h] [rbp-31h] BYREF
  int v43; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v44; // [rsp+60h] [rbp-29h] BYREF
  int CurrentProcessSessionId; // [rsp+64h] [rbp-25h] BYREF
  ULONGLONG v46; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-19h] BYREF
  const struct DMMVIDPN *v48; // [rsp+78h] [rbp-11h] BYREF
  ULONGLONG v49; // [rsp+80h] [rbp-9h] BYREF
  __int64 v50; // [rsp+88h] [rbp-1h] BYREF
  __int64 v51[9]; // [rsp+90h] [rbp+7h] BYREF
  struct DMMVIDPNTOPOLOGY *v53; // [rsp+E8h] [rbp+5Fh]
  bool v54; // [rsp+E8h] [rbp+5Fh]
  unsigned int v55; // [rsp+F0h] [rbp+67h] BYREF
  unsigned __int8 v56; // [rsp+F8h] [rbp+6Fh]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v57; // [rsp+100h] [rbp+77h]

  v57 = a4;
  v56 = a3;
  v5 = a3;
  v7 = this;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  v9 = HIBYTE(*((_DWORD *)a2 + 2)) & 0xF;
  v10 = ContainingAdapter;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v7[15], *((_DWORD *)a2 + 2) & 0xFFFFFF);
  v12 = TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, *((_DWORD *)a2 + 2) & 0xFFFFFFLL, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4725;
    return result;
  }
  v46 = 0LL;
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, &v46);
  if ( a5 )
  {
    if ( v9 != 8 )
    {
      v9 = 13;
      goto LABEL_24;
    }
    v9 = 12;
  }
  else if ( v5 )
  {
    v16 = *((_DWORD *)a2 + 2);
    ConnectionChangeId = a2->ConnectionChangeId;
    v47 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v10, v14, 0LL, &v47);
    DxgkLogCodePointPacketForSession(88, v47, v16 & 0xFFFFFF, v9, ConnectionChangeId, v18);
    if ( (unsigned int)Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)dword_14015B5B8 > 5
      && tlgKeywordOn((__int64)&dword_14015B5B8, 0x4000LL) )
    {
      v49 = a2->ConnectionChangeId;
      v22 = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v42 = v9;
      v43 = v22;
      v50 = *(_QWORD *)((char *)v10 + 412);
      v44 = 1;
      v51[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v19,
        (__int64)&unk_14013D65B,
        v20,
        v21,
        (__int64)v51,
        (__int64)&v44,
        (__int64)&v50,
        (__int64)&v43,
        (__int64)&v49,
        (__int64)&v42);
    }
    v7 = this;
    v5 = v56;
  }
  if ( v46 <= a2->ConnectionChangeId )
  {
    if ( v46 == a2->ConnectionChangeId )
    {
      if ( v9 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (unsigned int)(TargetLinkTrainingStatus - 13) <= 1 )
      {
        if ( v9 == 12 )
        {
          WdLogSingleEntry1(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          WdLogGlobalForLineNumber = 4829;
          return 0LL;
        }
        if ( !v5 )
        {
          WdLogSingleEntry3(1LL, TargetLinkTrainingStatus, v10, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          WdLogGlobalForLineNumber = 4842;
          return 0LL;
        }
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          WdLogSingleEntry2(1LL, v9, TargetLinkTrainingStatus);
          WdLogGlobalForLineNumber = 4868;
          return 0LL;
        }
      }
    }
LABEL_24:
    DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(v12, a2->ConnectionChangeId, v9);
    if ( a5 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v12, v9 == 12);
    }
    else if ( v9 == (_DWORD)TargetLinkTrainingStatus )
    {
      return 0LL;
    }
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)v7);
    v48 = ClientCommittedVidPnRef;
    if ( !ClientCommittedVidPnRef )
    {
LABEL_67:
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v48, 0LL);
      return 0LL;
    }
    v53 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(
                       (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
                       *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v26 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( a5 )
      {
        WdLogSingleEntry2(7LL, *(_QWORD *)&v25 & 0xFFFFFFLL, v10);
        if ( v9 == 12 )
        {
          WdLogGlobalForLineNumber = 4926;
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v12, 1u);
        }
        else
        {
          v27 = a2->ConnectionChangeId;
          WdLogGlobalForLineNumber = 4939;
          DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(v12, v27, 14LL);
        }
      }
      v28 = v9 == 12;
      goto LABEL_45;
    }
    v29 = *((_QWORD *)PathFromTarget + 11);
    v55 = 0;
    v30 = *(unsigned int *)(v29 + 24);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v53,
                                                *(_DWORD *)(v29 + 24),
                                                &v55);
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) >= 0
      && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4970;
    }
    v32 = *((_QWORD *)v10 + 391);
    v54 = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v55;
    if ( v32 )
      ADAPTER_RENDER::FlushScheduler(v32, 8LL, (unsigned int)v30);
    if ( v9 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v12);
      if ( !*((_BYTE *)v12 + 418) )
      {
        v28 = 0;
LABEL_45:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v12, 0, v28);
        goto LABEL_67;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v26, 0LL);
      if ( !v54 )
        goto LABEL_67;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*((ADAPTER_DISPLAY **)v10 + 390), v30, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v33 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 390);
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v33, v30);
      v35 = ADAPTER_DISPLAY::SetVidPnSourceActive(v33, v30, 1, DisplayModeInfo, 0, v56 != 0);
      if ( v35 >= 0 )
        goto LABEL_67;
      WdLogSingleEntry3(2LL, v10, v30, v35);
      WdLogGlobalForLineNumber = 5034;
      v9 = 13;
    }
    else
    {
      if ( v9 != 13 )
      {
        v36 = *((_BYTE *)v12 + 418);
        v37 = 1;
        goto LABEL_50;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v12);
    }
    v36 = 0;
    v37 = 0;
LABEL_50:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v12, v36, v37);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 390);
      if ( v54 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v38, v30, 0, 0LL, 0, v56 != 0);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(v38, v30, 0, 0x800u, v56);
    }
    if ( v9 == 13 || a5 )
    {
      WdLogSingleEntry3(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF, v10, a5);
      WdLogGlobalForLineNumber = 5123;
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        ADAPTER_DISPLAY::OnPathFailedOrInvalidate(*((DXGADAPTER ***)v10 + 390), v57);
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData && *((_BYTE *)SessionData + 18499) )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          v41 = v57;
          if ( !v57 )
            v41 = &GUID_SPM_DEFAULT;
          if ( (int)ZwUpdateWnfStateData(
                      &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                      v41,
                      16LL,
                      0LL,
                      &CurrentProcessSessionId,
                      0,
                      0) < 0 )
          {
            WdLogSingleEntry1(2LL, v10);
            WdLogGlobalForLineNumber = 5145;
          }
        }
        else
        {
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*((ADAPTER_DISPLAY **)v10 + 390), 0LL, v57);
        }
      }
    }
    if ( v9 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v12, 1u);
    goto LABEL_67;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 4806;
  return 0LL;
}
