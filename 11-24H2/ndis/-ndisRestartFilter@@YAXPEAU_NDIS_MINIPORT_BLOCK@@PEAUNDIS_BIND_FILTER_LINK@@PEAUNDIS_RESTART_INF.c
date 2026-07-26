/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401545F0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x14005B590 (WPP_RECORDER_SF__guid_Dq.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x14005D620 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     WPP_RECORDER_SF__guid_DqD @ 0x14005D790 (WPP_RECORDER_SF__guid_DqD.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x14013F2D8 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1401545D0 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140174100 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *this,
        struct NDIS_RESTART_INFORMATION *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void *BindContext; // r14
  int restarted; // esi
  __int64 v10; // r8
  int v11; // edx
  int v12; // edx
  int v13; // [rsp+20h] [rbp-108h]
  struct _UNICODE_STRING v14[10]; // [rsp+50h] [rbp-D8h] BYREF

  BindContext = Ndis::BindState::GetBindContext(&this->BindState);
  if ( !*(_DWORD *)(v7 + 8) )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      v7,
      0x12u,
      v13,
      (__int64)&this->BindDriver._p->_t.Guid);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  restarted = ndisRestartFilterInner((struct _NDIS_FILTER_BLOCK *)BindContext, a3);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&this->BindDriver._p->_t.Guid,
      v10,
      0x13u,
      v13,
      (__int64)&this->BindDriver._p->_t.Guid);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(*((_QWORD *)BindContext + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    this->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&this->BindState, BindingDisabled, Reason_LastRestartAttemptFailed) )
    {
      memset(v14, 0, sizeof(v14));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, v14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            0x1Cu,
            0x15u,
            (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
            v14[0].Buffer,
            *(_QWORD *)&v14[0].Length);
      }
    }
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( this->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&this->BindState, DatapathPaused, PauseReason_RestartNeeded) )
    {
      memset(v14, 0, sizeof(v14));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, v14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v11,
            0x1Cu,
            0x14u,
            (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
            v14[0].Buffer,
            *(_QWORD *)&v14[0].Length);
      }
    }
    this->BindState.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
