/*
 * XREFs of ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400CB790
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x14003CD40 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCancelSendNetBufferListsOnMiniport(_QWORD *a1, unsigned __int64 a2)
{
  if ( !a1[556] || ndisSetBusyAsync((__int64)a1, 1, 0x35u, a2, 0) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(a1[470] + 200LL))(a1[3], a2);
    if ( a1[556] )
      ndisClearBusy((__int64)a1, 1, 53);
  }
}
