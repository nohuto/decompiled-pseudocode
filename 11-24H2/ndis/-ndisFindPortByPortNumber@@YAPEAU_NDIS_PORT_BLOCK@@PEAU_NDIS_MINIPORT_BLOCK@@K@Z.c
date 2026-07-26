/*
 * XREFs of ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400A7EE0
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1400A7FE8 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     NdisMFreePort @ 0x1400A80D0 (NdisMFreePort.c)
 *     ?ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB590 (-ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PORT_BLOCK *__fastcall ndisFindPortByPortNumber(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  __int64 v2; // r8
  _LIST_ENTRY *i; // rax

  v2 = 0LL;
  for ( i = a1->PortList.Flink; i != &a1->PortList; i = i->Flink )
  {
    if ( HIDWORD(i[1].Blink) == a2 )
      return (struct _NDIS_PORT_BLOCK *)i;
    if ( HIDWORD(i[1].Blink) > a2 )
      return (struct _NDIS_PORT_BLOCK *)v2;
  }
  return (struct _NDIS_PORT_BLOCK *)v2;
}
