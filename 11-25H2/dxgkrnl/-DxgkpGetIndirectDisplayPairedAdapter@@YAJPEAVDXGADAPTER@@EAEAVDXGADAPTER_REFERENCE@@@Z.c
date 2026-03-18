/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AD31C (DxgkSetIndirectDisplayRenderAdapter.c)
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1402CD924 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402E6688 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402E6CE0 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADA.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140301CE0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1403854B8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403F15B4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401CE654 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(struct DXGADAPTER *this, char a2, DXGADAPTER **a3)
{
  const struct _GUID *v4; // rdi
  __int64 v7; // r14
  volatile signed __int64 *v8; // r14
  struct _LUID *v9; // rdx
  bool IsAdapterSessionized; // al
  int DefaultRenderAdapterForSession; // eax
  __int64 v13; // r14
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  unsigned __int8 v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF
  struct _LUID v18; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  if ( *a3 )
    DXGADAPTER::ReleaseReference(*a3);
  *a3 = 0LL;
  if ( this && (*((_DWORD *)this + 111) & 0x100) != 0 )
  {
    v7 = *((_QWORD *)this + 390);
    v15 = 0;
    v14 = v7 + 200;
    if ( v7 == -200 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _KTHREAD **)(v14 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
    v8 = *(volatile signed __int64 **)(v7 + 248);
    if ( *a3 )
      DXGADAPTER::ReleaseReference(*a3);
    *a3 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      a3[1] = (DXGADAPTER *)-1LL;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
    if ( *a3 && a2 && (*((_DWORD *)*a3 + 50) != 1 || *((_BYTE *)*a3 + 3017)) )
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)a3, 0LL);
    if ( *a3 )
      return 0LL;
    v18 = 0LL;
    v16 = 0;
    v17 = 0;
    IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(this, v9, &v17, 0LL);
    DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                       &v18,
                                       (struct DXGADAPTER_REFERENCE *)a3,
                                       (unsigned int *)((unsigned __int64)&v17 & -(__int64)IsAdapterSessionized),
                                       (bool *)&v16);
    v13 = DefaultRenderAdapterForSession;
    if ( DefaultRenderAdapterForSession >= 0 )
    {
      if ( v16 )
        v4 = (const struct _GUID *)((char *)*a3 + 316);
      ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)this + 390), *a3, v4);
      return 0LL;
    }
    WdLogSingleEntry2(2LL, this, DefaultRenderAdapterForSession);
    WdLogGlobalForLineNumber = 8959;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to find the render adapter for display only adapter 0x%I64x (Status = 0x%I64x).",
      (__int64)this,
      v13,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8916;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter 0x%I64x is not an Indirect Display Adapter, returning 0x%I64x.",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
