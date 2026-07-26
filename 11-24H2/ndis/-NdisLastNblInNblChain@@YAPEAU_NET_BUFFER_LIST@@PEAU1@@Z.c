/*
 * XREFs of ?NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x1400461F0
 * Callers:
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020F60 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2E90 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
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
