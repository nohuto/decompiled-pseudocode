/*
 * XREFs of ?ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140074360
 * Callers:
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140167A50 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_RECEIVE_FILTER_BLOCK *__fastcall ndisFindFirstReceiveFilterByOpen(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  _LIST_ENTRY *v3; // rsi
  KIRQL v4; // r8
  _LIST_ENTRY *i; // rdx

  MiniportHandle = a1->MiniportHandle;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  for ( i = MiniportHandle->ReceiveFilterList.Flink; i != &MiniportHandle->ReceiveFilterList; i = i->Flink )
  {
    if ( (struct _NDIS_OPEN_BLOCK *)i[4].Flink == a1 )
    {
      v3 = i;
      break;
    }
  }
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v4);
  return (struct _NDIS_RECEIVE_FILTER_BLOCK *)v3;
}
