/*
 * XREFs of RtlpExtendListLookup @ 0x180038450
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180037C0C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpPopulateListIndex @ 0x180037E98 (RtlpPopulateListIndex.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

void __fastcall RtlpExtendListLookup(__int64 **a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 Heap; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    Heap = RtlAllocateHeap(a1);
    if ( Heap )
    {
      *(_BYTE *)(Heap - 1) = 1;
      *(_DWORD *)(Heap + 8) = v4 + *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap + 24) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(Heap + 40) = Heap + 56;
      *(_QWORD *)(Heap + 48) = ((unsigned __int64)v4 >> 3) + Heap + 56;
      *(_QWORD *)(Heap + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap;
      RtlpPopulateListIndex((__int64)a1, a1[39]);
    }
  }
}
