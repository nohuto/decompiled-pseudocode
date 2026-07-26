/*
 * XREFs of ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400C47E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140021940 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140021AA0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCancelSendNetBufferListsOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  if ( !a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync((__int64)a1) )
  {
    a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler(a1->MiniportAdapterContext, a2);
    if ( a1->SelectiveSuspend )
      ndisClearBusy(a1, 1, 53);
  }
}
