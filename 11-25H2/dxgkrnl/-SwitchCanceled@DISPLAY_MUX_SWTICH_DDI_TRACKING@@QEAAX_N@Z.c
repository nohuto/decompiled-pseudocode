/*
 * XREFs of ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x1400877FC
 * Callers:
 *     ??1DISPLAY_MUX_SWITCH_OPERATION@@QEAA@XZ @ 0x1400820E4 (--1DISPLAY_MUX_SWITCH_OPERATION@@QEAA@XZ.c)
 *     _DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082198 (_DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082268 (_DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004DFC0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ??$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA?A_PV_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@Z @ 0x14006AB4C (--$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA-A_PV_lambda_9000b013b54c5d4fd.c)
 *     ??0_lambda_9000b013b54c5d4fd00007edcb0ed276_@@QEAA@AEA_N0AEAU_DXGK_DIAG_DISPLAYMUX_SWITCH_CANCEL_PACKET@@AEAE0@Z @ 0x140081E58 (--0_lambda_9000b013b54c5d4fd00007edcb0ed276_@@QEAA@AEA_N0AEAU_DXGK_DIAG_DISPLAYMUX_SWITCH_CANCEL.c)
 *     ??1DXGKCALLONEXIT@?1???$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA?A_PV_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@Z@QEAA@XZ @ 0x140082294 (--1DXGKCALLONEXIT@-1---$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA-A_PV_lam.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140084D80 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x140086A58 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     ?SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140087474 (-SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARG.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x14008AFC0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008B020 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiDxgkDdiDisplayMuxSwitchCanceled @ 0x14008BA18 (DpiDxgkDdiDisplayMuxSwitchCanceled.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DISPLAY_MUX_SWTICH_DDI_TRACKING::SwitchCanceled(DISPLAY_MUX_SWTICH_DDI_TRACKING *this, bool a2)
{
  BOOL v2; // ebx
  unsigned int v4; // ecx
  _lambda_9000b013b54c5d4fd00007edcb0ed276_ *v5; // rax
  __int128 v6; // xmm1
  unsigned int v7; // r8d
  struct _LUID v8; // rdx
  int IsTargetPartOfMux; // eax
  struct _LUID *v10; // rbx
  int AdapterAndAcquire; // eax
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // eax
  int ConnectionChanges; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  unsigned __int8 v24; // [rsp+50h] [rbp-B0h] BYREF
  bool v25; // [rsp+51h] [rbp-AFh] BYREF
  bool v26; // [rsp+52h] [rbp-AEh] BYREF
  bool v27; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v28; // [rsp+60h] [rbp-A0h] BYREF
  char v29; // [rsp+68h] [rbp-98h]
  PVOID v30; // [rsp+70h] [rbp-90h] BYREF
  char v31; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  struct _DEVICE_OBJECT *v35[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v36; // [rsp+E0h] [rbp-20h]
  struct _DEVICE_OBJECT *v37[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v38; // [rsp+110h] [rbp+10h]
  _BYTE v39[48]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v40[48]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v41[4]; // [rsp+180h] [rbp+80h] BYREF

  v2 = a2;
  v27 = a2;
  v25 = 0;
  v26 = 0;
  v24 = 0;
  memset(v41, 0, sizeof(v41));
  v4 = v2 | DWORD2(v41[3]) & 0xFFFFFFFE;
  LODWORD(v41[3]) = *((_DWORD *)this + 1);
  DWORD1(v41[3]) = *(_DWORD *)this;
  DWORD2(v41[3]) = v4;
  if ( v2 )
  {
    v41[0] = 0x4000000037uLL;
    DWORD2(v41[3]) = v4 | 0x20;
    memset(&v41[1], 0, 28);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41);
  }
  v5 = _lambda_9000b013b54c5d4fd00007edcb0ed276_::_lambda_9000b013b54c5d4fd00007edcb0ed276_(
         (_lambda_9000b013b54c5d4fd00007edcb0ed276_ *)v40,
         &v27,
         &v26,
         (struct _DXGK_DIAG_DISPLAYMUX_SWITCH_CANCEL_PACKET *)v41,
         &v24,
         &v25);
  v6 = *((_OWORD *)v5 + 1);
  v33[0] = *(_OWORD *)v5;
  v34 = *((_QWORD *)v5 + 4);
  v33[1] = v6;
  DXGKCALLONEXIT<_lambda_9000b013b54c5d4fd00007edcb0ed276_>((__int64)v39, v33);
  if ( *((_DWORD *)this + 1) == 2 || *(_DWORD *)this == 2 )
  {
    v7 = *((_DWORD *)this + 7);
    v8 = *(struct _LUID *)((char *)this + 20);
    v26 = 1;
    IsTargetPartOfMux = DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_14015E3C0, v8, v7, &v24, 0LL);
    if ( IsTargetPartOfMux < 0 )
    {
      v24 = *((_BYTE *)this + 32);
      WdLogSingleEntry2(2LL, IsTargetPartOfMux, v24);
      WdLogGlobalForLineNumber = 227;
    }
    if ( *(_DWORD *)this == 2 )
    {
      v10 = (struct _LUID *)((char *)this + 8);
      v28 = 0LL;
      v29 = 0;
      AdapterAndAcquire = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v28, (struct _LUID *)this + 1);
      v12 = AdapterAndAcquire;
      if ( AdapterAndAcquire < 0 )
      {
        WdLogSingleEntry3(2LL, *((int *)this + 3), v10->LowPart, AdapterAndAcquire);
        WdLogGlobalForLineNumber = 265;
      }
      else
      {
        CInterfaceCallContext::CInterfaceCallContext(v35, v28);
        if ( v36 < 0 )
        {
          WdLogSingleEntry3(2LL, *((int *)this + 3), v10->LowPart, v12);
          WdLogGlobalForLineNumber = 260;
        }
        else
        {
          DWORD2(v41[3]) |= 8u;
          LOBYTE(v13) = v24 == 0;
          v14 = DpiDxgkDdiDisplayMuxSwitchCanceled(v28, *((unsigned int *)this + 4), v13);
          if ( v14 < 0 )
          {
            WdLogSingleEntry1(2LL, v14);
            WdLogGlobalForLineNumber = 246;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
            qword_14015E3C0,
            (DISPLAY_MUX_SWTICH_DDI_TRACKING *)((char *)this + 8));
          ConnectionChanges = QueryConnectionChanges(
                                v35[0],
                                *v10,
                                (struct _GUID *)((char *)this + 36),
                                (struct _GUID *)((char *)this + 52));
          if ( ConnectionChanges < 0 )
          {
            WdLogSingleEntry1(2LL, ConnectionChanges);
            WdLogGlobalForLineNumber = 254;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_14015E3C0, 0LL);
        }
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v35);
      }
      v25 = 1;
      *(_DWORD *)this = 3;
      AUTO_REMOVE_LOCK::Release(&v28);
    }
    if ( *((_DWORD *)this + 1) == 2 )
    {
      v30 = 0LL;
      v31 = 0;
      v16 = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v30, (struct _LUID *)((char *)this + 20));
      v17 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry3(2LL, *((int *)this + 6), *((unsigned int *)this + 5), v16);
        WdLogGlobalForLineNumber = 310;
      }
      else
      {
        CInterfaceCallContext::CInterfaceCallContext(v37, v30);
        if ( v38 < 0 )
        {
          WdLogSingleEntry3(2LL, *((int *)this + 3), *((unsigned int *)this + 2), v17);
          WdLogGlobalForLineNumber = 305;
        }
        else
        {
          v19 = *((unsigned int *)this + 7);
          LOBYTE(v18) = v24;
          DWORD2(v41[3]) |= 0x10u;
          v20 = DpiDxgkDdiDisplayMuxSwitchCanceled(v30, v19, v18);
          if ( v20 < 0 )
          {
            WdLogSingleEntry1(2LL, v20);
            WdLogGlobalForLineNumber = 291;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
            qword_14015E3C0,
            (DISPLAY_MUX_SWTICH_DDI_TRACKING *)((char *)this + 20));
          v21 = QueryConnectionChanges(
                  v37[0],
                  *(struct _LUID *)((char *)this + 20),
                  (struct _GUID *)((char *)this + 36),
                  (struct _GUID *)((char *)this + 52));
          if ( v21 < 0 )
          {
            WdLogSingleEntry1(2LL, v21);
            WdLogGlobalForLineNumber = 299;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_14015E3C0, 0LL);
        }
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v37);
      }
      v25 = 1;
      *((_DWORD *)this + 1) = 3;
      AUTO_REMOVE_LOCK::Release(&v30);
    }
    if ( v25 )
    {
      LOBYTE(v32[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v32, 0LL, 0x4Du, 0);
      v22 = DxgkRequestAsyncDisplaySwitchCallout(0LL, v32[1], 0x200000000uLL);
      if ( v22 < 0 )
      {
        v23 = v22;
        WdLogSingleEntry1(2LL, v22);
        WdLogGlobalForLineNumber = 327;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed DxgkRequestAsyncDisplaySwitchCallout for DisplayMux switch failure (Status = 0x%I64x).",
          v23,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v32);
    }
  }
  `DXGKCALLONEXIT<_lambda_9000b013b54c5d4fd00007edcb0ed276_>'::`2'::DXGKCALLONEXIT::~DXGKCALLONEXIT((__int64)v39);
}
