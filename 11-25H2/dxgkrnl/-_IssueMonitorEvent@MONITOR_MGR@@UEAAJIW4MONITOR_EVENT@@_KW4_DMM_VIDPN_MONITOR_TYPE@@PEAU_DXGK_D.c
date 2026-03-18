/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026CD1C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D6A8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCB18 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403541B0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x140354DC4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140355C94 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403563B8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@45445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001190 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U2@U2@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140052108 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140063178 (-CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14008FEE0 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401885C0 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1403D9C18 (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, GUID *a6)
{
  __int64 v6; // rax
  int v9; // edi
  __int64 v10; // r13
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _LUID *v14; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // r9
  int v17; // eax
  GUID *p_ActivityId; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  MUTEX_LOCK *i; // rcx
  __int16 v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+84h] [rbp-7Ch] BYREF
  int v28; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  struct _GUID *v31; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v35[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct _GUID v38; // [rsp+D0h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+E0h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v36 = a4;
  v9 = a3;
  v10 = a2;
  ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v6 + 16) + 3120LL));
  if ( a3 )
  {
    if ( a3 != 7 )
      goto LABEL_13;
  }
  else if ( !*(_BYTE *)(a1 + 13) )
  {
    v9 = 7;
  }
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v13 = *(_QWORD *)(a1 + 16);
  v30 = 0LL;
  DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(v13 + 16), v14, 0LL, &v30);
  v26 = 0;
  v38 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
    (struct DXGGLOBAL *)((char *)Global + 305544),
    0,
    (enum _DXGK_RAPID_HPD_TYPE *)&v26,
    &v38,
    0LL);
  if ( (unsigned int)dword_14015B660 > 5 && tlgKeywordOn((__int64)&dword_14015B660, 0x400000000080LL) )
  {
    v31 = &v38;
    v32 = v30;
    if ( a6 )
      v17 = a6[2].Data4[4];
    else
      v17 = -1;
    v27 = v17;
    p_ActivityId = &ActivityId;
    v28 = a5;
    v19 = *(_QWORD *)(a1 + 16);
    v33 = a4;
    if ( a6 )
      p_ActivityId = a6;
    v29 = v9;
    v20 = *(_QWORD *)(v19 + 16);
    v34 = *(_QWORD *)(v20 + 412);
    v25 = v10;
    v24 = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      v20,
      (__int64)&unk_14013D540,
      (__int64)p_ActivityId,
      v16,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v34,
      (__int64)&v29,
      (__int64)&v33,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v32,
      (__int64 *)&v31);
  }
LABEL_13:
  if ( v9 <= 6 )
  {
    if ( v9 == 6 )
      goto LABEL_20;
    v12 = (unsigned int)v9;
    if ( !v9 )
      goto LABEL_20;
    if ( v9 == 1 || v9 == 2 )
    {
LABEL_21:
      if ( (unsigned int)v9 <= 3 )
        goto LABEL_24;
      goto LABEL_22;
    }
    v12 = (unsigned int)(v9 - 3);
    if ( v9 == 3 )
      goto LABEL_20;
    v12 = (unsigned int)(v9 - 4);
    if ( (unsigned int)v12 <= 1 )
      goto LABEL_20;
LABEL_33:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3417;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Unknown monitor event was processed. This switch block should be updated to decide whether the monitor uniqueness is affected.",
      3417LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_21;
  }
  v12 = (unsigned int)(v9 - 7);
  if ( v9 == 7 )
  {
LABEL_20:
    DxgkIncreaseMonitorUniqueness(v12);
    goto LABEL_21;
  }
  if ( v9 != 8 && v9 != 9 )
  {
    v12 = (unsigned int)(v9 - 10);
    if ( v9 == 10 )
      goto LABEL_20;
    v12 = (unsigned int)(v9 - 11);
    if ( v9 == 11 )
      goto LABEL_20;
    if ( v9 != 12 )
      goto LABEL_33;
  }
LABEL_22:
  if ( (unsigned int)(v9 - 7) > 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3425;
  }
LABEL_24:
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v35, a1 - 8);
  v21 = *(_QWORD **)(a1 + 64);
  if ( v21 == (_QWORD *)(a1 + 64) )
    v21 = 0LL;
  for ( i = (MUTEX_LOCK *)v35; ; i = (MUTEX_LOCK *)v37 )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>(i);
    if ( !v21 )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, GUID *))v21[2])(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           (unsigned int)v10,
           v21[3],
           (unsigned int)v9,
           v36,
           a5,
           a6) < 0 )
    {
      WdLogSingleEntry4(2LL, v21[2], v21[3], v9, v10);
      WdLogGlobalForLineNumber = 3469;
    }
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v37, a1 - 8);
    v21 = (_QWORD *)*v21;
    if ( v21 == (_QWORD *)(a1 + 64) )
      v21 = 0LL;
  }
  ADAPTER_DISPLAY::ReleasePendingVidPnSourceOwner(*(PERESOURCE ***)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 3120LL));
  return 0LL;
}
