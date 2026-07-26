/*
 * XREFs of ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1401484B8
 * Callers:
 *     NdisPDStartup @ 0x1400AD180 (NdisPDStartup.c)
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1401450B0 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 * Callees:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 */

void __fastcall ndisPDDereferenceClientDriver(struct _NDIS_PROTOCOL_BLOCK *a1, __int64 a2, __int64 a3, int a4)
{
  if ( a1->Header.Type == 3 )
  {
    ndisDereferenceProtocol(a1, 0, 0xEu, a4);
  }
  else if ( a1->Header.Type == 4 )
  {
    ndisDereferenceFilterDriver((struct _NDIS_FILTER_DRIVER_BLOCK *)a1, 0, 4u);
  }
}
