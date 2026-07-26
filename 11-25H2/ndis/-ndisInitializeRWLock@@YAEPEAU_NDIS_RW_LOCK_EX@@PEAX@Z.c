/*
 * XREFs of ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x14006E460
 * Callers:
 *     NdisAllocateRWLock @ 0x14006E390 (NdisAllocateRWLock.c)
 *     ?ndisVerifyNdisAllocateRWLock@@YAPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1400C9840 (-ndisVerifyNdisAllocateRWLock@@YAPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 * Callees:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

unsigned __int8 __fastcall ndisInitializeRWLock(struct _NDIS_RW_LOCK_EX *a1, void *a2)
{
  struct PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x7772444Eu);
  *((_QWORD *)a1 + 4) = PerProcessorSlot;
  if ( PerProcessorSlot )
  {
    *((_QWORD *)a1 + 1) = a2;
    KeInitializeSpinLock((PKSPIN_LOCK)a1 + 2);
    LOBYTE(PerProcessorSlot) = 1;
  }
  return (unsigned __int8)PerProcessorSlot;
}
