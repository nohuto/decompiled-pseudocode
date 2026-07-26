/*
 * XREFs of ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401529A0
 * Callers:
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140075090 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x14008E6C0 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1401527F0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140171ED0 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140173270 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1401523D0 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140152B80 (-ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NO.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401530F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1401532C0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NET_PNP_EVENT_NOTIFICATION *a3)
{
  unsigned int v3; // edi
  _NET_PNP_EVENT *p_NetPnPEvent; // r15
  unsigned __int64 NetEvent; // r13
  int (__fastcall *PnPEventHandler)(void *, _NET_PNP_EVENT *); // r12
  struct NDISWATCHDOG__ *Watchdog; // rbp
  struct _NDIS_PROTOCOL_BLOCK *v11; // rdx
  int v12; // eax
  int (__fastcall *v14)(void *, _NET_PNP_EVENT *); // rax
  unsigned int v15; // [rsp+90h] [rbp+8h]
  void *SpinLock; // [rsp+98h] [rbp+10h]

  v3 = 0;
  if ( a2 )
    SpinLock = (void *)a2->Ref.SpinLock;
  else
    SpinLock = 0LL;
  p_NetPnPEvent = &a3->NetPnPEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xEu,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1,
      (char)a2,
      p_NetPnPEvent->NetEvent);
  NetEvent = p_NetPnPEvent->NetEvent;
  v15 = ndisWatchdogPnPTimeout;
  if ( a1->MajorNdisVersion < 6u )
    PnPEventHandler = 0LL;
  else
    PnPEventHandler = a1->PnPEventHandler;
  Watchdog = ndisAllocateWatchdog();
  v11 = a2;
  if ( !a2 )
    v11 = a1;
  ndisArmWatchdog(Watchdog, v11, 2u, PnPEventHandler, v15, NetEvent);
  if ( a1->MajorNdisVersion < 6u )
  {
    v14 = a1->PnPEventHandler;
    if ( !v14 )
      goto LABEL_13;
    v12 = v14(SpinLock, p_NetPnPEvent);
  }
  else
  {
    v12 = ndisInvokeNetPnPEvent(a1, (struct _NDIS_OPEN_BLOCK *)a2, a3);
  }
  v3 = v12;
  if ( v12 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog(Watchdog, (struct _KEVENT *)a3->NetPnPEvent.NdisReserved[0]);
    v3 = a3->NetPnPEvent.NdisReserved[1];
  }
LABEL_13:
  if ( Watchdog != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(Watchdog);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xFu,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1,
      (char)a2,
      a3->NetPnPEvent.NetEvent,
      v3);
  return v3;
}
