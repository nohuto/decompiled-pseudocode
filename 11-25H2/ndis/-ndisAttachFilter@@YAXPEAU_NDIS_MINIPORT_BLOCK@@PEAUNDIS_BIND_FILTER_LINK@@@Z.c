/*
 * XREFs of ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015E430
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x140075FC0 (WPP_RECORDER_SF__guid_Dq.c)
 *     WPP_RECORDER_SF__guid_DqD @ 0x140078BF0 (WPP_RECORDER_SF__guid_DqD.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400894F0 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x14014A198 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015EDE0 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 */

void __fastcall ndisAttachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *this, __int64 a3)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rcx
  struct _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // rbp
  int v7; // esi
  __int64 v8; // r8
  int v9; // edx
  int v10; // [rsp+20h] [rbp-108h]
  struct _UNICODE_STRING v11[10]; // [rsp+50h] [rbp-D8h] BYREF

  p = this->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)this, a3, 0x1Fu, v10, (__int64)&p->_t.Guid);
  v7 = ndisAttachFilterInner(a1, RunningDriver, this->FilterIndex, this);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&this->BindDriver._p->_t.Guid,
      v8,
      0x20u,
      v10,
      (__int64)&this->BindDriver._p->_t.Guid);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v7 )
  {
    this->BindState.m_LastErrorCode = v7;
    if ( Ndis::BindState::SetBinding(&this->BindState, BindingDisabled, Reason_LastBindAttemptFailed) )
    {
      memset(v11, 0, sizeof(v11));
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, v11);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            0x1Cu,
            0x21u,
            (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
            v11[0].Buffer,
            *(_QWORD *)&v11[0].Length);
      }
    }
    if ( ndisReferenceFilterDriver(RunningDriver, 0) )
    {
      NdisTraceLoggingRareFilterPath((__int64)RunningDriver);
      ndisDereferenceFilterDriver(RunningDriver, 0, 0);
    }
    else
    {
      NdisTraceLoggingRareFilterPath(0LL);
    }
  }
  else
  {
    ndisClearTransientBindFailuresAboveThisFilter(a1, this);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
