/*
 * XREFs of NdisMNetPnPEvent @ 0x14007D770
 * Callers:
 *     NdisIMNotifyPnPEvent @ 0x1400AFAA0 (NdisIMNotifyPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1400706B0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14007D880 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14008CE90 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1400AEAF4 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x14016C320 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 */

NDIS_STATUS __stdcall NdisMNetPnPEvent(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  _NET_PNP_EVENT_CODE NetEvent; // ebx
  NDIS_STATUS v5; // edi
  NDIS_STATUS v6; // eax
  unsigned __int64 v7; // rdx
  struct _NET_PNP_EVENT_NOTIFICATION v9; // [rsp+40h] [rbp-E8h] BYREF

  NetEvent = NetPnPEventNotification->NetPnPEvent.NetEvent;
  v5 = 0;
  memset(&v9, 0, sizeof(v9));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Bu,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)MiniportAdapterHandle,
      NetEvent);
  if ( NetEvent == NetEventPortActivation )
  {
    v6 = ndisPnPPortActivation((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NetPnPEventNotification);
LABEL_5:
    v5 = v6;
  }
  else
  {
    v7 = 0x140000000uLL;
    switch ( NetEvent )
    {
      case NetEventQueryPower:
      case NetEventQueryRemoveDevice:
      case NetEventCancelRemoveDevice:
      case NetEventPnPCapabilities:
      case NetEventNDKEnable:
      case NetEventNDKDisable:
      case NetEventSwitchActivate:
        ndisInitializeNetPnPEvent(&v9, 0LL);
        ndisShallowCopyNetPnPEvent(&v9, NetPnPEventNotification);
        v6 = ndisDevicePnPEventNotifyFiltersAndAllTransports((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &v9);
        goto LABEL_5;
      case NetEventPortDeactivation:
        v6 = ndisPnPPortDeactivation((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NetPnPEventNotification);
        goto LABEL_5;
      case NetEventAllowBindsAbove:
      case NetEventInhibitBindsAbove:
      case NetEventAllowStart:
      case NetEventRequirePause:
        if ( *((_BYTE *)MiniportAdapterHandle + 32) > 6u
          || *((_BYTE *)MiniportAdapterHandle + 32) == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
        {
          ndisBindRequest(
            (ULONG_PTR)MiniportAdapterHandle,
            (Ndis::BindEngine *)((char *)MiniportAdapterHandle + 5120),
            (Ndis::BindState *)((char *)MiniportAdapterHandle + 5048),
            (ULONG_PTR)NetPnPEventNotification);
        }
        break;
      default:
        break;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)MiniportAdapterHandle,
      NetEvent,
      v5);
  return v5;
}
