/*
 * XREFs of PplFreeToLookasideList @ 0x140028AD0
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x140028CB0 (PplpLazyInitializeLookasideList.c)
 */

void __fastcall PplFreeToLookasideList(__int64 a1, void *a2)
{
  __int64 v3; // rbx

  v3 = a1 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7);
  if ( !*(_BYTE *)(v3 + 176) )
    PplpLazyInitializeLookasideList(a1, v3 + 64);
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v3 + 64), a2);
}
