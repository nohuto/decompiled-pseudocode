/*
 * XREFs of NdisWdfNotifyWmiAdapterArrival @ 0x14009E860
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140054BF0 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall NdisWdfNotifyWmiAdapterArrival(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("((((miniport)->Flags & (0x00000080)) != 0))");
  ndisNotifyWmiAdapterArrival(a1);
}
