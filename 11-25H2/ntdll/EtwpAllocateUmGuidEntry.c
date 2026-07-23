/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x18010E41C
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     EtwpInsertGuidEntry @ 0x18010E48C (EtwpInsertGuidEntry.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(_OWORD *a1)
{
  char *Heap; // rax
  char *v3; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB0uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry((PRTL_BALANCED_NODE)v3);
  }
  return v3;
}
