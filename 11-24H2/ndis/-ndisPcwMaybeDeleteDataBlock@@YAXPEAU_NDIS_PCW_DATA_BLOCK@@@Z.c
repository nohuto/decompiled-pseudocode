/*
 * XREFs of ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x14013F70C
 * Callers:
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14013F594 (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwMaybeDeleteDataBlock(struct _NDIS_PCW_DATA_BLOCK *a1)
{
  if ( !*((_DWORD *)a1 + 42) )
    ExFreePoolWithTag(a1, 0);
}
