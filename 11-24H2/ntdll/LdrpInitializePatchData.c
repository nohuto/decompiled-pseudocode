/*
 * XREFs of LdrpInitializePatchData @ 0x1800FB56C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 */

__int64 LdrpInitializePatchData()
{
  _QWORD *Heap; // rax

  Heap = (_QWORD *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 0x18uLL);
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)Heap = 1;
  Heap[1] = LdrLoadDll;
  Heap[2] = LdrGetProcedureAddress;
  NtCurrentPeb()->PatchLoaderData = Heap;
  return 0LL;
}
