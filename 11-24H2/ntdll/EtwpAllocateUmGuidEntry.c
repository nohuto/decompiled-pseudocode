/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x18010C304
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     EtwpInsertGuidEntry @ 0x18010C374 (EtwpInsertGuidEntry.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(_OWORD *a1)
{
  char *Heap; // rax
  char *v3; // rbx

  Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xB0uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry(v3);
  }
  return v3;
}
