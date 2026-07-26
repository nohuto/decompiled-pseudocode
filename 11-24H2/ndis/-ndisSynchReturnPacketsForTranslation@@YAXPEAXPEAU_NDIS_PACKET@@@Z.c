/*
 * XREFs of ?ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400603F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReturnPacketToNetBufferList @ 0x14008D890 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisSynchReturnPacketsForTranslation(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
