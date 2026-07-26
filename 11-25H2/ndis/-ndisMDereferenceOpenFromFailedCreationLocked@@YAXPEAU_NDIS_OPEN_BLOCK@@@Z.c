/*
 * XREFs of ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400A4F24
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1400107F0 (NdisDereferenceWithTag.c)
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
