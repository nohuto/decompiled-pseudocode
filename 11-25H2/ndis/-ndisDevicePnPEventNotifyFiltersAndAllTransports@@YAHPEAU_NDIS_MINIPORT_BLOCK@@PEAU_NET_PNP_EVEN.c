/*
 * XREFs of ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990
 * Callers:
 *     NdisMNetPnPEvent @ 0x14007D770 (NdisMNetPnPEvent.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14007D880 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14008CE90 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009C888 (-ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14009CA10 (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x14015D720 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140171C40 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017FF00 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140056F30 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140057060 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x14016C320 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NET_PNP_EVENT_CODE NetEvent; // r14d
  int *Buffer; // rsi
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rsi
  unsigned int v9; // ebx
  int v10; // edx
  struct _NET_PNP_EVENT_NOTIFICATION v12; // [rsp+40h] [rbp-89h] BYREF

  NetEvent = a2->NetPnPEvent.NetEvent;
  Buffer = (int *)a2->NetPnPEvent.Buffer;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x40u,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      a2->NetPnPEvent.NetEvent);
  *(_QWORD *)&v12.NetPnPEvent.NetEvent = 23LL;
  *(_QWORD *)&v12.Header.Type = 11272832LL;
  memset(&v12.NetPnPEvent.Buffer, 0, 160);
  ndisShallowCopyNetPnPEvent(&v12, a2);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_12;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_12;
  if ( NetEvent == NetEventSetPower && *Buffer > 1 && (a1->PnPFlags & 0x20) == 0 )
    v12.Flags |= 1u;
  HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(a1, 0LL, FPNPREF_DPNPNOTIFYT);
  v8 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_12:
    v9 = ndisPnPNotifyAllTransports(a1, &v12);
  }
  else
  {
    v9 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, &v12);
    ndisDereferenceRef(&v8->PnPRef.SpinLock, 7u);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      NetEvent,
      v9);
  return v9;
}
