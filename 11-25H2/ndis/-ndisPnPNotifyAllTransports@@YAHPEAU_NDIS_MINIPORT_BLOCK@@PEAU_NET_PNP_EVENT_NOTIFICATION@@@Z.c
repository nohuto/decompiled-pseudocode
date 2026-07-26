/*
 * XREFs of ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140056D10 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140067E60 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14006D5C0 (-ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071940 (-ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x140072540 (-ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z.c)
 *     ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140072DD0 (-ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     McTemplateK0jqxzdd_EtwWriteTransfer @ 0x1400893E0 (McTemplateK0jqxzdd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ZLqL @ 0x1400AFC3C (WPP_RECORDER_SF_ZLqL.c)
 *     ?ndisReceiveQueueingPaused@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C925C (-ndisReceiveQueueingPaused@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C9280 (-ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisUpdateNDKMiniportState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14014B6E0 (-ndisUpdateNDKMiniportState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAE0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisValidateNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140175990 (-ndisValidateNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017E230 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NET_PNP_EVENT_CODE NetEvent; // r13d
  unsigned __int64 v3; // rsi
  int *Buffer; // r15
  unsigned int v7; // ebp
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  struct _NDIS_OPEN_BLOCK *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  struct _NET_PNP_EVENT_NOTIFICATION *v16; // rdx
  struct _NDIS_MINIPORT_BLOCK *v17; // rcx
  __int64 m_numElements; // r14
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v19; // rdi
  int v20; // edx
  int v21; // [rsp+20h] [rbp-118h]
  char v22[8]; // [rsp+38h] [rbp-100h]
  struct _KEVENT v23; // [rsp+50h] [rbp-E8h] BYREF
  char v24[160]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  NetEvent = a2->NetPnPEvent.NetEvent;
  v3 = 0LL;
  Buffer = (int *)a2->NetPnPEvent.Buffer;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v7 = 0;
  memset(&v23, 0, sizeof(v23));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x10u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      NetEvent);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && NetEvent == NetEventRestart && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart(a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
    ndisAcquireMiniportPnPEventLock(a1, &v23);
  }
  else
  {
    ndisAcquireMiniportPnPEventLock(v8, &v23);
    if ( (unsigned int)(NetEvent - 13) <= 1 )
    {
      v7 = ndisValidateNDKPnPEvents(a1, a2);
      if ( v7 )
        goto LABEL_11;
      if ( NetEvent == NetEventNDKEnable )
        ndisUpdateNDKMiniportState(v17, v16);
    }
  }
  for ( i = ndisReferenceNextUnprocessedOpenEx(a1); i; i = ndisReferenceNextUnprocessedOpenEx(a1) )
  {
    v7 = ndisPnPNotifyBinding(i, a2);
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)&v22[4] = HIDWORD(a1);
        WPP_RECORDER_SF_ZLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v12, v13, v21, &i->ProtocolHandle->Name.Length);
      }
      if ( (byte_140125104 & 8) != 0 )
        McTemplateK0jqxzdd_EtwWriteTransfer(
          v11,
          v10,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          i->ProtocolHandle->Name.Buffer,
          NetEvent,
          v7);
      if ( NetEvent != NetEventQueryPower
        && (NetEvent == NetEventQueryRemoveDevice || NetEvent == NetEventSetPower && *Buffer > 1) )
      {
        goto LABEL_10;
      }
      v7 = 0;
    }
  }
  if ( NetEvent == NetEventNDKDisable )
    ndisUpdateNDKMiniportState(a1, a2);
LABEL_10:
  ndisUnprocessAllOpens(a1);
LABEL_11:
  ndisReleaseMiniportPnPEventLock(a1);
  if ( NetEvent == NetEventSetPower && *Buffer == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    while ( v3 != m_numElements )
    {
      if ( v3 >= a1->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      v19 = &a1->Bindings.Protocols._p[v3];
      if ( Ndis::BindState::SetBinding(&v19->__ptr_.__value_->BindState, BindingEnabled, Reason_MiniportLowPower) )
      {
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v19->__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              0x1Cu,
              0x12u,
              (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
              *(unsigned __int16 **)&v24[8],
              *(_QWORD *)v24);
        }
      }
      ++v3;
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && NetEvent == NetEventPause && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused(a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v22 = v7;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      NetEvent,
      *(_QWORD *)v22);
  }
  return v7;
}
