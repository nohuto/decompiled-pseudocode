/*
 * XREFs of ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140057060
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140056D10 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140089250 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x140057170 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x14015F5A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x14016C320 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14016D360 (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v4; // r10
  USHORT v5; // ax
  struct NDISWATCHDOG__ *ArmedWatchdog; // rdi
  int v7; // ebx
  struct _NET_PNP_EVENT_NOTIFICATION v9; // [rsp+30h] [rbp-C8h] BYREF

  memset(&v9, 0, sizeof(v9));
  if ( !a1->FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler )
    return NdisFNetPnPEvent(a1, a2);
  ndisShallowCopyNetPnPEvent(&v9, a2);
  if ( *(_BYTE *)(v4 + 100) > 6u || *(_BYTE *)(v4 + 100) == 6 && *(_BYTE *)(v4 + 101) >= 0x32u )
  {
    v9.Header.Revision = 2;
    v5 = 172;
  }
  else
  {
    v9.Flags |= 4u;
    v5 = 164;
    v9.Header.Revision = 1;
  }
  v9.Header.Size = v5;
  ArmedWatchdog = ndisAllocateArmedWatchdog(
                    a1,
                    0x12u,
                    *(void **)(v4 + 280),
                    ndisWatchdogPnPTimeout,
                    v9.NetPnPEvent.NetEvent);
  v7 = ndisFInvokeNetPnPEvent(a1, &v9);
  if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(ArmedWatchdog);
  return v7;
}
