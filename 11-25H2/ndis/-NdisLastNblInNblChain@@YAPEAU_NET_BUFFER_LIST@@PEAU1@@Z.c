/*
 * XREFs of ?NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x14005FD30
 * Callers:
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E270 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA0C0 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NET_BUFFER_LIST *__fastcall NdisLastNblInNblChain(struct _NET_BUFFER_LIST *a1)
{
  struct _NET_BUFFER_LIST *Alignment; // rax

  Alignment = (struct _NET_BUFFER_LIST *)a1->Link.Alignment;
  if ( a1->Link.Alignment )
  {
    do
    {
      a1 = Alignment;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  return a1;
}
