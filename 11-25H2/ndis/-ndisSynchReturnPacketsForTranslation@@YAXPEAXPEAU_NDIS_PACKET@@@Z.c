/*
 * XREFs of ?ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14007C320
 * Callers:
 *     <none>
 * Callees:
 *     ndisReturnPacketToNetBufferList @ 0x140099130 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisSynchReturnPacketsForTranslation(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
