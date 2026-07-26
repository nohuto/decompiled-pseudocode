/*
 * XREFs of ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400A9468
 * Callers:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400A94C8 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveQueueToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RECEIVE_QUEUE_BLOCK *a2)
{
  _LIST_ENTRY *p_ReceiveQueueList; // r11
  _LIST_ENTRY *Flink; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v8; // rax

  p_ReceiveQueueList = &a1->ReceiveQueueList;
  Flink = a1->ReceiveQueueList.Flink;
  v5 = 0;
  while ( Flink != p_ReceiveQueueList )
  {
    v6 = (unsigned int)Flink[3].Flink;
    if ( v6 == a2->QueueId )
      return (unsigned int)-1073741270;
    if ( v6 > a2->QueueId )
      break;
    Flink = Flink->Flink;
  }
  Blink = Flink->Blink;
  v8 = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  a2->AdapterLink.Flink = v8;
  a2->AdapterLink.Blink = Blink;
  v8->Blink = &a2->AdapterLink;
  Blink->Flink = &a2->AdapterLink;
  ++a1->NumReceiveQueues;
  return v5;
}
