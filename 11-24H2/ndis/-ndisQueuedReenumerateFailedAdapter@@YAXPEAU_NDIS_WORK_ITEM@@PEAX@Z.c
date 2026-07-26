/*
 * XREFs of ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14013E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6D4C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock(a2, 0x13u);
  ndisDereferenceMiniport(a2, 9u);
  ExFreePoolWithTag(P, 0);
}
