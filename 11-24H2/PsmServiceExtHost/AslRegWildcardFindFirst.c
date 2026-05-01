/*
 * XREFs of AslRegWildcardFindFirst @ 0x1800A5784
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009AC9C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslRegWildcardFindClose @ 0x1800A56E0 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x1800A585C (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x1800A5978 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap[2] = 0LL;
  Heap[3] = 0LL;
  Heap[1] = Heap;
  *Heap = Heap;
  Next = AslStringDuplicate(Heap + 3, a3);
  if ( Next < 0
    || (Next = AslpParsePattern(v7[3], v7), Next < 0)
    || (v7[2] = *v7, Next = AslRegWildcardFindNext(a1, v7), Next < 0) )
  {
    AslRegWildcardFindClose(v7);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)Next;
}
