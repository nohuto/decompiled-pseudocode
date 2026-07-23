/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1800B1A80
 * Callers:
 *     RtlIdnToNameprepUnicode @ 0x180144BF0 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800B2E50 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  PVOID Heap; // rbx
  PVOID v11; // rax
  void *v12; // rdi
  unsigned int v13; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v12 = v11;
  if ( Heap && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Heap);
LABEL_4:
    RtlpSysVolFree(Heap);
    goto LABEL_5;
  }
  v13 = -1073741801;
  if ( Heap )
    goto LABEL_4;
LABEL_5:
  if ( v12 )
    RtlpSysVolFree(v12);
  return v13;
}
