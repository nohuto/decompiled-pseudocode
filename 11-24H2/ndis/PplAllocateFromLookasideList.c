/*
 * XREFs of PplAllocateFromLookasideList @ 0x140028B30
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x140028CB0 (PplpLazyInitializeLookasideList.c)
 */

PVOID __fastcall PplAllocateFromLookasideList(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7);
  if ( !*(_BYTE *)(v1 + 176) )
    PplpLazyInitializeLookasideList(a1, v1 + 64);
  return ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 64));
}
