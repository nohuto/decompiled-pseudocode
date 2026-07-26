/*
 * XREFs of ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x14006D290
 * Callers:
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x14013DB50 (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FD60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

bool __fastcall ndisReferenceFilterDriver(struct _NDIS_FILTER_DRIVER_BLOCK *a1, unsigned __int8 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  return ndisReferenceRefEx(&a1->Ref.SpinLock, a2, (enum _NDIS_REFERENCE_STATUS *)&v3);
}
