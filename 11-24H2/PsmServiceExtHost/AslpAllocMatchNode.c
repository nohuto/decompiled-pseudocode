/*
 * XREFs of AslpAllocMatchNode @ 0x1800A58DC
 * Callers:
 *     AslpParsePattern @ 0x1800A5978 (AslpParsePattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpAllocMatchNode(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *Heap; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v7 = 0;
  if ( Heap )
  {
    Heap[1] = Heap;
    *Heap = Heap;
    *((_DWORD *)Heap + 10) = 0;
    Heap[4] = 0LL;
    Heap[3] = a2;
    Heap[2] = a1;
    v8 = *a3;
    if ( *(__int64 **)(*a3 + 8) != a3 )
      __fastfail(3u);
    *Heap = v8;
    Heap[1] = a3;
    *(_QWORD *)(v8 + 8) = Heap;
    *a3 = (__int64)Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
