/*
 * XREFs of ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009C094
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x140013540 (NdisDereferenceWithTag.c)
 */

void __fastcall ndisMDereferenceOpenFromFailedCreationLocked(struct _NDIS_OPEN_BLOCK *a1)
{
  unsigned __int64 *p_RefCountLock; // rbx

  p_RefCountLock = &a1->RefCountLock;
  KeAcquireSpinLockAtDpcLevel(&a1->RefCountLock);
  NdisDereferenceWithTag((ULONG_PTR)a1->RefCountTracker, 1u);
  --a1->References;
  KeReleaseSpinLockFromDpcLevel(p_RefCountLock);
}
