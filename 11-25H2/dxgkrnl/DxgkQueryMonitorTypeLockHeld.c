/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1403BA4F0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403B9F7C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1403DD5F4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402CD5FC (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D24C8 (-MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        _QWORD *a1,
        unsigned int a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9,
        _BYTE *a10)
{
  __int64 v10; // rbx
  __int64 v11; // r14
  bool *v14; // r15
  bool *v15; // r12
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // r13
  DXGMONITOR *v23; // rdi
  char IsVirtualModeSupportDisabled; // di
  char v25; // al
  bool v26; // dl
  bool v27; // cl
  char v28; // al
  __int64 result; // rax
  int MonitorType; // edi
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // r8
  __int64 v34; // r9
  struct HDXGMONITOR__ *v35; // r14
  void *v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // [rsp+20h] [rbp-88h]
  struct HDXGMONITOR__ *v40; // [rsp+50h] [rbp-58h] BYREF
  DXGMONITOR *v41[10]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+10h]
  enum _DMM_VIDPN_MONITOR_TYPE *v44; // [rsp+C0h] [rbp+18h]

  v44 = a3;
  v43 = a2;
  v10 = a1[390];
  v11 = a2;
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, a1, a2);
    WdLogGlobalForLineNumber = 2954;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkQueryMonitorTypeLockHeld is called on a render only adapter. (pAdapter = 0x%I64x, VidPn target Id = 0x%I64x)",
      (__int64)a1,
      v11,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 == -1 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2961;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkQueryMonitorTypeLockHeld is called with D3DDDI_ID_UNINITIALIZED (pAdapter = 0x%I64x)",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = a9;
  v15 = a8;
  v16 = a6;
  if ( !a4 && !a5 && !a6 && !a8 && !a9 )
    goto LABEL_34;
  v17 = *(_QWORD *)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v42, v17);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 120) + 72LL));
  v18 = *(_QWORD *)(v17 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, v11);
  v20 = TargetById;
  if ( !TargetById )
  {
    if ( v16 )
      *v16 = 0;
    if ( v15 )
      *v15 = *(_BYTE *)(a1[390] + 289LL);
    if ( v14 )
      *v14 = *(_BYTE *)(a1[390] + 290LL);
    goto LABEL_31;
  }
  if ( a4 )
    *a4 = *((_DWORD *)TargetById + 20);
  if ( a5 )
    *a5 = *((_DWORD *)TargetById + 21);
  if ( v16 )
    *v16 = *((_BYTE *)TargetById + 405);
  if ( v15 || v14 )
  {
    v21 = *((_DWORD *)TargetById + 6);
    if ( v21 != -1 )
    {
      v22 = a1[390];
      if ( v22 )
      {
        MONITOR_MGR::AcquireMonitorShared(v41, (__int64)a1, v21, 1u);
        v23 = v41[0];
        if ( v41[0] )
        {
          if ( *((_DWORD *)v41[0] + 70) != 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5268;
          }
          IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v23);
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v41);
          if ( IsVirtualModeSupportDisabled )
          {
            v26 = 1;
            v27 = 1;
            goto LABEL_24;
          }
        }
        else
        {
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v41);
        }
        v25 = *(_BYTE *)(v22 + 289);
        v26 = v25 == 0;
        v27 = *(_BYTE *)(v22 + 290) == 0;
        if ( v25 && (*(_DWORD *)(v22 + 24) & 0x20) != 0 )
        {
          v28 = 0;
LABEL_25:
          if ( v15 )
            *v15 = !v26;
          if ( v14 )
            *v14 = !v27;
          if ( a10 )
            *a10 = v28 ^ 1;
          goto LABEL_31;
        }
LABEL_24:
        v28 = 1;
        goto LABEL_25;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10225;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The selected adapter is render-only",
        10225LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry2(2LL, *((unsigned int *)v20 + 6), a1);
    v39 = *((unsigned int *)v20 + 6);
    WdLogGlobalForLineNumber = 3004;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Fail to find virtualization state on VidPn Target 0x%I64x adapter 0x%I64x",
      v39,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
    if ( v18 )
      ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v42 + 40));
    return 3221225485LL;
  }
LABEL_31:
  if ( v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v42 + 40));
  a3 = v44;
  LODWORD(v11) = v43;
LABEL_34:
  if ( a7 )
  {
    v31 = a1[390];
    if ( *(_BYTE *)(v31 + 289) && *(_BYTE *)(v31 + 290)
      || (v32 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[27] + 64LL) + 40LL) + 28LL) >= 0x4003u) )
    {
      v32 = 1;
    }
    *a7 = v32;
  }
  MonitorType = 0;
  if ( !a3 )
    return (unsigned int)MonitorType;
  v40 = 0LL;
  result = MonitorGetMonitorHandle(a1, (unsigned int)v11, 0LL, DxgkQueryMonitorTypeLockHeld, &v40);
  if ( (int)result >= 0 )
  {
    v35 = v40;
    MonitorType = MonitorGetMonitorType(v40, v44, v33, v34);
    if ( MonitorType < 0 )
    {
      v38 = v43;
      WdLogSingleEntry2(2LL, v43, a1);
      WdLogGlobalForLineNumber = 3065;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Fail to find MonitorType on VidPn Target 0x%I64x adapter 0x%I64x",
        v38,
        (__int64)a1,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)MonitorReleaseMonitorHandle(a1, v35, v36, v37) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3075;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 3075LL, 0LL, 0LL, 0LL, 0LL);
    }
    return (unsigned int)MonitorType;
  }
  return result;
}
