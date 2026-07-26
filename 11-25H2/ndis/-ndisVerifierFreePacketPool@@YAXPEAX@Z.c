/*
 * XREFs of ?ndisVerifierFreePacketPool@@YAXPEAX@Z @ 0x1400CD080
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x14008A600 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPoolInternal(a1);
}
