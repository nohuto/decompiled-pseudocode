/*
 * XREFs of ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x14015E750
 * Callers:
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140084F90 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14015F6A0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140183290 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x14006CFF0 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x14015E570 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x14015FDA0 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForEventThenDisarmWatchdog(struct NDISWATCHDOG__ *a1, struct _KEVENT *a2)
{
  struct NDISWATCHDOG__ *v3; // rbx

  if ( a1 == (struct NDISWATCHDOG__ *)-1LL )
  {
    ndisWaitForKernelObject(a2);
  }
  else
  {
    v3 = WatchdogFromHandle(a1);
    NdisWatchdogState::Disarm((NdisWatchdogState *)v3);
    NdisWatchdogState::WaitSynchronously((NdisWatchdogState *)v3, a2);
  }
}
