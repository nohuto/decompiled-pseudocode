/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1800B9CC0
 * Callers:
 *     RtlIdnToNameprepUnicode @ 0x180146840 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800BB090 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 Heap; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
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
