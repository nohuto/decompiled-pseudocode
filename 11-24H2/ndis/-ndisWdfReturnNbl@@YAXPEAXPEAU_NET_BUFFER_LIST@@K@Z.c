/*
 * XREFs of ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140021940 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140021AA0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfReturnNbl(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char busy; // bp
  unsigned int v4; // ebx
  struct _NET_BUFFER_LIST *i; // rax

  busy = 0;
  v4 = 0;
  if ( a1[556] && ndisIdleCondition == NdisIdleConditionAnyLowLatency )
  {
    for ( i = a2; i; ++v4 )
      i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
    busy = ndisSetBusyAsync(a1, v4, 54LL, a2, 0);
  }
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
  if ( busy )
    ndisClearBusy(a1, v4, 54LL);
}
