/*
 * XREFs of NdisWdfNotifyWmiAdapterArrival @ 0x140094D00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140051E90 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall NdisWdfNotifyWmiAdapterArrival(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(miniport, 0x00000080))");
  ndisNotifyWmiAdapterArrival(a1);
}
