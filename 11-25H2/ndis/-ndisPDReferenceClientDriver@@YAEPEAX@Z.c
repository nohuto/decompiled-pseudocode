/*
 * XREFs of ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x140148A30
 * Callers:
 *     NdisPDStartup @ 0x1400AD180 (NdisPDStartup.c)
 * Callees:
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140071B10 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400894F0 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 */

bool __fastcall ndisPDReferenceClientDriver(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  bool result; // al

  result = 0;
  if ( a1->Header.Type == 3 )
    return ndisReferenceProtocol(a1, 0xEu);
  if ( a1->Header.Type == 4 )
    return ndisReferenceFilterDriver((struct _NDIS_FILTER_DRIVER_BLOCK *)a1, 4u);
  return result;
}
