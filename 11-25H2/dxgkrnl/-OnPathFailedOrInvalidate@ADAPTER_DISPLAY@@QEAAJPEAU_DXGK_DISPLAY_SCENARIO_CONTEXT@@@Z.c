/*
 * XREFs of ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197768
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140257160 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030E9EC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsSessionHpdHandlingEnabled@DXGSESSIONMGR@@QEAA_N_K@Z @ 0x14007297C (-IsSessionHpdHandlingEnabled@DXGSESSIONMGR@@QEAA_N_K@Z.c)
 *     ?DxgkpGetSessionIdFromTargetedSession@@YAK_K@Z @ 0x1401F4134 (-DxgkpGetSessionIdFromTargetedSession@@YAK_K@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140409A9C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
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
    WdLogGlobalForLineNumber = 9020;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 9020LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = this[2];
  v14 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v4, v3, 0LL, &v14);
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v5 && DXGSESSIONMGR::IsSessionHpdHandlingEnabled(v5, v14) )
  {
    updated = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout((ADAPTER_DISPLAY *)this, 0LL, v13);
    if ( updated < 0 )
    {
      WdLogSingleEntry1(2LL, this[2]);
      v9 = (__int64)this[2];
      WdLogGlobalForLineNumber = 9037;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
      WdLogGlobalForLineNumber = 9068;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
        WdLogGlobalForLineNumber = 9062;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
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
