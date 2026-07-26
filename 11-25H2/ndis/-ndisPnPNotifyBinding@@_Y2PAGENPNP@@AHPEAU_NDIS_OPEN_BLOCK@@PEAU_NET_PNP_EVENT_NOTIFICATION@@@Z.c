/*
 * XREFs of ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017E230
 * Callers:
 *     ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401612B0 (-ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x140070750 (WPP_RECORDER_SF_qqZZ.c)
 *     WPP_RECORDER_SF_LqqZZ @ 0x1400726A0 (WPP_RECORDER_SF_LqqZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z @ 0x1400BF380 (-ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAE0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14015F6A0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x14016C320 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPnPNotifyBinding(struct _NDIS_PROTOCOL_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NDIS_MINIPORT_BLOCK *NextProtocol; // r14
  unsigned int v5; // esi
  int v6; // edx
  _NDIS_PROTOCOL_BLOCK *OpenQueue; // rax
  _NDIS_PROTOCOL_BLOCK *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _NET_PNP_EVENT_CODE NetEvent; // eax
  unsigned int v13; // eax
  int v15; // edx
  int v16; // [rsp+20h] [rbp-E0h]
  char v17[8]; // [rsp+38h] [rbp-C8h]
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  char v19[160]; // [rsp+70h] [rbp-90h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v20; // [rsp+110h] [rbp+10h] BYREF

  NextProtocol = (_NDIS_MINIPORT_BLOCK *)a1->NextProtocol;
  v5 = -1073741637;
  memset(&Event, 0, sizeof(Event));
  memset(&v20, 0, sizeof(v20));
  ndisShallowCopyNetPnPEvent(&v20, a2);
  OpenQueue = (_NDIS_PROTOCOL_BLOCK *)a1->OpenQueue;
  if ( OpenQueue->MajorNdisVersion > 6u || OpenQueue->MajorNdisVersion == 6 && OpenQueue->MinorNdisVersion >= 0x32u )
  {
    v20.Header.Revision = 2;
    v20.Header.Size = 172;
  }
  else
  {
    v20.Header.Revision = 1;
    v20.Header.Size = 164;
    if ( (v20.Flags & 4) == 0 )
      v20.Flags |= 4u;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x18u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1);
  v8 = (_NDIS_PROTOCOL_BLOCK *)a1->OpenQueue;
  if ( v8->MajorNdisVersion >= 6u || v8->PnPEventHandler )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v20.NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
    NetEvent = v20.NetPnPEvent.NetEvent;
    if ( v20.NetPnPEvent.NetEvent == NetEventPause && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_LqqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        v10,
        v11,
        v16,
        *((_DWORD *)v20.NetPnPEvent.Buffer + 2),
        (char)NextProtocol,
        (char)a1,
        &v8->Name.Length,
        &NextProtocol->pAdapterInstanceName->Length);
      NetEvent = v20.NetPnPEvent.NetEvent;
    }
    if ( NetEvent == NetEventRestart && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        v10,
        0x1Au,
        (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
        (char)NextProtocol,
        (char)a1,
        &v8->Name.Length,
        &NextProtocol->pAdapterInstanceName->Length);
    NextProtocol->ProcessingOpen = a1;
    v13 = ndisDeliverNetPnPEventSynchronously(v8, a1, &v20);
    NextProtocol->ProcessingOpen = 0LL;
    v5 = v13;
    if ( v20.NetPnPEvent.NetEvent == NetEventQueryPower && v13 && v13 != -1073741637 )
      DbgPrint("***NDIS***: Protocol %wZ failed QueryPower %lx\n", &v8->Name, v13);
  }
  else if ( (unsigned int)(v20.NetPnPEvent.NetEvent - 1) <= 2 )
  {
LABEL_31:
    v5 = 0;
    goto LABEL_14;
  }
  if ( ((__int64)a1->OpenAdapterCompleteHandler & 0x10000000) != 0 && (unsigned int)(v20.NetPnPEvent.NetEvent - 8) <= 1 )
    ndisLegacyProtocolPauseRestartHandler((struct _NDIS_OPEN_BLOCK *)a1, &v20.NetPnPEvent);
  if ( v5 == -1073741637
    && v20.NetPnPEvent.NetEvent == NetEventSetPower
    && (*(_DWORD *)v20.NetPnPEvent.Buffer == 4 || (unsigned int)(*(_DWORD *)v20.NetPnPEvent.Buffer - 2) <= 1) )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&NextProtocol->BindEngine);
    if ( Ndis::BindState::SetBinding(
           (Ndis::BindState *)a1->NotifyBindCompleteWorkItem.m_workitem.Parameter,
           BindingDisabled,
           Reason_MiniportLowPower) )
    {
      memset(v19, 0, sizeof(v19));
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          (struct NDIS_BIND_PROTOCOL_LINK *)a1->NotifyBindCompleteWorkItem.m_workitem.Parameter,
          (struct NDIS_PNPTRACE_LOCALS *)v19);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v15,
            0x1Cu,
            0x1Bu,
            (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
            *(unsigned __int16 **)&v19[8],
            *(_QWORD *)v19);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&NextProtocol->BindEngine);
    goto LABEL_31;
  }
LABEL_14:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = v5;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0xDu,
      0x1Cu,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      v20.NetPnPEvent.NetEvent,
      *(_QWORD *)v17);
  }
  return v5;
}
