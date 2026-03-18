/*
 * XREFs of ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140199BF4
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025DFE4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E164 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsSessionHpdHandlingEnabled@DXGSESSIONMGR@@QEAA_N_K@Z @ 0x14007339C (-IsSessionHpdHandlingEnabled@DXGSESSIONMGR@@QEAA_N_K@Z.c)
 *     ?DxgkpGetSessionIdFromTargetedSession@@YAK_K@Z @ 0x1401FA97C (-DxgkpGetSessionIdFromTargetedSession@@YAK_K@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140401EB8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OnPathFailedOrInvalidate(
        DXGADAPTER **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct _LUID *v3; // rdx
  DXGADAPTER *v4; // rcx
  DXGSESSIONMGR *v5; // rcx
  int updated; // edi
  void *v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  unsigned int SessionIdFromTargetedSession; // [rsp+70h] [rbp+8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v13 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9165;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 9165LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = this[2];
  v14 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v4, v3, 0LL, &v14);
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 122);
  if ( v5 && DXGSESSIONMGR::IsSessionHpdHandlingEnabled(v5, v14) )
  {
    updated = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout((ADAPTER_DISPLAY *)this, 0LL, v13);
    if ( updated < 0 )
    {
      WdLogSingleEntry1(2LL, this[2]);
      v9 = (__int64)this[2];
      WdLogGlobalForLineNumber = 9182;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to send mode change request to GDI for final mode change on adapter 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( v13 )
      DisplayScenarioContextHolding(&v13);
    SessionIdFromTargetedSession = DxgkpGetSessionIdFromTargetedSession(v14);
    if ( SessionIdFromTargetedSession == -1 )
    {
      updated = -1073741275;
      WdLogSingleEntry1(2LL, this[2]);
      v11 = (__int64)this[2];
      WdLogGlobalForLineNumber = 9213;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Did not find the corresponding session ID for adapter 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v7 = &GUID_SPM_DEFAULT;
      if ( v13 )
        v7 = v13;
      updated = ZwUpdateWnfStateData(
                  &WNF_DXGK_PATH_FAILED_OR_INVALIDATED_V2,
                  v7,
                  16LL,
                  0LL,
                  &SessionIdFromTargetedSession,
                  0,
                  0);
      if ( updated < 0 )
      {
        WdLogSingleEntry1(2LL, this[2]);
        v10 = (__int64)this[2];
        WdLogGlobalForLineNumber = 9207;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to notify WNF clients of a monitor change for final mode change on adapter 0x%I64x",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  return (unsigned int)updated;
}
